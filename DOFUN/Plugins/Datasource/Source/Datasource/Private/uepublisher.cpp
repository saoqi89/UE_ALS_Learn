#include "uepublisher.h"
#include "submanagerandroid.h"
#include "datamanager.h"

namespace hege {

void PubMsgToAndroid(std::string name, int value) {
#if PLATFORM_ANDROID
	JNIEnv* localEnv;
	if (!GetJavaVM()) {
		ALOGD("GetJavaVM() is empty.");
		return;
	}
	GetJavaVM()->GetEnv((void**)&localEnv, JNI_VERSION_1_6);
	jclass clazz = localEnv->GetObjectClass(GetCallbackObj());
	jmethodID notifyMethodId = localEnv->GetMethodID(clazz, "OnIntValueCallback", "(Ljava/lang/String;I)V");
	if (0 == notifyMethodId) {
		ALOGD("Not found MethodId of \"OnIntValueCallback\"");
		return;
		}
	localEnv->CallVoidMethod(GetCallbackObj(), notifyMethodId, localEnv->NewStringUTF(name.c_str()), value);
#endif
#if PLATFORM_WINDOWS
	DataManager::GetDataManagerInst()->SetIntValue(name, value);
#endif
}

void PubMsgToAndroid(std::string name, double value) {
#if PLATFORM_ANDROID
	JNIEnv* localEnv;
	if (!GetJavaVM()) {
		ALOGD("GetJavaVM() is empty.");
		return;
	}
	GetJavaVM()->GetEnv((void**)&localEnv, JNI_VERSION_1_6);
	jclass clazz = localEnv->GetObjectClass(GetCallbackObj());
	jmethodID notifyMethodId = localEnv->GetMethodID(clazz, "OnFloatValueCallback", "(Ljava/lang/String;F)V");
	if (0 == notifyMethodId) {
		ALOGD("Not found MethodId of \"OnFloatValueCallback\"");
		return;
	}
	localEnv->CallVoidMethod(GetCallbackObj(), notifyMethodId, localEnv->NewStringUTF(name.c_str()), value);
#endif
#if PLATFORM_WINDOWS
	DataManager::GetDataManagerInst()->SetFloatValue(name, value);
#endif
}

void PubMsgToAndroid(std::string name, std::string value) {
#if PLATFORM_ANDROID
	JNIEnv* localEnv;
	if (!GetJavaVM()) {
		ALOGD("GetJavaVM() is empty.");
		return;
	}
	GetJavaVM()->GetEnv((void**)&localEnv, JNI_VERSION_1_6);
	jclass clazz = localEnv->GetObjectClass(GetCallbackObj());
	jmethodID notifyMethodId = localEnv->GetMethodID(clazz, "OnStringValueCallback", "(Ljava/lang/String;Ljava/lang/String)V");
	if (0 == notifyMethodId) {
		ALOGD("Not found MethodId of \"OnStringValueCallback\"");
		return;
	}
	localEnv->CallVoidMethod(GetCallbackObj(), notifyMethodId, localEnv->NewStringUTF(name.c_str()), localEnv->NewStringUTF(value.c_str()));
#endif
#if PLATFORM_WINDOWS
	DataManager::GetDataManagerInst()->SetStringValue(name, value);
#endif
}
}