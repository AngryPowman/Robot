#ifndef HTTP_REQUEST_HEADER_H_
#define HTTP_REQUEST_HEADER_H_

#include "Common.h"

// ժҪ:
//     �����ڿͻ���������ָ���� HTTP ��ͷ��
enum HttpRequestHeader
{
    // ժҪ:
    //     Cache-Control ��ͷ��ָ������/��Ӧ�������л�����ƻ��Ʊ�����ӵ�ָ�
    CacheControl = 0,
    //
    // ժҪ:
    //     Connection ��ͷ��ָ���ض�������Ҫ��ѡ�
    Connection = 1,
    //
    // ժҪ:
    //     Date ��ͷ��ָ����ʼ������������ں�ʱ�䡣
    Date = 2,
    //
    // ժҪ:
    //     Keep-Alive ��ͷ��ָ������ά���־������ӵĲ�����
    KeepAlive = 3,
    //
    // ժҪ:
    //     Pragma ��ͷ��ָ����Ӧ��������/��Ӧ���ϵ��κδ�����ض���ʵ�ֵ�ָ�
    Pragma = 4,
    //
    // ժҪ:
    //     Trailer ��ͷ��ָ����ͷ�ֶ���ʾ���� chunked ������뷽ʽ�������Ϣ��β����
    Trailer = 5,
    //
    // ժҪ:
    //     Transfer-Encoding ��ͷ��ָ������Ϣ����Ӧ�õ�ת�������ͣ�����У���
    TransferEncoding = 6,
    //
    // ժҪ:
    //     Upgrade ��ͷ��ָ���ͻ���֧�ֵĸ���ͨ��Э�顣
    Upgrade = 7,
    //
    // ժҪ:
    //     Via ��ͷ��ָ�����غʹ������Ҫʹ�õ��м�Э�顣
    Via = 8,
    //
    // ժҪ:
    //     Warning ��ͷ��ָ�����ڿ���δ����Ϣ�з�ӳ����Ϣ��״̬��ת���ĸ�����Ϣ��
    Warning = 9,
    //
    // ժҪ:
    //     Allow ��ͷ��ָ��֧�ֵ� HTTP ��������
    Allow = 10,
    //
    // ժҪ:
    //     Content-Length ��ͷ��ָ�������������ݵĳ��ȣ����ֽ�Ϊ��λ����
    ContentLength = 11,
    //
    // ժҪ:
    //     Content-Type ��ͷ��ָ�������������ݵ� MIME ���͡�
    ContentType = 12,
    //
    // ժҪ:
    //     Content-Encoding ��ͷ��ָ����Ӧ���ڰ����������ݵı��롣
    ContentEncoding = 13,
    //
    // ժҪ:
    //     Content-Langauge ��ͷ��ָ�������������ݵ���Ȼ���ԡ�
    ContentLanguage = 14,
    //
    // ժҪ:
    //     Content-Location ��ͷ��ָ���ɴ����л�ð������ĵ� URI��
    ContentLocation = 15,
    //
    // ժҪ:
    //     Content-MD5 ��ͷ��ָ�������������ݵ� MD5 ժҪ�������ṩ�˵�����Ϣ�����Լ�顣
    ContentMd5 = 16,
    //
    // ժҪ:
    //     Content-Range ��ͷ��ָ��������������Ӧ�ð��沿���������ݵ�λ�á�
    ContentRange = 17,
    //
    // ժҪ:
    //     Expires ��ͷ��ָ�����ں�ʱ�䣬�ڴ�֮��������������Ӧ��Ϊ�¾ɵġ�
    Expires = 18,
    //
    // ժҪ:
    //     Last-Modified ��ͷ��ָ���ϴ��޸İ�����������ݵ����ں�ʱ�䡣
    LastModified = 19,
    //
    // ժҪ:
    //     Accept ��ͷ��ָ����Ӧ�ɽ��ܵ� MIME ���͡�
    Accept = 20,
    //
    // ժҪ:
    //     Accept-Charset ��ͷ��ָ����Ӧ�ɽ��ܵ��ַ�����
    AcceptCharset = 21,
    //
    // ժҪ:
    //     Accept-Encoding ��ͷ��ָ����Ӧ�ɽ��ܵ����ݱ��롣
    AcceptEncoding = 22,
    //
    // ժҪ:
    //     Accept-Langauge ��ͷ��ָ����Ӧ��ѡ����Ȼ���ԡ�
    AcceptLanguage = 23,
    //
    // ժҪ:
    //     Authorization ��ͷ��ָ���ͻ���Ϊ���������֤������ݶ���ʾ��ƾ�ݡ�
    Authorization = 24,
    //
    // ժҪ:
    //     Cookie ��ͷ��ָ����������ṩ�� Cookie ���ݡ�
    Cookie = 25,
    //
    // ժҪ:
    //     Expect ��ͷ��ָ���ͻ���Ҫ����ض���������Ϊ��
    Expect = 26,
    //
    // ժҪ:
    //     From ��ͷ��ָ�����������û�������û��� Internet �����ʼ���ַ��
    From = 27,
    //
    // ժҪ:
    //     Host ��ͷ��ָ����������Դ���������Ͷ˿ںš�
    Host = 28,
    //
    // ժҪ:
    //     If-Match ��ͷ��ָ�������ͻ��˵�ָʾ��Դ�Ļ��渱�������µ�ʱ����ִ������Ĳ�����
    IfMatch = 29,
    //
    // ժҪ:
    //     If-Modified-Since ��ͷ��ָ��������ָʾ�����ݺ�ʱ��֮���޸����������Դʱ����ִ������Ĳ�����
    IfModifiedSince = 30,
    //
    // ժҪ:
    //     If-None-Match ��ͷ��ָ�������ͻ��˵�ָʾ��Դ�Ļ��渱�����������µ�ʱ����ִ������Ĳ�����
    IfNoneMatch = 31,
    //
    // ժҪ:
    //     If-Range ��ͷ��ָ������ͻ��˵Ļ��渱�������µģ�������ָ����Χ��������Դ��
    IfRange = 32,
    //
    // ժҪ:
    //     If-Unmodified-Since ��ͷ��ָ��������ָʾ�����ں�ʱ��֮���޸����������Դʱ����ִ������Ĳ�����
    IfUnmodifiedSince = 33,
    //
    // ժҪ:
    //     Max-Forwards ��ͷ��ָ��һ����������ʾ�����󻹿�ת���Ĵ�����
    MaxForwards = 34,
    //
    // ժҪ:
    //     Proxy-Authorization ��ͷ��ָ���ͻ���Ϊ�������֤������ݶ���ʾ��ƾ�ݡ�
    ProxyAuthorization = 35,
    //
    // ժҪ:
    //     Referer ��ͷ��ָ�����л������ URI ����Դ�� URI��
    Referer = 36,
    //
    // ժҪ:
    //     Range ��ͷ��ָ������������Ӧ���صĿͻ����������Ӧ���ӷ�Χ��
    Range = 37,
    //
    // ժҪ:
    //     TE ��ͷ��ָ����Ӧ�ɽ��ܵĴ�����뷽ʽ��
    Te = 38,
    //
    // ժҪ:
    //     Translate ��ͷ���� WebDAV ����һ��ʹ�õ� HTTP �淶�� Microsoft ��չ��
    Translate = 39,
    //
    // ժҪ:
    //     User-Agent ��ͷ��ָ���йؿͻ��˴������Ϣ��
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
