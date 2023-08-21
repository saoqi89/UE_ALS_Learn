#include "DatasourceImpl.h"
#include "DataManager.h"
#include "Subscriber.h"
#include "uepublisher.h"
#include "msg.h"

#define UE_DOMAIN 4
using PubBase = hege::Publisher<hege::UserMsg>;

static PubBase* sPub = nullptr;

hege::UserMsg SerialMsg(FString& name, int value) {
	hege::Domain domain(UE_DOMAIN, UE_DOMAIN);
	hege::Topic topic(TCHAR_TO_UTF8(*name), hege::Topic_Int);
	hege::UserMsg msg(topic, domain);
	msg.PushData(std::to_string(value));
	return msg;
}

hege::UserMsg SerialMsg(FString& name, float value) {
	hege::Domain domain(UE_DOMAIN, UE_DOMAIN);
	hege::Topic topic(TCHAR_TO_UTF8(*name), hege::Topic_Float);
	hege::UserMsg msg(topic, domain);
	msg.PushData(std::to_string(value));
	return msg;
}

hege::UserMsg SerialMsg(FString& name, FString& value) {
	hege::Domain domain(UE_DOMAIN, UE_DOMAIN);
	hege::Topic topic(TCHAR_TO_UTF8(*name), hege::Topic_String);
	hege::UserMsg msg(topic, domain);
	msg.PushData(TCHAR_TO_UTF8(*value));
	return msg;
}

void UDatasourceImpl::CreatePub() {
	if (sPub == nullptr) {
		hege::Domain domain(UE_DOMAIN, UE_DOMAIN);
		sPub = new PubBase(domain);
	}
}

void UDatasourceImpl::RegisterSub(FString& name, ASubscriber* sub) {
	hege::DataManager::GetDataManagerInst()->RegisterSub(name, sub);
}

void UDatasourceImpl::RemoveSub(FString& name) {
	hege::DataManager::GetDataManagerInst()->DelSub(name);
}

void UDatasourceImpl::RemoveAllSubs() {
	hege::DataManager::GetDataManagerInst()->DelAllSubs();
}

void UDatasourceImpl::NotifyPlatformInt(FString& topicName, int& value) {
	CreatePub();
	sPub->PubMsg(SerialMsg(topicName, value));
#if WITH_EDITOR
	//std::string name = TCHAR_TO_UTF8(*topicName);
	//hege::DataManager::GetDataManagerInst()->SetIntValue(name, value);
#endif
	//CallbackPlatformIntValue(name, value);
}

void UDatasourceImpl::NotifyPlatformFloat(FString& topicName, float& value) {
	CreatePub();
	sPub->PubMsg(SerialMsg(topicName, value));
#if WITH_EDITOR
	//std::string name = TCHAR_TO_UTF8(*topicName);
	//hege::DataManager::GetDataManagerInst()->SetFloatValue(name, value);
#endif
	//CallbackPlatformFloatValue(name, value);
}

void UDatasourceImpl::NotifyPlatformString(FString& topicName, FString& value) {
	CreatePub();
	sPub->PubMsg(SerialMsg(topicName, value));
#if WITH_EDITOR
	//std::string name = TCHAR_TO_UTF8(*topicName);
	//std::string vvalue = TCHAR_TO_UTF8(*value);
	//hege::DataManager::GetDataManagerInst()->SetStringValue(name, vvalue);
#endif
	//CallbackPlatformStringValue(name, vvalue);
}

void UDatasourceImpl::SetIntValue(FString& topicName, int& value) {
	std::string name = TCHAR_TO_UTF8(*topicName);
	hege::DataManager::GetDataManagerInst()->SetIntValue(name, value);
}

void UDatasourceImpl::SetFloatValue(FString& topicName, float& value) {
	std::string name = TCHAR_TO_UTF8(*topicName);
	hege::DataManager::GetDataManagerInst()->SetFloatValue(name, value);
}

void UDatasourceImpl::SetStringValue(FString& topicName, FString& value) {
	std::string name = TCHAR_TO_UTF8(*topicName);
	std::string vvalue = TCHAR_TO_UTF8(*value);
	hege::DataManager::GetDataManagerInst()->SetStringValue(name, vvalue);
}