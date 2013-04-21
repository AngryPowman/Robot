#ifndef HTTP_REQUEST_HEADER_H_
#define HTTP_REQUEST_HEADER_H_

#include "Common.h"

// 摘要:
//     可以在客户端请求中指定的 HTTP 标头。
enum HttpRequestHeader
{
    // 摘要:
    //     Cache-Control 标头，指定请求/响应链上所有缓存控制机制必须服从的指令。
    CacheControl = 0,
    //
    // 摘要:
    //     Connection 标头，指定特定连接需要的选项。
    Connection = 1,
    //
    // 摘要:
    //     Date 标头，指定开始创建请求的日期和时间。
    Date = 2,
    //
    // 摘要:
    //     Keep-Alive 标头，指定用以维护持久性连接的参数。
    KeepAlive = 3,
    //
    // 摘要:
    //     Pragma 标头，指定可应用于请求/响应链上的任何代理的特定于实现的指令。
    Pragma = 4,
    //
    // 摘要:
    //     Trailer 标头，指定标头字段显示在以 chunked 传输编码方式编码的消息的尾部。
    Trailer = 5,
    //
    // 摘要:
    //     Transfer-Encoding 标头，指定对消息正文应用的转换的类型（如果有）。
    TransferEncoding = 6,
    //
    // 摘要:
    //     Upgrade 标头，指定客户端支持的附加通信协议。
    Upgrade = 7,
    //
    // 摘要:
    //     Via 标头，指定网关和代理程序要使用的中间协议。
    Via = 8,
    //
    // 摘要:
    //     Warning 标头，指定关于可能未在消息中反映的消息的状态或转换的附加信息。
    Warning = 9,
    //
    // 摘要:
    //     Allow 标头，指定支持的 HTTP 方法集。
    Allow = 10,
    //
    // 摘要:
    //     Content-Length 标头，指定伴随正文数据的长度（以字节为单位）。
    ContentLength = 11,
    //
    // 摘要:
    //     Content-Type 标头，指定伴随正文数据的 MIME 类型。
    ContentType = 12,
    //
    // 摘要:
    //     Content-Encoding 标头，指定已应用于伴随正文数据的编码。
    ContentEncoding = 13,
    //
    // 摘要:
    //     Content-Langauge 标头，指定伴随正文数据的自然语言。
    ContentLanguage = 14,
    //
    // 摘要:
    //     Content-Location 标头，指定可从其中获得伴随正文的 URI。
    ContentLocation = 15,
    //
    // 摘要:
    //     Content-MD5 标头，指定伴随正文数据的 MD5 摘要，用于提供端到端消息完整性检查。
    ContentMd5 = 16,
    //
    // 摘要:
    //     Content-Range 标头，指定在完整正文中应用伴随部分正文数据的位置。
    ContentRange = 17,
    //
    // 摘要:
    //     Expires 标头，指定日期和时间，在此之后伴随的正文数据应视为陈旧的。
    Expires = 18,
    //
    // 摘要:
    //     Last-Modified 标头，指定上次修改伴随的正文数据的日期和时间。
    LastModified = 19,
    //
    // 摘要:
    //     Accept 标头，指定响应可接受的 MIME 类型。
    Accept = 20,
    //
    // 摘要:
    //     Accept-Charset 标头，指定响应可接受的字符集。
    AcceptCharset = 21,
    //
    // 摘要:
    //     Accept-Encoding 标头，指定响应可接受的内容编码。
    AcceptEncoding = 22,
    //
    // 摘要:
    //     Accept-Langauge 标头，指定响应首选的自然语言。
    AcceptLanguage = 23,
    //
    // 摘要:
    //     Authorization 标头，指定客户端为向服务器验证自身身份而出示的凭据。
    Authorization = 24,
    //
    // 摘要:
    //     Cookie 标头，指定向服务器提供的 Cookie 数据。
    Cookie = 25,
    //
    // 摘要:
    //     Expect 标头，指定客户端要求的特定服务器行为。
    Expect = 26,
    //
    // 摘要:
    //     From 标头，指定控制请求用户代理的用户的 Internet 电子邮件地址。
    From = 27,
    //
    // 摘要:
    //     Host 标头，指定所请求资源的主机名和端口号。
    Host = 28,
    //
    // 摘要:
    //     If-Match 标头，指定仅当客户端的指示资源的缓存副本是最新的时，才执行请求的操作。
    IfMatch = 29,
    //
    // 摘要:
    //     If-Modified-Since 标头，指定仅当自指示的数据和时间之后修改了请求的资源时，才执行请求的操作。
    IfModifiedSince = 30,
    //
    // 摘要:
    //     If-None-Match 标头，指定仅当客户端的指示资源的缓存副本都不是最新的时，才执行请求的操作。
    IfNoneMatch = 31,
    //
    // 摘要:
    //     If-Range 标头，指定如果客户端的缓存副本是最新的，仅发送指定范围的请求资源。
    IfRange = 32,
    //
    // 摘要:
    //     If-Unmodified-Since 标头，指定仅当自指示的日期和时间之后修改了请求的资源时，才执行请求的操作。
    IfUnmodifiedSince = 33,
    //
    // 摘要:
    //     Max-Forwards 标头，指定一个整数，表示此请求还可转发的次数。
    MaxForwards = 34,
    //
    // 摘要:
    //     Proxy-Authorization 标头，指定客户端为向代理验证自身身份而出示的凭据。
    ProxyAuthorization = 35,
    //
    // 摘要:
    //     Referer 标头，指定从中获得请求 URI 的资源的 URI。
    Referer = 36,
    //
    // 摘要:
    //     Range 标头，指定代替整个响应返回的客户端请求的响应的子范围。
    Range = 37,
    //
    // 摘要:
    //     TE 标头，指定响应可接受的传输编码方式。
    Te = 38,
    //
    // 摘要:
    //     Translate 标头，与 WebDAV 功能一起使用的 HTTP 规范的 Microsoft 扩展。
    Translate = 39,
    //
    // 摘要:
    //     User-Agent 标头，指定有关客户端代理的信息。
    UserAgent = 40,
};

