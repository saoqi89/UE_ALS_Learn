#ifndef __MSG_H__
#define __MSG_H__
#include "message.h"
#include <iostream>

namespace hege {
	class UserMsg : public Message {
	public:
		UserMsg(Topic topic, Domain domain)
		: Message(topic, domain) {

		}

		void PrintMsg() {
			std::cout << "Msg: " << mData << std::endl;
		}

		virtual void Serialize() {}
		virtual void Deserialize() {}

	};

};
#endif