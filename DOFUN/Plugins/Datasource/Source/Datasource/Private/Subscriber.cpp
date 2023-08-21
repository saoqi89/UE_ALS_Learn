#include "Subscriber.h"
#include "DataManager.h"
#include "common.h"

hege::TopicType GetTopicType(EDataType type) {
	hege::TopicType rst = hege::Topic_String;
	switch (type) {
	case EDataType::DataType_Int:
		rst = hege::Topic_Int;
		break;
	case EDataType::DataType_Float:
		rst = hege::Topic_Float;
		break;
	case EDataType::DataType_String:
		rst = hege::Topic_String;
		break;
	default:
		break;
	}
	return rst;
}

void ASubscriber::AddTopic(FString topic, EDataType type) {
	mTopics.emplace(topic, type);
	hege::DataManager::GetDataManagerInst()->AddTopic(TCHAR_TO_UTF8(*topic), GetTopicType(type));
}

void ASubscriber::AddTopics(TArray<FString> topics, TArray<EDataType> types) {
	int len = topics.Num();
	for (int i = 0; i < len; i++) {
		mTopics.emplace(topics[i], types[i]);
		hege::DataManager::GetDataManagerInst()->AddTopic(TCHAR_TO_UTF8(*(topics[i])), GetTopicType(types[i]));
	}
}

void ASubscriber::RemoveTopic(FString topic, EDataType type) {
	bool rst = false;
	auto it = mTopics.begin();
	for (; it != mTopics.end(); it++) {
		if (!it->first.Compare(topic)) {
			rst = true;
			break;
		}
	}
	if (rst) {
		mTopics.erase(it);
	}
}

void ASubscriber::RemoveAllTopic() {
	mTopics.clear();
}

bool ASubscriber::AddTopicWithFile(FString filePath)
{
	//TArray<FString> results;
	//FFileHelper::LoadFileToStringArray(results, *filePath);
	//for (auto item : results) {
	//	hege::DataManager::GetDataManagerInst()->AddTopic(TCHAR_TO_UTF8(*item), hege::Topic_String);
	//}
	//return results.Num() > 0 ? true : false;
	// TODO:
	return false;
}