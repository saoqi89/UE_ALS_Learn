#ifndef __COMMON_H__
#define __COMMON_H__
#include <string>
#include <vector>
#include <iostream>

namespace hege {
	enum TopicType {
		Topic_Int,
		Topic_Float,
		Topic_Bool,
		Topic_String,
		Topic_Element,
		Topic_Invalid,
	};

	enum WorkMode {
		Work_IPC,
		Work_Local,
		Work_Invalid,
	};

#define ANY_DOMAIN 0
#define ANY_DEV 0

	class Domain {
	public:
		Domain(int domainID, int devName)
			: mDomainID(domainID)
			, mDevName(devName) {}

		Domain(const Domain& domain) {
			this->mDomainID = domain.mDomainID;
			this->mDevName = domain.mDevName;
		}


		Domain& operator=(const Domain& domin) {
			this->mDomainID = domin.mDomainID;
			this->mDevName = domin.mDevName;
			return *this;
		}

		bool operator==(const Domain& domin) {
			return ((this->mDomainID == domin.mDomainID)
				&& !(this->mDevName == domin.mDevName));
		}
		int mDomainID;
		int mDevName;
	};

	class Topic {
	public:
		Topic(std::string topicName, TopicType type, std::string fullName = "")
		: mTopicName(topicName)
		, mType(type)
		, mFullName(fullName == "" ? topicName : fullName) {}

		Topic& operator=(const Topic& topic) {
			this->mTopicName = topic.mTopicName;
			this->mType = topic.mType;
			this->mFullName = topic.mFullName;
			return *this;
		}

		bool operator==(const Topic& topic) {
			return (!(this->mTopicName.compare(topic.mTopicName))
				&& (this->mType == topic.mType)
				&& (this->mFullName == topic.mFullName));
		}

		std::string FullName() {
			return mFullName;
		}

		bool CotainIn(std::string name) {
			bool rst = false;
			if (name == mFullName) {
				rst = true;
				return rst;
			}
			/* Split Start */
			std::vector<std::string> vec;
			TopicSplit(name, vec, ".");
			/* Split End */

			/* Split Start */
			std::vector<std::string> fullNameVec;
			TopicSplit(mFullName, fullNameVec, ".");
			/* Split End */

			int size = vec.size();
			if (size < fullNameVec.size()) {
				return rst;
			}
			for (int i = 0; i < fullNameVec.size(); i++) {
				if (vec[i] != fullNameVec[i]) {
					return rst;
				}
			}
			rst = true;

			return rst;
		}

		std::string mTopicName;
		TopicType mType;
	private:
		void TopicSplit(const std::string& s, std::vector<std::string>& v, const std::string& c)
		{
			std::string::size_type pos1, pos2;
			size_t len = s.length();
			pos2 = s.find(c);
			pos1 = 0;
			while (std::string::npos != pos2) {
				v.emplace_back(s.substr(pos1, pos2 - pos1));

				pos1 = pos2 + c.size();
				pos2 = s.find(c, pos1);
			}
			if (pos1 != len) {
				v.emplace_back(s.substr(pos1));
			}
		}

		std::string mFullName;
	};
}
#endif