#ifndef __PUBLISHER_BASE_H__
#define __PUBLISHER_BASE_H__
#include "common.h"
#include "submanager.h"

namespace hege {
template<class MsgType>
class PublisherBase {
public:
	PublisherBase(Domain domain, WorkMode workMode = Work_Local) : mDomain(domain), mWorkMode(workMode) {}

	~PublisherBase() {}

	bool PubMsg(MsgType msg) {
		return Submanager::GetInstance().PubMsg(msg);
	}

private:
	Domain mDomain;
	WorkMode mWorkMode;
};
};
#endif