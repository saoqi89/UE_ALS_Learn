#include "submanagerandroid.h"
#include "msg.h"
#if USE_UE
#include "DataManager.h"
#endif
#if PLATFORM_ANDROID
#include "Android/AndroidApplication.h"
#include "Launch/Public/Android/AndroidJNI.h"
#endif


#if PLATFORM_ANDROID
static JavaVM* sJavaVm;
static jobject sCallbackObj;
#endif

namespace hege {
	static SubmanagerAchAndroidUE* sInstance = nullptr;
	SubmanagerAchAndroidUE* SubmanagerAchAndroidUE::GetAndroidUEArchInstance() {
		if (sInstance == nullptr) {
			sInstance = new SubmanagerAchAndroidUE();
		}
		return sInstance;
	}

#if PLATFORM_ANDROID
	JavaVM* GetJavaVM() {
		return sJavaVm;
	}

	jobject GetCallbackObj() {
		return sCallbackObj;
	}
#endif

#if PLATFORM_ANDROID
JNI_METHOD void Java_com_hege_datafeeder_AndroidDataFeeder_PubStringValue(JNIEnv* env, jclass clazz, jint domain, jint dev, jstring name, jstring value) {
	ALOGD("Java_com_hege_datafeeder_AndroidDataFeeder_PubStringValue");
	// TODO: implement focusEvent()
	if (nullptr == env || sInstance == nullptr) {
		ALOGD("!!! PubStringValue Error!!! env or actor is NULL");
		return;
	}

	int domainInt = domain;
	int devInt = dev;
	const char* nameStr = env->GetStringUTFChars(name, NULL);
	const char* valueStr = env->GetStringUTFChars(value, NULL);
	ALOGD("!!!!!!!!!!!!!!! PubStringValue from Android domain %d, dev %d, name %s, Value %s",
		domainInt, devInt, nameStr, valueStr);
	Topic topic(nameStr, Topic_String);
	Domain ddomain(domainInt, devInt);
	UserMsg msg(topic, ddomain);
	sInstance->PubMsg(msg);

#if USE_UE
	FString nameString(UTF8_TO_TCHAR(nameStr));
	FString valueString(UTF8_TO_TCHAR(valueStr));

	DataManager::GetDataManagerInst()->SetStringValue(nameStr, valueStr);
#endif

	env->ReleaseStringUTFChars(name, nameStr);
	env->ReleaseStringUTFChars(value, valueStr);
}

JNI_METHOD void Java_com_hege_datafeeder_AndroidDataFeeder_PubIntValue(JNIEnv* env, jclass clazz, jint domain, jint dev, jstring name, jint value) {
	ALOGD("Java_com_hege_datafeeder_AndroidDataFeeder_PubIntValue");
	// TODO: implement focusEvent()
	if (nullptr == env || sInstance == nullptr) {
		ALOGD("!!! PubIntValue Error!!! env or actor is NULL");
		return;
	}

	int domainInt = domain;
	int devInt = dev;
	const char* nameStr = env->GetStringUTFChars(name, NULL);
	int intValue = value;
	ALOGD("!!!!!!!!!!!!!!! PubIntValue from Android domain %d, dev %d, name %s, Value %d",
		domainInt, devInt, nameStr, intValue);

	Topic topic(nameStr, Topic_Int);
	Domain ddomain(domainInt, devInt);
	UserMsg msg(topic, ddomain);
	sInstance->PubMsg(msg);

#if USE_UE
	FString nameString(UTF8_TO_TCHAR(nameStr));
	DataManager::GetDataManagerInst()->SetIntValue(nameStr, intValue);
#endif

	env->ReleaseStringUTFChars(name, nameStr);
}

JNI_METHOD void Java_com_hege_datafeeder_AndroidDataFeeder_PubBoolValue(JNIEnv* env, jclass clazz, jint domain, jint dev, jstring name, jint value) {
	ALOGD("Java_com_hege_datafeeder_AndroidDataFeeder_PubBoolValue");
	// TODO: implement focusEvent()
	if (nullptr == env || nullptr == sInstance) {
		ALOGD("!!! PubBoolValue Error!!! env or actor is NULL");
		return;
	}

	int domainInt = domain;
	int devInt = dev;
	const char* nameStr = env->GetStringUTFChars(name, NULL);
	int intValue = value;

	Topic topic(nameStr, Topic_Bool);
	Domain ddomain(domainInt, devInt);
	UserMsg msg(topic, ddomain);
	sInstance->PubMsg(msg);
#if USE_UE
	FString nameString(UTF8_TO_TCHAR(nameStr));
	DataManager::GetDataManagerInst()->SetIntValue(nameStr, intValue);
#endif

	env->ReleaseStringUTFChars(name, nameStr);
	ALOGD("!!!!!!!!!!!!!!! PubBoolValue from Android domain %d, dev %d, name %s, Value %d",
		domainInt, devInt, nameStr, intValue);

}

JNI_METHOD void Java_com_hege_datafeeder_AndroidDataFeeder_PubFloatValue(JNIEnv* env, jclass clazz, jint domain, jint dev, jstring name, jfloat value) {
	ALOGD("Java_com_hege_datafeeder_AndroidDataFeeder_PubFloatValue");
	// TODO: implement focusEvent()
	if (nullptr == env || nullptr == sInstance) {
		ALOGD("!!! PubFloatValue Error!!! env or actor is NULL");
		return;
	}

	int domainInt = domain;
	int devInt = dev;
	const char* nameStr = env->GetStringUTFChars(name, NULL);
	float floatValue = value;

	Topic topic(nameStr, Topic_Bool);
	Domain ddomain(domainInt, devInt);
	UserMsg msg(topic, ddomain);
	sInstance->PubMsg(msg);

#if USE_UE
	FString nameString(UTF8_TO_TCHAR(nameStr));
	DataManager::GetDataManagerInst()->SetFloatValue(nameStr, floatValue);
#endif

	env->ReleaseStringUTFChars(name, nameStr);
	ALOGD("!!!!!!!!!!!!!!! PubFloatValue from Android domain %d, dev %d, name %s, Value %.2f",
		domainInt, devInt, nameStr, floatValue);
}

JNI_METHOD void Java_com_hege_datafeeder_AndroidDataFeeder_RegisterCallback(JNIEnv* env, jclass clazz, jint domain, jint dev,
	jobject callback) {
	// TODO: implement RegisterCallback()
	ALOGD("Java_com_hege_datafeeder_AndroidDataFeeder_RegisterCallback");
	if (0 == env) {
		ALOGD("!!!!!!!!!! Env is empty, register failed");
		return;
	}
	env->GetJavaVM(&sJavaVm);
	//JNIEnv* localEnv;
	//javaVm->GetEnv((void**)&localEnv, JNI_VERSION_1_6);
	sCallbackObj = env->NewGlobalRef(callback);
}

#endif

}