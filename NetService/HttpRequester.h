#ifndef HTTP_REQUESTER_H_
#define HTTP_REQUESTER_H_

#include "ISocketHandler.h"
#include "HeaderCollection.hpp"
#include "HttpConnection.hpp"

enum RequestMethod
{
    METHOD_GET,
    METHOD_POST
};

class HttpRequester 
    : public ISocketHandler, public boost::noncopyable
{
    friend class HttpConnection<HttpRequester>;

public:
    HttpRequester();
    HttpRequester(const string& host);
    ~HttpRequester();

public:
    void setHost(const string& host);
    bool open();
    bool open(const string& host);
    void setHeader(const std::string& header, const std::string& value);

public:
    HeaderCollection Headers;

private:
    HttpConnection<HttpRequester>* _connection;
    string _host;

private:
    void onConnection(const boost::system::error_code& error,
        boost::asio::ip::tcp::resolver::iterator endpoint_iter);

    void onWrite(const boost::system::error_code& error, std::size_t bytes_transferred, byte* data);

    void onRead(const boost::system::error_code& error, std::size_t bytes_transferred);
};

#endif