#ifndef __AZUREAPI_H__
#define __AZUREAPI_H__

#include <cpprest/http_client.h>
#include <cpprest/containerstream.h>
#include <cpprest/producerconsumerstream.h>
#include <cpprest/rawptrstream.h>
#include <iostream>
#include <string>
#include <Windows.h>


using namespace web::http;
using namespace web::http::client;
using namespace concurrency::streams;

class Azure
{
private:
	utility::string_t SubscriptionKey;
	utility::string_t translatedText;
	utility::string_t appid;
public:
	Azure();
	~Azure();
	pplx::task<void> GetAccessTokenAsync(bool &bAPI);
	pplx::task<void> GetTranslateText(utility::string_t ocrText, utility::string_t &transText, bool &bAPI);
	void Init(utility::string_t Key);
};

#endif // !__AZUREAPI_H__