#ifndef __MESSAGE_H__
#define __MESSAGE_H__
#include "common.h"
#include <vector>

namespace hege {
class Message {
public:
	Message(Topic topic, Domain domain) 
	: mTopic(topic)
	, mDomain(domain) {}

	Topic& GetTopic() {
		return mTopic;
	}

	Domain& GetDomain() {
		return mDomain;
	}

	bool PushData(std::string&& data) {
		mData = std::move(data);
		return true;
	}

	const std::string& GetData() {
		return mData;
	}

	~Message() {

	}

	virtual void Serialize() {}
	virtual void Deserialize() {}

protected:
	Topic mTopic;
	Domain mDomain;

	std::string mData;
};
};
#endif