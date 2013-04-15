#ifndef ISOCKET_HANDLER_H_
#define ISOCKET_HANDLER_H_

#include <boost/asio.hpp>
#include <boost/system/error_code.hpp>

class ISocketHandler
{
protected:
    virtual void onConnected(const boost::system::error_code& error,
        boost::asio::ip::tcp::resolver::iterator endpoint_iter) = 0;

    virtual void onConnectionTimeout() = 0;
};

#endif