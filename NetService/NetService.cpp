// NetService.cpp : �������̨Ӧ�ó������ڵ㡣
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