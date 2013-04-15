#ifndef HTTP_CONNECTION_H_
#define HTTP_CONNECTION_H_

#include <boost/shared_ptr.hpp>
#include <boost/enable_shared_from_this.hpp>
#include <boost/asio.hpp>
#include <boost/bind.hpp>
#include <boost/function.hpp>
#include "Common.h"

using namespace boost::asio;

typedef boost::function<void (const boost::system::error_code&,
    boost::asio::ip::tcp::resolver::iterator)> AsyncConnectCallback;

class HttpConnection
    : public boost::enable_shared_from_this<HttpConnection>, public boost::noncopyable
{
    enum CALL_METHOD { SYNCHRONIZATION, ASYNCHRONOUS };

public:
    HttpConnection(boost::asio::io_service& io_service)
        : _socket(io_service), 
        _deadLineTimer(io_service),
        _isConnected(false)
    {
    }

    ~HttpConnection()
    {
    }

public:
    /*Asynchronous Methods*/
    template <typename Handler> bool connect_Async(const std::string& host, Handler& handler, int32 timeout = 5000)
    {
        if (isConnected() == true)
        {
            return false;
        }

        _timeout = timeout;
        resolverHost(host);

        _deadLineTimer.expires_from_now(boost::posix_time::milliseconds(_timeout));
        _socket.async_connect(
            _endpoint, 
            boost::bind(&Handler::onConnected, &handler, boost::asio::placeholders::error, ++_endpoint_iterator)
            );

        _deadLineTimer.async_wait(boost::bind(&Handler::onConnectionTimeout, handler));
        _socket.get_io_service().run();
        return true;
    }
    template <typename Handler> bool startWrite_Async();
    template <typename Handler> bool startRead_Async();


    /*Synchronized Methods*/
    bool connect(const std::string& host)
    {
        if (isConnected() == true)
        {
            return false;
        }

        resolverHost(host);
        const boost::system::error_code& err = _socket.connect(_endpoint, _error);
        if (err)
        {
            cout << err.message() << endl;
            return false;
        }

        return true;
    }



private:
    void resolverHost(const std::string& host)
    {
        _socket.get_io_service().reset();
        _error.assign(0, boost::system::get_system_category());

        boost::asio::ip::tcp::resolver resolver(_io_service);
        boost::asio::ip::tcp::resolver::query query(host, "80");
        _endpoint_iterator = resolver.resolve(query);
        _endpoint = *_endpoint_iterator;
    }

    const boost::system::error_code& errorCode() const
    {
        return _error;
    }

protected:
    const boost::asio::ip::tcp::endpoint& getEndpoint() const;

    bool isConnected()
    {
        return _isConnected;
    }

    void close()
    {
        _socket.close();
        _isConnected = false;
    }


public:
    /*void onConnected(const boost::system::error_code& error,
        boost::asio::ip::tcp::resolver::iterator endpoint_iter)
    {
        if (error)
        {
            cout << "Connection exception, erorr = " << error << endl;
            close();
            return;
        }

        _isConnected = true;
        cout << "Connected to " 
            << endpoint_iter->host_name() << ":" << endpoint_iter->endpoint().port()
            << endl;
    }

    void onConnectionTimeout()
    {
        if (isConnected() == true)
        {
            return;
        }

        cout << "connection timeout." << endl;
    }*/

private:
    bool _isConnected;
    int32 _timeout;
    boost::asio::ip::tcp::socket _socket;
    boost::asio::io_service _io_service;
    boost::asio::ip::tcp::endpoint _endpoint;
    boost::asio::ip::tcp::resolver::iterator _endpoint_iterator;
    boost::system::error_code _error;
    boost::asio::deadline_timer _deadLineTimer;

private:
    //AsyncConnectCallback _connectedCallback;
};


#endif