class HttpRequestHeaderUtil
{
    typedef std::map<HttpRequestHeader, std::string> HeaderMappingTable;

public:
    static HttpRequestHeaderUtil& instance()
    {
        static HttpRequestHeaderUtil _instance;
        return _instance;
    }

private:
    HttpRequestHeaderUtil()
    {
        initHeaders();
    }
    
    void initHeaders()
    {
        _headerMappingTable[CacheControl]       = "Cache-Control";
        _headerMappingTable[Connection]         = "Connection";
        _headerMappingTable[Date]               = "Date";
        _headerMappingTable[KeepAlive]          = "Keep-Alive";
        _headerMappingTable[Pragma]             = "Pragma";
        _headerMappingTable[Trailer]            = "Trailer";
        _headerMappingTable[TransferEncoding]   = "Transfer-Encoding";
        _headerMappingTable[Upgrade]            = "Upgrade";
        _headerMappingTable[Via]                = "Via";
        _headerMappingTable[Warning]            = "Warning";
        _headerMappingTable[Allow]              = "Allow";
        _headerMappingTable[ContentLength]      = "Content-Length";
        _headerMappingTable[ContentType]        = "Content-Type";
        _headerMappingTable[ContentEncoding]    = "Content-Encoding";
        _headerMappingTable[ContentLanguage]    = "Content-Language";
        _headerMappingTable[ContentLocation]    = "Content-Location";
        _headerMappingTable[ContentMd5]         = "Content-MD5";
        _headerMappingTable[ContentRange]       = "Content-Range";
        _headerMappingTable[Expires]            = "Expires";
        _headerMappingTable[LastModified]       = "Last-Modified";
        _headerMappingTable[Accept]             = "Accept";
        _headerMappingTable[AcceptCharset]      = "Accept-Charset";
        _headerMappingTable[AcceptEncoding]     = "Accept-Encoding";
        _headerMappingTable[AcceptLanguage]     = "Accept-Language";
        _headerMappingTable[Authorization]      = "Authorization";
        _headerMappingTable[Cookie]             = "Cookie";
        _headerMappingTable[Expect]             = "Expect";
        _headerMappingTable[From]               = "From";
        _headerMappingTable[Host]               = "Host";
        _headerMappingTable[IfMatch]            = "If-Match";
        _headerMappingTable[IfModifiedSince]    = "If-Modified-Since";
        _headerMappingTable[IfNoneMatch]        = "If-None-Match";
        _headerMappingTable[IfRange]            = "If-Range";
        _headerMappingTable[IfUnmodifiedSince]  = "If-Unmodified-Since";
        _headerMappingTable[MaxForwards]        = "Max-Forwards";
        _headerMappingTable[ProxyAuthorization] = "Proxy-Authorization";
        _headerMappingTable[Referer]            = "Referer";
        _headerMappingTable[Range]              = "Range";
        _headerMappingTable[Te]                 = "TE";
        _headerMappingTable[Translate]          = "Translate";
        _headerMappingTable[UserAgent]          = "User-Agent";
    }

public:
    std::string getHeaderName(HttpRequestHeader header) const
    {
        auto iter = _headerMappingTable.find(header);
        if (iter != _headerMappingTable.end())
        {
            return iter->second;
        }

        return "";
    }

private:
    HeaderMappingTable _headerMappingTable;
};

#define HeaderUtil() HttpRequestHeaderUtil::instance()

#endif
