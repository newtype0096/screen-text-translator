#include "AzureAPI.h"
#include <tinyxml2/tinyxml2.h>

Azure::Azure()
{

}

Azure::~Azure()
{

}

// 구독 키 초기화
void Azure::Init(utility::string_t Key)
{
	SubscriptionKey = Key;
}

// 토큰 얻기
pplx::task<void> Azure::GetAccessTokenAsync(bool &bAPI)
{
	http_client client(L"https://api.cognitive.microsoft.com/sts/v1.0/issueToken");

	http_request request(methods::POST);
	request.headers().add(L"Ocp-Apim-Subscription-Key", SubscriptionKey);
	return client.request(request).then([&](http_response response)
	{
		std::wostringstream ss;
		ss << response.status_code();
		
		utility::string_t code = ss.str();

		if (code != utility::conversions::to_string_t("200"))
		{
			bAPI = false;
			return;
		}

		response.extract_string(true).then([&](utility::string_t Body)
		{
			appid = utility::conversions::to_string_t("Bearer ") + Body;
		}).wait();
	});
}

// 번역문 얻기
pplx::task<void> Azure::GetTranslateText(utility::string_t ocrText, utility::string_t &transText, bool &bAPI)
{
	auto client = http_client{ U("https://api.microsofttranslator.com/V2/Http.svc") };
	uri_builder query;
	query.set_path(U("/Translate"));
	query.append_query(U("appid"), appid);
	query.append_query(U("text"), ocrText);
	query.append_query(U("from"), U("en"));
	query.append_query(U("to"), U("ko"));

	auto path_query_fragment = query.to_string();

	return client.request(methods::GET, path_query_fragment).then([&](http_response response)
	{
		std::wostringstream ss;
		ss << response.status_code();

		utility::string_t code = ss.str();

		if (code != utility::conversions::to_string_t("200"))
		{
			bAPI = false;
			return;
		}

		auto bodyStream = response.body();
		concurrency::streams::stringstreambuf sbuffer;
		auto& target = sbuffer.collection();

		bodyStream.read_to_end(sbuffer).get();

		tinyxml2::XMLDocument doc;
		doc.Parse(target.c_str());

		tinyxml2::XMLElement *elem = doc.FirstChildElement("string");
		transText = utility::conversions::to_string_t(elem->GetText());
	});
}