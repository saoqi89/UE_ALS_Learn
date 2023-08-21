#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Datasource.h"
#include <string>
#include <unordered_map>
#include <map>
#include <thread>
#include <atomic>

#include "DatasourceImpl.generated.h"

class ASubscriber;

UCLASS(MinimalAPI, BlueprintType)
class UDatasourceImpl final : public UObject
{
	GENERATED_BODY()

public:
	void CreatePub();
	void RegisterSub(FString& name, ASubscriber* sub);
	void RemoveSub(FString& name);
	void RemoveAllSubs();

	// Send msg from UE to Android/Linux
	void NotifyPlatformInt(FString& topicName, int& value);
	void NotifyPlatformFloat(FString& topicName, float& value);
	void NotifyPlatformString(FString& topicName, FString& value);

	// Notify from Android/Linux to UE.
	void SetIntValue(FString& topicName, int& value);
	void SetFloatValue(FString& topicName, float& value);
	void SetStringValue(FString& topicName, FString& value);

};