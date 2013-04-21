#ifndef HEADER_H_
#define HEADER_H_

#include "Common.h"
#include "HttpRequestHeader.h"

class HeaderCollection
{
    friend class HttpRequester;
    typedef std::unordered_map<std::string, std::string> HeaderTable;

protected:
    void set(const std::string& header, const std::string& value)
    {
        this->_headerTable.insert(std::make_pair(header, value));
    }

    void set(HttpRequestHeader header, const std::string& value)
    {
        const string& headerName = HeaderUtil().getHeaderName(header);
        set(headerName, value); 
    }

    void set(const std::string& content)
    {
    
    }

    std::string get(const std::string& header) const
    {
        auto iter = this->_headerTable.find(header);
        if (iter != _headerTable.end())
        {
            return iter->second;
        }

        return "";
    }

    std::string get(HttpRequestHeader header)
    {
        const string& headerName = HeaderUtil().getHeaderName(header);
        return get(headerName);
    }

    std::string operator[](const std::string& header) const
    {
        return get(header);
    }

    void clear()
    {
        _headerTable.clear();
    }

private:
    HeaderTable _headerTable;
};

#endif