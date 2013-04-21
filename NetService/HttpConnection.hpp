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

template <typename Handler>
class HttpConnection : public TCPConnection
{
public:
    HttpConnection(boost::asio::io_service& io_service, Handler& handler)
        : _socket(io_service), 
        _isConnected(false),
        _handler(&handler)
    {
    }

    ~HttpConnection()
    {
    }

public:
    bool connect(const std::string& host)
    {
        if (isConnected() == true)
        {
            return false;
        }

        resolverHost(host);

        _socket.connect(*_endpoint_iterator, _error);

        if (_error)
        {
            cout << _error.message() << endl;
            return false;
        }

        _handler->onConnection(_error, _endpoint_iterator);

        return true;
    }

    bool connect_Async(const std::string& host)
    {
        if (isConnected() == true)
        {
            return false;
        }

        resolverHost(host);

        _socket.async_connect(
            *_endpoint_iterator, 
            boost::bind(&Handler::onConnection, _handler, boost::asio::placeholders::error, _endpoint_iterator)
            );

        _socket.get_io_service().run();
        return true;
    }

    size_t write(byte* data, size_t len) 
    {
        size_t transferredLen = _socket.send(boost::asio::buffer(data, len), 0, _error);
        _handler->onWrite(_error, transferredLen, data);
        return transferredLen;
    }

    void write_Async(byte* data, int32 len)
    {
        _socket.get_io_service().reset();
        boost::asio::async_write(
            _socket,
            boost::asio::buffer(data, len), 
            boost::asio::transfer_all(),
            boost::bind(
                &Handler::onWrite, handler, 
                boost::asio::placeholders::error, 
                boost::asio::placeholders::bytes_transferred,
                data
                )
        );

        _socket.get_io_service().run();
    }

    size_t read(byte* data, size_t len)
    {
        size_t recvLen = _socket.receive(boost::asio::buffer(data, len), 0, _error);
        _handler->onRead(_error, recvLen);
        return recvLen;
    }

    void read_Async()
    {
        _socket.get_io_service().reset();
        boost::asio::async_read(
            _socket,
            boost::asio::buffer(data, len), 
            boost::asio::transfer_all(),
            boost::bind(
            &Handler::onRead, handler, 
            boost::asio::placeholders::error, 
            boost::asio::placeholders::bytes_transferred)
            );

        _socket.get_io_service().run();
    }


public:
    boost::asio::ip::tcp::socket& socket() const
    {
        return _socket;
    }

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

    void resolverHost(const std::string& host)
    {
        _socket.get_io_service().reset();
        _error.assign(0, boost::system::get_system_category());

        boost::asio::ip::tcp::resolver resolver(_io_service);
        boost::asio::ip::tcp::resolver::query query(host, "80");
        _endpoint_iterator = resolver.resolve(query);
    }

private:
    bool _isConnected;
    boost::asio::ip::tcp::socket _socket;
    boost::asio::io_service _io_service;
    boost::asio::ip::tcp::resolver::iterator _endpoint_iterator;
    boost::system::error_code _error;
    Handler* _handler;
};


#endif