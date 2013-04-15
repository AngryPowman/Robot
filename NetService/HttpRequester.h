#ifndef HTTP_REQUESTER_H_
#define HTTP_REQUESTER_H_

#include "HttpConnection.hpp"

class HttpRequester
{
public:
    bool create(const string& url);

};

#endif