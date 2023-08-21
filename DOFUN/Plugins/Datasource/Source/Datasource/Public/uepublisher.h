#ifndef __UE_PUBLISHER_H__
#define __UE_PUBLISHER_H__
#include "publisherbase.h"

#if PLATFORM_ANDROID
#include <jni.h>
#include <android/log.h>



#define JNI_METHOD			__attribute__ ((visibility ("default"))) extern "C"
#define LOG_TAG "UE_C++"

//定义日志打印宏函数
#define ALOGI(...)  __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)
#define ALOGE(...)  __android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__)
#define ALOGW(...)  __android_log_print(ANDROID_LOG_WARN, LOG_TAG, __VA_ARGS__)
#define ALOGD(...)  __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)
#endif
namespace hege {

void PubMsgToAndroid(std::string name, int value);
void PubMsgToAndroid(std::string name, double value);
void PubMsgToAndroid(std::string name, std::string value);

template<class MsgType>
class Publisher : public PublisherBase<MsgType> {
public:
	Publisher(Domain domain, WorkMode workMode = Work_Local) : PublisherBase<MsgType>(domain, workMode) {}
	~Publisher() {}
	void PubMsg(MsgType msg) {
		switch (msg.GetTopic().mType) {
		case Topic_Int:
			PubMsgToAndroid(msg.GetTopic().mTopicName, std::atoi(msg.GetData().c_str()));
			break;
		case Topic_Bool:
			PubMsgToAndroid(msg.GetTopic().mTopicName, std::atoi(msg.GetData().c_str()));
			break;
		case Topic_Float:
			PubMsgToAndroid(msg.GetTopic().mTopicName, std::atof(msg.GetData().c_str()));
			break;
		case Topic_String:
			PubMsgToAndroid(msg.GetTopic().mTopicName, msg.GetData());
			break;
		default:
			break;
		}
		PublisherBase<MsgType>::PubMsg(msg);
	}
};

};

#endif