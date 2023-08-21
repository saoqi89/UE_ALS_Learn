// Copyright Epic Games, Inc. All Rights Reserved.

#include "Datasource.h"
#include "DatasourceImpl.h"
#include "Subscriber.h"
#include "DatasourceModule.h"


#include "HAL/PlatformFilemanager.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "Developer/DesktopPlatform/Public/DesktopPlatformModule.h"
#include "Developer/DesktopPlatform/Public/IDesktopPlatform.h"
#include "Runtime/Core/Public/HAL/FileManagerGeneric.h"

UDatasourceImpl* UDatasource::sDatasourceImpl = nullptr;

UDatasource::UDatasource(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}

UDatasourceImpl* UDatasource::CreateAndStartDatasource() {
	if (!sDatasourceImpl) {
		sDatasourceImpl = NewObject<UDatasourceImpl>();
		sDatasourceImpl->CreatePub();
#if PLATFORM_ANDROID
		// TODO:
		//registerDatasource(sDatasourceImpl);
#endif
	}
	return sDatasourceImpl;
}

void UDatasource::StopDatasource() {
	if (sDatasourceImpl) {
		sDatasourceImpl->RemoveAllSubs();
		sDatasourceImpl = nullptr;
	}

}

//TArray<FString> UDatasource::OpenFile()
//{
//	TArray<FString> FilePath; //选择文件路径
//	FString fileType = TEXT("*.*"); //过滤文件类型
//	FString defaultPath = FPaths::ConvertRelativePathToFull(FPaths::ProjectDir()); //文件选择窗口默认开启路径
//	IDesktopPlatform* DesktopPlatform = FDesktopPlatformModule::Get();
//	bool bSuccess = DesktopPlatform->OpenFileDialog(nullptr, TEXT("打开文件"), defaultPath, TEXT(""), *fileType, EFileDialogFlags::None, FilePath);
//
//	for (auto& name : FilePath)
//	{
//		UE_LOG(LogTemp, Warning,
//			TEXT("%s"), *name);
//	}
//	if (bSuccess)
//	{
//		UE_LOG(LogTemp, Warning, TEXT("Success"));
//	}
//	return FilePath;
//}
//
//TArray<FString> UDatasource::ReadFileArray(FString path)
//{
//	TArray<FString> results;
//	FFileHelper::LoadFileToStringArray(results, *path);
//	return results;
//}
//
//bool UDatasource::WriteFileArray(TArray<FString> saveFile, FString path)
//{
//	return FFileHelper::SaveStringArrayToFile(saveFile, *path);
//}

void UDatasource::RegisterSubscriber(FString subName, ASubscriber* sub) {
	if (!sDatasourceImpl) {
		CreateAndStartDatasource();
	}
	if (sDatasourceImpl) {
		sDatasourceImpl->RegisterSub(subName, sub);
	}
}

void UDatasource::NotifyPlatformInt(FString topicName, int value) {
	if (!sDatasourceImpl) {
		CreateAndStartDatasource();
	}
	if (sDatasourceImpl) {
		sDatasourceImpl->NotifyPlatformInt(topicName, value);
	}
}

void UDatasource::NotifyPlatformFloat(FString topicName, float value) {
	if (!sDatasourceImpl) {
		CreateAndStartDatasource();
	}
	if (sDatasourceImpl) {
		sDatasourceImpl->NotifyPlatformFloat(topicName, value);
	}

}

void UDatasource::NotifyPlatformString(FString topicName, FString value) {
	if (!sDatasourceImpl) {
		CreateAndStartDatasource();
	}
	if (sDatasourceImpl) {
		sDatasourceImpl->NotifyPlatformString(topicName, value);
	}

}

void UDatasource::SetIntValue(FString topicName, int value) {
	if (!sDatasourceImpl) {
		CreateAndStartDatasource();
	}
	if (sDatasourceImpl) {
		sDatasourceImpl->SetIntValue(topicName, value);
	}
}

void UDatasource::SetFloatValue(FString topicName, float value) {
	if (!sDatasourceImpl) {
		CreateAndStartDatasource();
	}
	if (sDatasourceImpl) {
		sDatasourceImpl->SetFloatValue(topicName, value);
	}

}

void UDatasource::SetStringValue(FString topicName, FString value) {
	if (!sDatasourceImpl) {
		CreateAndStartDatasource();
	}
	if (sDatasourceImpl) {
		sDatasourceImpl->SetStringValue(topicName, value);
	}

}