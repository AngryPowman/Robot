// NetService.cpp : 定义控制台应用程序的入口点。
//

#include "HttpConnection.hpp"
#include "HttpRequester.h"
#include "HttpConnectionHandler.h"

int main(int argc, char* argv[])
{
    boost::asio::io_service io_service;
    HttpConnection conn(io_service);

    HttpConnectionHandler handler;
    //conn.connect_Async<HttpConnectionHandler>("www.baidu.com", handler);
    conn.connect<HttpConnectionHandler>("www.baidu.com", handler);

    string str;
    str.append("GET /index.php HTTP/1.1\r\n");
    str.append("Accept: */*\r\n");
    str.append("Accept-Language: zh-CN\r\n");
    str.append("User-Agent: Mozilla/4.0 (compatible; MSIE 8.0; Windows NT 6.1; WOW64; Trident/4.0; qdesk 2.4.1263.203; QQDownload 718; SLCC2; .NET CLR 2.0.50727; .NET CLR 3.5.30729; .NET CLR 3.0.30729; Media Center PC 6.0; .NET4.0C; .NET4.0E; Creative AutoUpdate v1.41.07)\r\n");
    str.append("Accept-Encoding: gzip, deflate\r\n");
    str.append("Host: www.baidu.com\r\n");
    str.append("Connection: Keep-Alive\r\n\r\n");

    size_t len = conn.write<HttpConnectionHandler>((byte*)str.c_str(), 1024, handler);
    if (len > 0)
    {
        cout << "sent = " << len << endl;
        byte buff[1024] = {0};
        size_t rlen = conn.read<HttpConnectionHandler>(buff, 1024, handler);
        cout << "recv = " << rlen << endl;
        cout << "data = " << buff << endl;
    }
    //conn.connect("www.google.com");
    //conn.write_Async<HttpConnectionHandler>((byte*)"aaa", 3, handler);

    /*boost::asio::io_service io_service;

    tcp::resolver resolver(io_service);
    tcp::resolver::query query("ptlogin2.qq.com", "http");
    tcp::resolver::iterator endpoint_iterator = resolver.resolve(query);

    //tcp::endpoint ep(boost::asio::ip::address_v4::from_string("113.108.7.198"), 80);

    boost::system::error_code error;
    boost::asio::ip::tcp::socket sock(io_service);
    boost::asio::connect(sock, endpoint_iterator, error);

    if (error)
    {
        std::cout << boost::system::system_error(error).what() << std::endl;
        return 0;
    }*/

    // 发送数据
    //boost::asio::streambuf request;
    //std::ostream request_stream(&request);

    //string str;
    //str.append("GET /login?u=2641271568&p=65E69D896486251F284E19012664DDD2&verifycode=!LOS&webqq_type=10&remember_uin=1&login2qq=1&aid=1003903&u1=http%3A%2F%2Fweb2.qq.com%2Floginproxy.html%3Flogin2qq%3D1%26webqq_type%3D10&h=1&ptredirect=0&ptlang=2052&from_ui=1&pttype=1&dumy=&fp=loginerroralert&action=7-23-28844&mibao_css=m_webqq&t=1&g=1&js_type=0&js_ver=10027&login_sig=1odFatIBVvCgAz1k8H0*owWGw2uSpUdVPwMP31d1gI*VKR2EQNFzVzwww0NvYDdV HTTP/1.1\r\n");
    //str.append("Accept: */*\r\n");
    //str.append("Referer: https://ui.ptlogin2.qq.com/cgi-bin/login?target=self&style=5&mibao_css=m_webqq&appid=1003903&enable_qlogin=0&no_verifyimg=1&s_url=http%3A%2F%2Fweb2.qq.com%2Floginproxy.html&f_url=loginerroralert&strong_login=1&login_state=10&t=20130221001\r\n");
    //str.append("Accept-Language: zh-CN\r\n");
    //str.append("User-Agent: Mozilla/4.0 (compatible; MSIE 8.0; Windows NT 6.1; WOW64; Trident/4.0; qdesk 2.4.1263.203; QQDownload 718; SLCC2; .NET CLR 2.0.50727; .NET CLR 3.5.30729; .NET CLR 3.0.30729; Media Center PC 6.0; .NET4.0C; .NET4.0E; Creative AutoUpdate v1.41.07)\r\n");
    //str.append("Accept-Encoding: gzip, deflate\r\n");
    //str.append("Host: ptlogin2.qq.com\r\n");
    //str.append("Connection: Keep-Alive\r\n\r\n");

    /*boost::asio::write(sock, boost::asio::buffer(str));

    //定义接收响应数据的流缓冲区
    boost::asio::streambuf response;

    //从服务端接收响应包的头信息,描述响应的状态
    //流缓冲区可根据接收的数据自动调节大小,可在其构造函数中指定最大流缓冲区.
    boost::asio::read_until(sock, response, "\r\n");

    //将流缓冲区与istream相关联,可方便的从流缓冲区中提取出信息
    std::istream response_stream(&response);
    //std::cout << &response;

    string header;
    while (std::getline(response_stream, header))
    {
        std::cout << header << "\n";
    }*/
 
    
    // 接收数据 
    /*memset(buf, 0, 1024);
    len=socket.read_some(buf, error);
    std::cout.write(buf, len); 
    std::cout << len << std::endl;*/



    //HttpConnection connection(io_service, iterator);
    //connection.connect("http://www.boost.org", 80);
    system("pause");
	return 0;
}