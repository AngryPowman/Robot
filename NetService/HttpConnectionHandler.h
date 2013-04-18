#ifndef HTTP_CONNECTION_HANDLER_H_
#define HTTP_CONNECTION_HANDLER_H_

#include "Common.h"
#include "ISocketHandler.h"

class HttpConnectionHandler : public ISocketHandler
{
public:
    HttpConnectionHandler(){}

    void onConnected(const boost::system::error_code& error,
        boost::asio::ip::tcp::resolver::iterator endpoint_iter)
    {
        cout << "onConnected" << endl;
    }

    void onConnectionTimeout()
    {
        cout << "onConnectionTimeout" << endl;
    }

    void onWriteCompleted(const boost::system::error_code& error, std::size_t bytes_transferred)
    {
        cout << "onWriteCompleted, bytes_transferred = " << bytes_transferred << endl;
    }
};

#endif