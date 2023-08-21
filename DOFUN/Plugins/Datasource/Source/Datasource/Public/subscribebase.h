#ifndef __SUBSCRIBE_BASE_H__
#define __SUBSCRIBE_BASE_H__
#include <vector>
#include "common.h"
#include "message.h"
#include "submanager.h"

namespace hege {

class SubscribeImpl {
public:
	SubscribeImpl(Domain domain, WorkMode workMode);
	~SubscribeImpl();
	bool AddTopicWithFile(std::string path);
	bool AddTopic(Topic& topic);
	bool RemoveTopic(Topic& topic);
	bool AddTopics(std::vector<Topic>& topics);
	bool RemoveAllTopics();
	bool RegisterSub();
	bool DeregisterSub();
	bool HasTopic(Topic& topic);
	bool HasTopic(std::string fullName, TopicType type);

	std::vector<Topic> mTopics;
	Domain mDomain;
	WorkMode mWorkMode;
};

template<class MsgType>
class SubscribeBase {
public:
	SubscribeBase(Domain domain, WorkMode workMode = Work_Local) : mImpl(new SubscribeImpl(domain, workMode)) {}

	~SubscribeBase() {
		if (mImpl) {
			delete mImpl;
			mImpl = nullptr;
		}

	}

	bool AddTopicWithFile(std::string path) {
		if (mImpl) {
			return mImpl->AddTopicWithFile(path);
		}
		else {
			return false;
		}
	}

	bool AddTopic(Topic& topic) {
		if (mImpl) {
			return mImpl->AddTopic(topic);
		}
		else {
			return false;
		}
	}

	bool RemoveTopic(Topic& topic) {
		if (mImpl) {
			return mImpl->RemoveTopic(topic);
		}
		else {
			return false;
		}
	}

	bool AddTopics(std::vector<Topic>& topics) {
		if (mImpl) {
			return mImpl->AddTopics(topics);
		}
		else {
			return false;
		}
	}

	bool RemoveAllTopics() {
		if (mImpl) {
			return mImpl->RemoveAllTopics();
		}
		else {
			return false;
		}
	}

	const Domain& GetDomain() {
		return mImpl->mDomain;
	}

	virtual void onValueCallback(MsgType msg) {
		bool value;
		switch (msg.GetTopic().mType) {
		case Topic_Int:
			if (HasTopic(msg.GetTopic())) {
				onIntValueCallback(msg.GetTopic().FullName(), std::atoi(msg.GetData().c_str()));
			}
			break;
		case Topic_Bool:
			if (HasTopic(msg.GetTopic())) {
				value = std::atoi(msg.GetData().c_str()) > 0 ? true : false;
				onBoolValueCallback(msg.GetTopic().FullName(), value);
			}
			break;
		case Topic_Float:
			if (HasTopic(msg.GetTopic())) {
				onFloatValueCallback(msg.GetTopic().FullName(), std::atof(msg.GetData().c_str()));
			}
			break;
		case Topic_String:
			if (HasTopic(msg.GetTopic())) {
				onStringValueCallback(msg.GetTopic().FullName(), msg.GetData());
			}
			break;
		default:
			break;
		}
	}
	
	bool Register() {
		return Submanager::GetInstance().RegisterSub((SubBase*)(this));
	}

	bool HasTopic(Topic& topic) {
		if (mImpl) {
			return mImpl->HasTopic(topic);
		}
		else {
			return false;
		}
	}

protected:
	virtual void onIntValueCallback(std::string name, int value) = 0;

	virtual void onBoolValueCallback(std::string name, bool value) = 0;

	virtual void onFloatValueCallback(std::string name, float value) = 0;

	virtual void onStringValueCallback(std::string name, const std::string& value) = 0;

private:
	SubscribeImpl* mImpl;

};
};
#endif