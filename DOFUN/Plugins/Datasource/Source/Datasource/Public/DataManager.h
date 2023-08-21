#ifndef __DATA_MANAGER_H__
#define __DATA_MANAGER_H__
#include <atomic>
#include <string>
#include <map>
#include <unordered_map>
#include "msg.h"
//#include "uesubscribe.h"

class ASubscriber;

namespace hege {

	class DataManager {
	public:
		static DataManager* GetDataManagerInst();

		bool RegisterSub(FString& devName, ASubscriber* subObj);
		bool DelSub(FString& devName);
		bool DelAllSubs();

		void AddTopic(std::string topic, hege::TopicType type);

		void SetIntValue(std::string name, int value);
		void SetBoolValue(std::string name, bool value);
		void SetFloatValue(std::string name, float value);
		void SetStringValue(std::string name, std::string value);

	private:
		class DataManagerImpl;
		DataManagerImpl* mImpl;

		DataManager();
		~DataManager();
		std::map<FString, ASubscriber*> mSubMap;
		std::atomic<int> mThreadRunning;
		std::unordered_map<std::string, int> mStoreMapInt;
		std::unordered_map<std::string, float> mStoreMapFloat;
		std::unordered_map<std::string, std::string> mStoreMapStr;
	};
};

#endif