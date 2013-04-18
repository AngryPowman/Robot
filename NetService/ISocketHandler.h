#ifndef ISOCKET_HANDLER_H_
#define ISOCKET_HANDLER_H_

#include <boost/asio.hpp>
#include <boost/system/error_code.hpp>
#include "Common.h"

class ISocketHandler
{
protected:
    virtual void onConnected(const boost::system::error_code& error,
        boost::asio::ip::tcp::resolver::iterator endpoint_iter) = 0;

    virtual void onConnectionTimeout() = 0;

    // write data
    virtual void onWriteCompleted(const boost::system::error_code& error, std::size_t bytes_transferred) = 0;

    // read data
    //virtual void onRead() = 0;
};

#endif