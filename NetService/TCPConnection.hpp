#ifndef TCP_CONNECTION_H_
#define TCP_CONNECTION_H_

#include <boost/enable_shared_from_this.hpp>
#include <boost/noncopyable.hpp>
#include "Common.h"

class TCPConnection : 
    public boost::enable_shared_from_this<TCPConnection>, public boost::noncopyable
{
public:
    TCPConnection(){};
    ~TCPConnection(){};

public:
    template <typename Handler> bool connect(const std::string& host, Handler& handler) {}
    template <typename Handler> bool connect_Async(const std::string& host, Handler& handler) {}
    template <typename Handler> void write(byte* data, size_t len, Handler& handler) {}
    template <typename Handler> void write_Async(byte* data, size_t len, Handler& handler) {}
    template <typename Handler> void read(byte* data, size_t len, Handler& handler) {}
    template <typename Handler> void read_Async(byte* data, size_t len, Handler& handler) {}
};

#endif