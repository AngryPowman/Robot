// NetService.cpp : 定义控制台应用程序的入口点。
//

#include "HttpConnection.hpp"
#include "HttpRequester.h"

int main(int argc, char* argv[])
{
    HttpRequester requester("http://www.baidu.com");
    requester.open();


    system("pause");
	return 0;
}