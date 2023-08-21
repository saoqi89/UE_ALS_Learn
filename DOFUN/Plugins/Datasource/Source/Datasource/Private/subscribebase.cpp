#include "subscribebase.h"
#include <stdio.h>
#include "tinyxml2.h"

using namespace tinyxml2;
using namespace std;
namespace hege {

bool FileIsExist(std::string& name) {
	if (FILE* file = fopen(name.c_str(), "r")) {
		fclose(file);
		return true;
	}
	else {
		return false;
	}
}

SubscribeImpl::SubscribeImpl(Domain domain, WorkMode workMode) : mDomain(domain), mWorkMode(workMode) {}

SubscribeImpl::~SubscribeImpl() {}

void printBlank(int level = 0)
{
	while (level > 0)
	{
		cout << "  ";
		level--;
	}
}

void RegisterTopic(SubscribeImpl* impl, string topicName, string suffixName, string attribute) {
	//cout << "RegisterTopic topicName : " << topicName << ", suffixName : " << suffixName << endl;
	string fullString = "";
	TopicType type = Topic_Element;
	if (attribute == "int") {
		type = Topic_Int;
	} else if (attribute == "float") {
		type = Topic_Float;
	} else if (attribute == "bool") {
		type = Topic_Bool;
	} else if (attribute == "string") {
		type = Topic_String;
	}
	if (suffixName != "") {
		fullString = suffixName + "." + topicName;
	}
	else {
		fullString = topicName;
	}
	if (fullString == "") {
		return;
	}
	bool rst = impl->HasTopic(fullString, type);
	if (rst) {
		//cout << "Alread register.........  " << fullString << ", type: " << int(type) << endl;
	} else {
		cout << "Request register : " << fullString << ", type: " << int(type) << endl;
		Topic topic(topicName, type, fullString);
		impl->AddTopic(topic);
	}
}

void StringSplit(const std::string& s, std::vector<std::string>& v, const std::string& c)
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

int ParseXMLDocument(SubscribeImpl* impl, XMLElement* element, int level = 0, string parentName = "")
{
	//printBlank(level);
	string suffixName = parentName;
	string attribute = "";
	//if (suffixName != "") {
	//	suffixName += ".";
//}
//cout << "Level: " << level << ", parentName : " << parentName << endl;
	if (0 == level) {
		cout << element->Value() << ":" << endl;
	}
	if (element->FirstChildElement() == NULL)
	{
		//printBlank(level);

		if (element->FirstAttribute() != NULL && element->Attribute("type") != NULL) {
			//cout << "Attribute : " << element->Attribute("type") << endl;
			attribute = element->Attribute("type");
		}

		RegisterTopic(impl, element->Name(), suffixName, attribute);
		//cout << element->Name() << " is " << element->GetText() << endl;
	}

	if (level > 1) {
		suffixName += ".";
	}

	if (level > 0) {
		suffixName += element->Name();
		//RegisterTopic(impl, suffixName, "", attribute);
		//cout << "suffixName: " << suffixName << ", level : " << level << endl;
	}
	for (XMLElement* ptrElement = element->FirstChildElement(); ptrElement; ptrElement = ptrElement->NextSiblingElement())
	{
		RegisterTopic(impl, suffixName, "", attribute);
		ParseXMLDocument(impl, ptrElement, level + 1, suffixName);
	}
	return 0;
}

bool SubscribeImpl::AddTopicWithFile(std::string path) {
	XMLDocument doc;
	bool rst = false;
	if (FileIsExist(path)) {
		//std::cout << "File exist" << std::endl;

		doc.LoadFile(path.c_str());
		if (doc.ErrorID() != 0) {
			std::cout << doc.ErrorID() << std::endl;
			return false;
		}

		XMLElement* root = doc.RootElement();
		ParseXMLDocument(this, root);
		rst = true;

	}
	else {
		std::cout << "File not exist" << std::endl;
	}
	return rst;
}

bool SubscribeImpl::AddTopic(Topic& topic) {
	if (HasTopic(topic)) {
		//cout << "Already register topic" << endl;
		return false;
	}
	cout << "Add +++++ : " << topic.FullName() << ", type: " << int(topic.mType) << endl;
	mTopics.push_back(topic);
	return true;
}

bool SubscribeImpl::RemoveTopic(Topic& topic) {
	bool rst = false;
	auto it = mTopics.begin();
	for (; it != mTopics.end(); it++) {
		if (*it == topic) {
			rst = true;
			break;
		}
	}
	if (rst) {
		mTopics.erase(it);
	}
	return true;
}

bool SubscribeImpl::AddTopics(std::vector<Topic>& topics) {
	for (auto item : topics) {
		mTopics.push_back(item);
	}
	return true;
}

bool SubscribeImpl::RemoveAllTopics() {
	mTopics.clear();
	return true;
}

bool SubscribeImpl::RegisterSub() {
	return true;
}

bool SubscribeImpl::DeregisterSub() {
	return true;
}

bool SubscribeImpl::HasTopic(string fullName, TopicType type) {
	bool rst = false;
	Topic find("", Topic_Invalid);
	for (auto item : mTopics) {
		if (item.CotainIn(fullName)) {
			rst = true;
			find = item;
			break;
		}
	}
	if (fullName == find.FullName() && type != find.mType) {
		rst = false;
	}
	return rst;
}

bool SubscribeImpl::HasTopic(Topic& topic) {
	bool rst = false;

	for (auto item : mTopics) {
		if (item == topic) {
			rst = true;
			break;
		}
	}
	if (!rst) {
		rst = HasTopic(topic.FullName(), topic.mType);
	}
	return rst;
}
};