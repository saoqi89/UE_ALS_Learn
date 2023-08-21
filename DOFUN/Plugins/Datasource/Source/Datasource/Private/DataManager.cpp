#include "DataManager.h"
#include "CoreMinimal.h"
#include "DatasourceImpl.h"
#include "Subscriber.h"
#include "uesubscribe.h"
#include "submanagerandroid.h"

#define UE_DOMAIN 4

namespace hege {
	static DataManager* sInst = nullptr;
	hege::Domain GDomain(UE_DOMAIN, UE_DOMAIN);

	using UESubBase = Subscribe<UserMsg>;
	class DataManager::DataManagerImpl {
	public:
		DataManagerImpl()
		: mSub(new UESubBase(GDomain, hege::Work_Local)) {
			mSub->Register();
		}

		~DataManagerImpl() {
			if (mSub) {
				delete mSub;
				mSub = nullptr;
			}
		}

		UESubBase* mSub;
	};

	DataManager* DataManager::GetDataManagerInst() {
		if (sInst == nullptr) {
			sInst = new DataManager();
			sInst->mThreadRunning = 1;
		}
		return sInst;
	}

	DataManager::DataManager()
		: mImpl(new DataManagerImpl())
		, mThreadRunning(0) {
		hege::Submanager::GetInstance().InitArchive(hege::SubmanagerAchAndroidUE::GetAndroidUEArchInstance());
	}

	DataManager::~DataManager() {
		if (mImpl) {
			delete mImpl;
			mImpl = nullptr;
		}
	}

	void DataManager::AddTopic(std::string topic, hege::TopicType type) {
		hege::Topic t(topic, type);
		mImpl->mSub->AddTopic(t);
	}

	bool DataManager::RegisterSub(FString& devName, ASubscriber* subObj) {
		UE_LOG(LogTemp, Log, TEXT("RegisterSub devName: %s"), *devName);
		bool rst = false;
		FString name = TCHAR_TO_UTF8(*devName);
		mSubMap[name] = subObj;
		rst = true;
		mThreadRunning = 1;
		return rst;
	}

	bool DataManager::DelSub(FString& devName) {
		bool rst = false;
		auto it = mSubMap.find(devName);
		if (it != mSubMap.end()) {
			mSubMap.erase(it);
			rst = true;
		}
		return rst;
	}

	bool DataManager::DelAllSubs() {
		mThreadRunning = 0;
		mSubMap.clear();
		mStoreMapInt.clear();
		mStoreMapFloat.clear();
		mStoreMapStr.clear();
		return true;
	}

	void DataManager::SetIntValue(std::string name, int value) {
		if (0 == mThreadRunning) {
			return;
		}
		auto findValueIt = mStoreMapInt.find(name);
		bool update = false;
		if (findValueIt == mStoreMapInt.end()) {
			update = true;
		}
		else if (findValueIt->second != value) {
			update = true;
		}
		mStoreMapInt[name] = value;
		if (update) {
			// TODO:
			for (auto it = mSubMap.begin(); it != mSubMap.end(); it++) {
				FString Ftopic = UTF8_TO_TCHAR(name.c_str());
				UE_LOG(LogTemp, Log, TEXT("PubMsg Topic name: %s, Value Int: %d"), *Ftopic, value);
				mStoreMapInt.emplace(name, value);
				for (auto item = it->second->mTopics.begin(); item != it->second->mTopics.end(); item++) {
					if (!name.compare(TCHAR_TO_UTF8(*item->first))) {
						it->second->IntValueUpdateEvent(UTF8_TO_TCHAR(name.c_str()), value);
						break;
					}
				}
			}
		}
	}

	void DataManager::SetBoolValue(std::string name, bool value) {
		if (0 == mThreadRunning) {
			return;
		}
		auto findValueIt = mStoreMapInt.find(name);
		bool update = false;
		if (findValueIt == mStoreMapInt.end()) {
			update = true;
		}
		else if (findValueIt->second != (int)value) {
			update = true;
		}
		mStoreMapInt[name] = value;
		if (update) {
			// TODO:
			for (auto it = mSubMap.begin(); it != mSubMap.end(); it++) {
				FString Ftopic = UTF8_TO_TCHAR(name.c_str());
				UE_LOG(LogTemp, Log, TEXT("PubMsg Topic name: %s, Value Int: %d"), *Ftopic, value);
				mStoreMapInt.emplace(name, value);
				for (auto item = it->second->mTopics.begin(); item != it->second->mTopics.end(); item++) {
					if (!name.compare(TCHAR_TO_UTF8(*item->first))) {
						it->second->IntValueUpdateEvent(UTF8_TO_TCHAR(name.c_str()), value);
						break;
					}
				}
			}
		}
	}

	void DataManager::SetFloatValue(std::string name, float value) {
		if (0 == mThreadRunning) {
			return;
		}
		auto findValueIt = mStoreMapFloat.find(name);
		bool update = false;
		if (findValueIt == mStoreMapFloat.end()) {
			update = true;
		}
		else if (abs(findValueIt->second - value) >= 0.00001) {
			update = true;
		}
		mStoreMapFloat[name] = value;
		if (update) {
			// TODO:
			for (auto it = mSubMap.begin(); it != mSubMap.end(); it++) {
				FString Ftopic = UTF8_TO_TCHAR(name.c_str());
				UE_LOG(LogTemp, Log, TEXT("PubMsg Topic name: %s, Value Float: %.2f"), *Ftopic, value);
				mStoreMapFloat.emplace(name, value);
				for (auto item = it->second->mTopics.begin(); item != it->second->mTopics.end(); item++) {
					if (!name.compare(TCHAR_TO_UTF8(*item->first))) {
						it->second->FloatValueUpdateEvent(UTF8_TO_TCHAR(name.c_str()), value);
						break;
					}
				}
			}
		}
	}

	void DataManager::SetStringValue(std::string name, std::string value) {
		if (0 == mThreadRunning) {
			return;
		}
		auto findValueIt = mStoreMapStr.find(name);
		bool update = false;
		if (findValueIt == mStoreMapStr.end()) {
			update = true;
		}
		else if (!findValueIt->second.compare(value)) {
			update = true;
		}
		mStoreMapStr[name] = value;
		if (update) {
			// TODO:
			for (auto it = mSubMap.begin(); it != mSubMap.end(); it++) {
				FString Ftopic = UTF8_TO_TCHAR(name.c_str());
				FString Fvalue = UTF8_TO_TCHAR(value.c_str());
				UE_LOG(LogTemp, Log, TEXT("PubMsg Topic name: %s, Value String: %s"), *Ftopic, *Fvalue);
				mStoreMapStr.emplace(name, value);
				for (auto item = it->second->mTopics.begin(); item != it->second->mTopics.end(); item++) {
					if (!name.compare(TCHAR_TO_UTF8(*item->first))) {
						it->second->FStringValueUpdateEvent(UTF8_TO_TCHAR(name.c_str()), UTF8_TO_TCHAR(value.c_str()));
						break;
					}
				}
			}
		}
	}
};
