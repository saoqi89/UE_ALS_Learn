#ifndef __SUB_MANAGER_H__
#define __SUB_MANAGER_H__
#include "common.h"
#include <unordered_map>
namespace hege {
	class Message;
	class Submanager;
	template<class MsgType> class SubscribeBase;

	using SubBase = SubscribeBase<Message>;

	class SubmanagerAch {
	public:
		SubmanagerAch() {}
		SubmanagerAch(SubmanagerAch& src) {}

		~SubmanagerAch();

	public:
		bool PubMsg(Message msg);
		bool RegisterSub(SubBase* sub);
		bool DeregisterSub(SubBase* sub);

	protected:
		std::unordered_map<int, SubBase*> mSubs;
	};

	class Submanager {
	public:
		static Submanager& GetInstance();

		bool InitArchive(SubmanagerAch* archive);

		bool PubMsg(Message msg);
		bool RegisterSub(SubBase* sub);
		bool DeregisterSub(SubBase* sub);

	private:
		Submanager();
		~Submanager();

		SubmanagerAch* mSubManAch;
	};

};
#endif