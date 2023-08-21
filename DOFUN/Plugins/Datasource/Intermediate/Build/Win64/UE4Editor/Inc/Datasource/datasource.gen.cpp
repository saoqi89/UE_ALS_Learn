// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Datasource/Public/datasource.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodedatasource() {}
// Cross Module References
	DATASOURCE_API UClass* Z_Construct_UClass_UDatasource_NoRegister();
	DATASOURCE_API UClass* Z_Construct_UClass_UDatasource();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Datasource();
	DATASOURCE_API UClass* Z_Construct_UClass_UDatasourceImpl_NoRegister();
	DATASOURCE_API UClass* Z_Construct_UClass_ASubscriber_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDatasource::execSetStringValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_topicName);
		P_GET_PROPERTY(FStrProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDatasource::SetStringValue(Z_Param_topicName,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasource::execSetFloatValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_topicName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDatasource::SetFloatValue(Z_Param_topicName,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasource::execSetIntValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_topicName);
		P_GET_PROPERTY(FIntProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDatasource::SetIntValue(Z_Param_topicName,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasource::execNotifyPlatformString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_topicName);
		P_GET_PROPERTY(FStrProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDatasource::NotifyPlatformString(Z_Param_topicName,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasource::execNotifyPlatformFloat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_topicName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDatasource::NotifyPlatformFloat(Z_Param_topicName,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasource::execNotifyPlatformInt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_topicName);
		P_GET_PROPERTY(FIntProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDatasource::NotifyPlatformInt(Z_Param_topicName,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasource::execRegisterSubscriber)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_subName);
		P_GET_OBJECT(ASubscriber,Z_Param_sub);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDatasource::RegisterSubscriber(Z_Param_subName,Z_Param_sub);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasource::execStopDatasource)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UDatasource::StopDatasource();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasource::execCreateAndStartDatasource)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDatasourceImpl**)Z_Param__Result=UDatasource::CreateAndStartDatasource();
		P_NATIVE_END;
	}
	void UDatasource::StaticRegisterNativesUDatasource()
	{
		UClass* Class = UDatasource::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateAndStartDatasource", &UDatasource::execCreateAndStartDatasource },
			{ "NotifyPlatformFloat", &UDatasource::execNotifyPlatformFloat },
			{ "NotifyPlatformInt", &UDatasource::execNotifyPlatformInt },
			{ "NotifyPlatformString", &UDatasource::execNotifyPlatformString },
			{ "RegisterSubscriber", &UDatasource::execRegisterSubscriber },
			{ "SetFloatValue", &UDatasource::execSetFloatValue },
			{ "SetIntValue", &UDatasource::execSetIntValue },
			{ "SetStringValue", &UDatasource::execSetStringValue },
			{ "StopDatasource", &UDatasource::execStopDatasource },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDatasource_CreateAndStartDatasource_Statics
	{
		struct Datasource_eventCreateAndStartDatasource_Parms
		{
			UDatasourceImpl* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasource_CreateAndStartDatasource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Datasource_eventCreateAndStartDatasource_Parms, ReturnValue), Z_Construct_UClass_UDatasourceImpl_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasource_CreateAndStartDatasource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasource_CreateAndStartDatasource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasource_CreateAndStartDatasource_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataSource" },
		{ "ModuleRelativePath", "Public/datasource.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasource_CreateAndStartDatasource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasource, nullptr, "CreateAndStartDatasource", nullptr, nullptr, sizeof(Datasource_eventCreateAndStartDatasource_Parms), Z_Construct_UFunction_UDatasource_CreateAndStartDatasource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasource_CreateAndStartDatasource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasource_CreateAndStartDatasource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasource_CreateAndStartDatasource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasource_CreateAndStartDatasource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDatasource_CreateAndStartDatasource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasource_NotifyPlatformFloat_Statics
	{
		struct Datasource_eventNotifyPlatformFloat_Parms
		{
			FString topicName;
			float value;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_topicName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasource_NotifyPlatformFloat_Statics::NewProp_topicName = { "topicName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Datasource_eventNotifyPlatformFloat_Parms, topicName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDatasource_NotifyPlatformFloat_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Datasource_eventNotifyPlatformFloat_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasource_NotifyPlatformFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasource_NotifyPlatformFloat_Statics::NewProp_topicName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasource_NotifyPlatformFloat_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasource_NotifyPlatformFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataSource" },
		{ "ModuleRelativePath", "Public/datasource.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasource_NotifyPlatformFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasource, nullptr, "NotifyPlatformFloat", nullptr, nullptr, sizeof(Datasource_eventNotifyPlatformFloat_Parms), Z_Construct_UFunction_UDatasource_NotifyPlatformFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasource_NotifyPlatformFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasource_NotifyPlatformFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasource_NotifyPlatformFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasource_NotifyPlatformFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDatasource_NotifyPlatformFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasource_NotifyPlatformInt_Statics
	{
		struct Datasource_eventNotifyPlatformInt_Parms
		{
			FString topicName;
			int32 value;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_topicName;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasource_NotifyPlatformInt_Statics::NewProp_topicName = { "topicName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Datasource_eventNotifyPlatformInt_Parms, topicName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UDatasource_NotifyPlatformInt_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Datasource_eventNotifyPlatformInt_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasource_NotifyPlatformInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasource_NotifyPlatformInt_Statics::NewProp_topicName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasource_NotifyPlatformInt_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasource_NotifyPlatformInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataSource" },
		{ "ModuleRelativePath", "Public/datasource.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasource_NotifyPlatformInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasource, nullptr, "NotifyPlatformInt", nullptr, nullptr, sizeof(Datasource_eventNotifyPlatformInt_Parms), Z_Construct_UFunction_UDatasource_NotifyPlatformInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasource_NotifyPlatformInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasource_NotifyPlatformInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasource_NotifyPlatformInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasource_NotifyPlatformInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDatasource_NotifyPlatformInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasource_NotifyPlatformString_Statics
	{
		struct Datasource_eventNotifyPlatformString_Parms
		{
			FString topicName;
			FString value;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_topicName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasource_NotifyPlatformString_Statics::NewProp_topicName = { "topicName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Datasource_eventNotifyPlatformString_Parms, topicName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasource_NotifyPlatformString_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Datasource_eventNotifyPlatformString_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasource_NotifyPlatformString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasource_NotifyPlatformString_Statics::NewProp_topicName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasource_NotifyPlatformString_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasource_NotifyPlatformString_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataSource" },
		{ "ModuleRelativePath", "Public/datasource.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasource_NotifyPlatformString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasource, nullptr, "NotifyPlatformString", nullptr, nullptr, sizeof(Datasource_eventNotifyPlatformString_Parms), Z_Construct_UFunction_UDatasource_NotifyPlatformString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasource_NotifyPlatformString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasource_NotifyPlatformString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasource_NotifyPlatformString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasource_NotifyPlatformString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDatasource_NotifyPlatformString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasource_RegisterSubscriber_Statics
	{
		struct Datasource_eventRegisterSubscriber_Parms
		{
			FString subName;
			ASubscriber* sub;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_subName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_sub;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasource_RegisterSubscriber_Statics::NewProp_subName = { "subName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Datasource_eventRegisterSubscriber_Parms, subName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasource_RegisterSubscriber_Statics::NewProp_sub = { "sub", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Datasource_eventRegisterSubscriber_Parms, sub), Z_Construct_UClass_ASubscriber_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasource_RegisterSubscriber_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasource_RegisterSubscriber_Statics::NewProp_subName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasource_RegisterSubscriber_Statics::NewProp_sub,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasource_RegisterSubscriber_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataSource" },
		{ "ModuleRelativePath", "Public/datasource.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasource_RegisterSubscriber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasource, nullptr, "RegisterSubscriber", nullptr, nullptr, sizeof(Datasource_eventRegisterSubscriber_Parms), Z_Construct_UFunction_UDatasource_RegisterSubscriber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasource_RegisterSubscriber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasource_RegisterSubscriber_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasource_RegisterSubscriber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasource_RegisterSubscriber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDatasource_RegisterSubscriber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasource_SetFloatValue_Statics
	{
		struct Datasource_eventSetFloatValue_Parms
		{
			FString topicName;
			float value;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_topicName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasource_SetFloatValue_Statics::NewProp_topicName = { "topicName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Datasource_eventSetFloatValue_Parms, topicName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDatasource_SetFloatValue_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Datasource_eventSetFloatValue_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasource_SetFloatValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasource_SetFloatValue_Statics::NewProp_topicName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasource_SetFloatValue_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasource_SetFloatValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataSource" },
		{ "ModuleRelativePath", "Public/datasource.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasource_SetFloatValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasource, nullptr, "SetFloatValue", nullptr, nullptr, sizeof(Datasource_eventSetFloatValue_Parms), Z_Construct_UFunction_UDatasource_SetFloatValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasource_SetFloatValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasource_SetFloatValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasource_SetFloatValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasource_SetFloatValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDatasource_SetFloatValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasource_SetIntValue_Statics
	{
		struct Datasource_eventSetIntValue_Parms
		{
			FString topicName;
			int32 value;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_topicName;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasource_SetIntValue_Statics::NewProp_topicName = { "topicName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Datasource_eventSetIntValue_Parms, topicName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UDatasource_SetIntValue_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Datasource_eventSetIntValue_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasource_SetIntValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasource_SetIntValue_Statics::NewProp_topicName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasource_SetIntValue_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasource_SetIntValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataSource" },
		{ "ModuleRelativePath", "Public/datasource.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasource_SetIntValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasource, nullptr, "SetIntValue", nullptr, nullptr, sizeof(Datasource_eventSetIntValue_Parms), Z_Construct_UFunction_UDatasource_SetIntValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasource_SetIntValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasource_SetIntValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasource_SetIntValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasource_SetIntValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDatasource_SetIntValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasource_SetStringValue_Statics
	{
		struct Datasource_eventSetStringValue_Parms
		{
			FString topicName;
			FString value;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_topicName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasource_SetStringValue_Statics::NewProp_topicName = { "topicName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Datasource_eventSetStringValue_Parms, topicName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasource_SetStringValue_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Datasource_eventSetStringValue_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasource_SetStringValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasource_SetStringValue_Statics::NewProp_topicName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasource_SetStringValue_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasource_SetStringValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataSource" },
		{ "ModuleRelativePath", "Public/datasource.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasource_SetStringValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasource, nullptr, "SetStringValue", nullptr, nullptr, sizeof(Datasource_eventSetStringValue_Parms), Z_Construct_UFunction_UDatasource_SetStringValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasource_SetStringValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasource_SetStringValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasource_SetStringValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasource_SetStringValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDatasource_SetStringValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasource_StopDatasource_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasource_StopDatasource_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataSource" },
		{ "ModuleRelativePath", "Public/datasource.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasource_StopDatasource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasource, nullptr, "StopDatasource", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasource_StopDatasource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasource_StopDatasource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasource_StopDatasource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDatasource_StopDatasource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDatasource_NoRegister()
	{
		return UDatasource::StaticClass();
	}
	struct Z_Construct_UClass_UDatasource_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Datasource,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDatasource_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDatasource_CreateAndStartDatasource, "CreateAndStartDatasource" }, // 487335447
		{ &Z_Construct_UFunction_UDatasource_NotifyPlatformFloat, "NotifyPlatformFloat" }, // 959251276
		{ &Z_Construct_UFunction_UDatasource_NotifyPlatformInt, "NotifyPlatformInt" }, // 536001278
		{ &Z_Construct_UFunction_UDatasource_NotifyPlatformString, "NotifyPlatformString" }, // 13918888
		{ &Z_Construct_UFunction_UDatasource_RegisterSubscriber, "RegisterSubscriber" }, // 3960771652
		{ &Z_Construct_UFunction_UDatasource_SetFloatValue, "SetFloatValue" }, // 3864916575
		{ &Z_Construct_UFunction_UDatasource_SetIntValue, "SetIntValue" }, // 3007075146
		{ &Z_Construct_UFunction_UDatasource_SetStringValue, "SetStringValue" }, // 3441169172
		{ &Z_Construct_UFunction_UDatasource_StopDatasource, "StopDatasource" }, // 2982661074
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasource_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "datasource.h" },
		{ "ModuleRelativePath", "Public/datasource.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasource>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDatasource_Statics::ClassParams = {
		&UDatasource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasource()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDatasource_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDatasource, 2255033887);
	template<> DATASOURCE_API UClass* StaticClass<UDatasource>()
	{
		return UDatasource::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDatasource(Z_Construct_UClass_UDatasource, &UDatasource::StaticClass, TEXT("/Script/Datasource"), TEXT("UDatasource"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasource);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
