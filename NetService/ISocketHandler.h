#ifndef ISOCKET_HANDLER_H_
#define ISOCKET_HANDLER_H_

#include <boost/asio.hpp>
#include <boost/system/error_code.hpp>
#include "Common.h"

class ISocketHandler
{
protected:
    virtual void onConnection(const boost::system::error_code& error,
        boost::asio::ip::tcp::resolver::iterator endpoint_iter) = 0;

    virtual void onWrite(const boost::system::error_code& error, std::size_t bytes_transferred, byte* data) = 0;

    virtual void onRead(const boost::system::error_code& error, std::size_t bytes_transferred) = 0;
};

#endif