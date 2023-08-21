#ifndef __SUB_MANAGER_ANDROID_H__
#define __SUB_MANAGER_ANDROID_H__
#include "submanager.h"


#define UE_DOMAIN 4

#define USE_UE 1

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

	class SubmanagerAchAndroidUE : public SubmanagerAch {
	public:
		static SubmanagerAchAndroidUE* GetAndroidUEArchInstance();
	private:
		SubmanagerAchAndroidUE() : SubmanagerAch() {}
		~SubmanagerAchAndroidUE() {}

	};

#if PLATFORM_ANDROID
	JNI_METHOD void Java_com_hege_datafeeder_AndroidDataFeeder_PubStringValue(JNIEnv* env, jclass clazz, jint domain, jint dev, jstring name, jstring value);

	JNI_METHOD void Java_com_hege_datafeeder_AndroidDataFeeder_PubIntValue(JNIEnv* env, jclass clazz, jint domain, jint dev, jstring name, jint value);

	JNI_METHOD void Java_com_hege_datafeeder_AndroidDataFeeder_PubBoolValue(JNIEnv* env, jclass clazz, jint domain, jint dev, jstring name, jint value);

	JNI_METHOD void Java_com_hege_datafeeder_AndroidDataFeeder_PubFloatValue(JNIEnv* env, jclass clazz, jint domain, jint dev, jstring name, jfloat value);

	JNI_METHOD void Java_com_hege_datafeeder_AndroidDataFeeder_RegisterCallback(JNIEnv* env, jclass clazz, jint domain, jint dev, jobject callback);

	 JavaVM* GetJavaVM();

	 jobject GetCallbackObj();
#endif
};

#endif  // __SUB_MANAGER_ANDROID_H__