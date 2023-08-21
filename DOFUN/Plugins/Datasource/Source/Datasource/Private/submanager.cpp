#include "submanager.h"
#include "subscribebase.h"
#include "msg.h"

namespace hege {

	static Submanager* sSubmanager = nullptr;

	SubmanagerAch::~SubmanagerAch() {
		mSubs.clear();
	}

	bool SubmanagerAch::PubMsg(Message msg) {
		Domain domain = msg.GetDomain();
		bool rst = false;
		auto subit = mSubs.find(domain.mDevName);
		if (domain.mDomainID == ANY_DOMAIN) {
			for (auto item : mSubs) {
				item.second->onValueCallback(msg);
			}
			rst = true;
		}
		else if (domain.mDevName == ANY_DEV) {
			for (auto item : mSubs) {
				if (item.first == domain.mDevName) {
					item.second->onValueCallback(msg);
				}
			}
			rst = true;
		}
		else if (subit != mSubs.end()) {
			subit->second->onValueCallback(msg);
			rst = true;
		}
		return rst;
	}

	bool SubmanagerAch::RegisterSub(SubBase* sub) {
		if (sub->GetDomain().mDomainID == ANY_DOMAIN || sub->GetDomain().mDevName == ANY_DEV) {
			return false;
		}
		auto subit = mSubs.find(sub->GetDomain().mDevName);
		bool rst = false;
		if (subit == mSubs.end()) {
			mSubs[sub->GetDomain().mDevName] = sub;
			rst = true;
		}
		return rst;
	}

	bool SubmanagerAch::DeregisterSub(SubBase* sub) {
		if (sub->GetDomain().mDomainID == ANY_DOMAIN || sub->GetDomain().mDevName == ANY_DEV) {
			return false;
		}
		auto item = mSubs.find(sub->GetDomain().mDevName);
		bool rst = false;
		if (item == mSubs.end()) {
			rst = false;
		}
		else {
			mSubs.erase(item);
			rst = true;
		}
		return rst;
	}

	Submanager& Submanager::GetInstance() {
		if (nullptr == sSubmanager) {
			sSubmanager = new Submanager();
		}
		return *sSubmanager;
	}

	Submanager::Submanager()
		: mSubManAch(nullptr)
	{

	}

	Submanager::~Submanager() {}

	bool Submanager::InitArchive(SubmanagerAch* archive) {
		if (mSubManAch != nullptr) {
			return false;
		}
		mSubManAch = archive;
		return true;
	}

	bool Submanager::PubMsg(Message msg) {
		if (mSubManAch == nullptr) {
			return false;
		}
		return mSubManAch->PubMsg(msg);
	}

	bool Submanager::RegisterSub(SubBase* sub) {
		if (mSubManAch == nullptr) {
			return false;
		}
		return mSubManAch->RegisterSub(sub);
	}

	bool Submanager::DeregisterSub(SubBase* sub) {
		if (mSubManAch == nullptr) {
			return false;
		}
		return mSubManAch->DeregisterSub(sub);
	}
};