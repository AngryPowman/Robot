#ifndef HTTP_CONNECTION_H_
#define HTTP_CONNECTION_H_

#include <boost/asio.hpp>
#include <boost/bind.hpp>
#include <boost/function.hpp>
#include "Common.h"
#include "TCPConnection.hpp"

using namespace boost::asio;

typedef boost::function<void (const boost::system::error_code&,
    boost::asio::ip::tcp::resolver::iterator)> AsyncConnectCallback;

class HttpConnection : public TCPConnection
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
    /*
    template <typename Handler> bool connect(const std::string& host, Handler& handler) {}
    template <typename Handler> bool connect_Async(const std::string& host, Handler& handler) {}
    template <typename Handler> void write(byte* data, size_t len, Handler& handler) {}
    template <typename Handler> void write_Async(byte* data, size_t len, Handler& handler) {}
    template <typename Handler> void read(byte* data, size_t len, Handler& handler) {}
    template <typename Handler> void read_Async(byte* data, size_t len, Handler& handler) {}
    */

    template <typename Handler> bool connect(const std::string& host, Handler& handler) 
    {
        if (isConnected() == true)
        {
            return false;
        }

        resolverHost(host);
        _socket.connect(_endpoint, _error);

        if (_error)
        {
            cout << _error.message() << endl;
            return false;
        }

        return true;
    }

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

    template <typename Handler> size_t write(byte* data, size_t len, Handler& handler) 
    {
        size_t transferredLen = _socket.send(boost::asio::buffer(data, len), 0, _error);
        return transferredLen;
    }

    template <typename Handler> void write_Async(byte* data, int32 len, Handler& handler, int32 timeout = 5000)
    {
        _socket.get_io_service().reset();
        _deadLineTimer.expires_from_now(boost::posix_time::milliseconds(timeout));
        boost::asio::async_write(
            _socket,
            boost::asio::buffer(data, len), 
            boost::asio::transfer_all(),
            boost::bind(
                &Handler::onWriteCompleted, handler, 
                boost::asio::placeholders::error, 
                boost::asio::placeholders::bytes_transferred)
        );

        _socket.get_io_service().run();
    }

    template <typename Handler> size_t read(byte* data, size_t len, Handler& handler)
    {
        size_t recvLen = _socket.receive(boost::asio::buffer(data, len), 0, _error);
        return recvLen;
    }

    template <typename Handler> void read_Async(Handler& handler, int32 timeout = 5000)
    {
        if (isConnected() == true)
        {
            return false;
        }

        _socket.get_io_service().reset();
        _deadLineTimer.expires_from_now(boost::posix_time::milliseconds(timeout));
        boost::asio::async_read(
            _socket,
            boost::asio::buffer(data, len), 
            boost::asio::transfer_all(),
            boost::bind(
            &Handler::onWriteCompleted, handler, 
            boost::asio::placeholders::error, 
            boost::asio::placeholders::bytes_transferred)
            );

        _socket.get_io_service().run();
    }


public:
    const boost::system::error_code& errorCode() const
    {
        return _error;
    }

    bool isConnected()
    {
        return _isConnected;
    }

    void close()
    {
        _socket.close();
        _isConnected = false;
    }

private:
    void _onWrite(const boost::system::error_code& error, std::size_t bytes_transferred)
    {

    }

    void resolverHost(const std::string& host)
    {
        _socket.get_io_service().reset();
        _error.assign(0, boost::system::get_system_category());

        boost::asio::ip::tcp::resolver resolver(_io_service);
        boost::asio::ip::tcp::resolver::query query(host, "80");
        _endpoint_iterator = resolver.resolve(query);
        _endpoint = *_endpoint_iterator;
    }

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