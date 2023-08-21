#ifndef __UE_SUBSCRIBE_H__
#define __UE_SUBSCRIBE_H__
#include "subscribebase.h"
#include "submanager.h"
#include "DataManager.h"
#if PLATFORM_ANDROID
#include "Android/AndroidApplication.h"
#include "Launch/Public/Android/AndroidJNI.h"
#endif

namespace hege {

#define DataMgrInst  DataManager::GetDataManagerInst()
template<class MsgType>
class Subscribe : public SubscribeBase<MsgType> {
public:
	Subscribe(Domain domain, WorkMode workMode = Work_Local) : SubscribeBase<MsgType>(domain, workMode) {}
	virtual ~Subscribe() {}

protected:
	virtual void onIntValueCallback(std::string name, int value) {
		FString nameString(UTF8_TO_TCHAR(name.c_str()));

		DataManager::GetDataManagerInst()->SetIntValue(name, value);
		//std::cout << "onIntValueCallback Name: " << name << ", Value: " << value << std::endl;
	}

	virtual void onBoolValueCallback(std::string name, bool value) {
		FString nameString(UTF8_TO_TCHAR(name.c_str()));
		int bvalue = ((value == true) ? 1 : 0);

		DataManager::GetDataManagerInst()->SetIntValue(name, bvalue);
		//std::cout << "onBoolValueCallback Name: " << name << ", Value: " << value << std::endl;
	}

	virtual void onFloatValueCallback(std::string name, float value) {
		//UE_LOG(LogTemp, Log, TEXT("onFloatValueCallback"));
		FString nameString(UTF8_TO_TCHAR(name.c_str()));

		DataManager::GetDataManagerInst()->SetFloatValue(name, value);
		//std::cout << "onFloatValueCallback Name: " << name << ", Value: " << value << std::endl;
	}

	virtual void onStringValueCallback(std::string name, const std::string& value) {
		//UE_LOG(LogTemp, Log, TEXT("onStringValueCallback"));
		FString nameString(UTF8_TO_TCHAR(name.c_str()));
		FString valueString(UTF8_TO_TCHAR(value.c_str()));

		DataManager::GetDataManagerInst()->SetStringValue(name, value);
		//std::cout << "onStringValueCallback Name: " << name << ", Value: " << value << std::endl;
	}

};
};
#endif