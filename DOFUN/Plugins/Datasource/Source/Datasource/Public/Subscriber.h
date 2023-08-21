#pragma once
#include <iostream>
#include <string>
#include <map>

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/Object.h"


#include "Subscriber.generated.h"

UENUM(BlueprintType)
enum class EDataType:uint8
{
	DataType_Int,
	DataType_Float,
	DataType_String,
};

UCLASS()
class ASubscriber : public AActor {
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Subscriber")
	void AddTopic(FString topic, EDataType type);

	UFUNCTION(BlueprintCallable, Category = "Subscriber")
	void AddTopics(TArray<FString> topics, TArray<EDataType> types);

	UFUNCTION(BlueprintCallable, Category = "Subscriber")
	void RemoveTopic(FString topic, EDataType type);

	UFUNCTION(BlueprintCallable, Category = "Subscriber")
	void RemoveAllTopic();

	UFUNCTION(BlueprintCallable, DisplayName = "AddTopicWithFile", Category = "File")
	bool AddTopicWithFile(FString filePath);

	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "IntValueUpdateEvent", Keywords = "Subscriber On Int Value Update"), Category = "Subscriber")
	void IntValueUpdateEvent(const FString& name, int32 value);

	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "FloatValueUpdateEvent", Keywords = "Subscriber On Float Value Update"), Category = "Subscriber")
	void FloatValueUpdateEvent(const FString& name, float value);

	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "FStringValueUpdateEvent", Keywords = "Subscriber On FString Value Update"), Category = "Subscriber")
	void FStringValueUpdateEvent(const FString& name, const FString& value);

	std::map<FString, EDataType> mTopics;

};

