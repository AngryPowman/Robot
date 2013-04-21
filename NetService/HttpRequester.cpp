#include "HttpRequester.h"
#include <regex>

HttpRequester::HttpRequester()
{
}

HttpRequester::HttpRequester(const std::string& host) 
{
    setHost(host);
}

HttpRequester::~HttpRequester()
{
    if (_connection != NULL)
    {
        _connection->close();
    }

    SAFE_DELETE(_connection);
}

void HttpRequester::setHost(const std::string& host)
{
    std::regex pattern("http://|https://");
    _host = std::regex_replace(host, pattern, "");
}

bool HttpRequester::open()
{
    boost::asio::io_service io_service;
    _connection = new HttpConnection<HttpRequester>(io_service, *this);

    return _connection->connect(_host);
}

bool HttpRequester::open(const string& host)
{
    boost::asio::io_service io_service;
    _connection = new HttpConnection<HttpRequester>(io_service, *this);

    setHost(host);
    return _connection->connect(_host);
}

void HttpRequester::onConnection(const boost::system::error_code& error,
                  boost::asio::ip::tcp::resolver::iterator endpoint_iter)
{
    cout << "onConnected" << endl;
}

void HttpRequester::onWrite(const boost::system::error_code& error, std::size_t bytes_transferred, byte* data)
{
    cout << "onWrite, bytes_transferred = " << bytes_transferred << endl;
}

void HttpRequester::onRead(const boost::system::error_code& error, std::size_t bytes_transferred)
{
    cout << "onRead, bytes_transferred = " << bytes_transferred << endl;
}