// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include <string>
#include "GameFramework/Actor.h"
#include "DataSource.generated.h"

/* 
*	Function library class.
*	Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.
*
*	When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.
*	BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.
*	BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.
*	DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.
*				Its lets you name the node using characters not allowed in C++ function names.
*	CompactNodeTitle - the word(s) that appear on the node.
*	Keywords -	the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. 
*				Good example is "Print String" node which you can find also by using keyword "log".
*	Category -	the category your node will be under in the Blueprint drop-down menu.
*
*	For more info on custom blueprint nodes visit documentation:
*	https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation
*/
class ASubscriber;
class UDatasourceImpl;

UCLASS(MinimalAPI)
class UDatasource : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "DataSource")
	static UDatasourceImpl* CreateAndStartDatasource();

	UFUNCTION(BlueprintCallable, Category = "DataSource")
	static void StopDatasource();

	UFUNCTION(BlueprintCallable, Category = "DataSource")
	static void RegisterSubscriber(FString subName, ASubscriber* sub);

	UFUNCTION(BlueprintCallable, Category = "DataSource")
	static void NotifyPlatformInt(FString topicName, int value);

	UFUNCTION(BlueprintCallable, Category = "DataSource")
	static void NotifyPlatformFloat(FString topicName, float value);

	UFUNCTION(BlueprintCallable, Category = "DataSource")
	static void NotifyPlatformString(FString topicName, FString value);

	UFUNCTION(BlueprintCallable, Category = "DataSource")
	static void SetIntValue(FString topicName, int value);

	UFUNCTION(BlueprintCallable, Category = "DataSource")
	static void SetFloatValue(FString topicName, float value);

	UFUNCTION(BlueprintCallable, Category = "DataSource")
	static void SetStringValue(FString topicName, FString value);

	//UFUNCTION(BlueprintCallable, DisplayName = "OpenFile", Category = "File")
	//static TArray<FString> OpenFile();

	//UFUNCTION(BlueprintCallable, DisplayName = "ReadFileArray", Category = "File")
	//static TArray<FString> ReadFileArray(FString path);

	//UFUNCTION(BlueprintCallable, DisplayName = "WriteFileArray", Category = "File")
	//static bool WriteFileArray(TArray<FString> saveFile, FString path);

	//UPROPERTY(BlueprintReadOnly)
	//FString LogStr;

	//UPROPERTY(BlueprintReadOnly)
	//FCriticalSection mCriticalSection;

protected:
	static UDatasourceImpl* sDatasourceImpl;

};
