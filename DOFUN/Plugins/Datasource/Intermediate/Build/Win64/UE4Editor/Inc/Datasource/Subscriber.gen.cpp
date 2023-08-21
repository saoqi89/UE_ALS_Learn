// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Datasource/Public/Subscriber.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubscriber() {}
// Cross Module References
	DATASOURCE_API UEnum* Z_Construct_UEnum_Datasource_EDataType();
	UPackage* Z_Construct_UPackage__Script_Datasource();
	DATASOURCE_API UClass* Z_Construct_UClass_ASubscriber_NoRegister();
	DATASOURCE_API UClass* Z_Construct_UClass_ASubscriber();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
	static UEnum* EDataType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Datasource_EDataType, Z_Construct_UPackage__Script_Datasource(), TEXT("EDataType"));
		}
		return Singleton;
	}
	template<> DATASOURCE_API UEnum* StaticEnum<EDataType>()
	{
		return EDataType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDataType(EDataType_StaticEnum, TEXT("/Script/Datasource"), TEXT("EDataType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Datasource_EDataType_Hash() { return 2907687876U; }
	UEnum* Z_Construct_UEnum_Datasource_EDataType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Datasource();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDataType"), 0, Get_Z_Construct_UEnum_Datasource_EDataType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDataType::DataType_Int", (int64)EDataType::DataType_Int },
				{ "EDataType::DataType_Float", (int64)EDataType::DataType_Float },
				{ "EDataType::DataType_String", (int64)EDataType::DataType_String },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DataType_Float.Name", "EDataType::DataType_Float" },
				{ "DataType_Int.Name", "EDataType::DataType_Int" },
				{ "DataType_String.Name", "EDataType::DataType_String" },
				{ "ModuleRelativePath", "Public/Subscriber.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Datasource,
				nullptr,
				"EDataType",
				"EDataType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(ASubscriber::execAddTopicWithFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_filePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddTopicWithFile(Z_Param_filePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASubscriber::execRemoveAllTopic)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAllTopic();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASubscriber::execRemoveTopic)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_topic);
		P_GET_ENUM(EDataType,Z_Param_type);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveTopic(Z_Param_topic,EDataType(Z_Param_type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASubscriber::execAddTopics)
	{
		P_GET_TARRAY(FString,Z_Param_topics);
		P_GET_TARRAY(EDataType,Z_Param_types);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddTopics(Z_Param_topics,Z_Param_types);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASubscriber::execAddTopic)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_topic);
		P_GET_ENUM(EDataType,Z_Param_type);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddTopic(Z_Param_topic,EDataType(Z_Param_type));
		P_NATIVE_END;
	}
	static FName NAME_ASubscriber_FloatValueUpdateEvent = FName(TEXT("FloatValueUpdateEvent"));
	void ASubscriber::FloatValueUpdateEvent(const FString& name, float value)
	{
		Subscriber_eventFloatValueUpdateEvent_Parms Parms;
		Parms.name=name;
		Parms.value=value;
		ProcessEvent(FindFunctionChecked(NAME_ASubscriber_FloatValueUpdateEvent),&Parms);
	}
	static FName NAME_ASubscriber_FStringValueUpdateEvent = FName(TEXT("FStringValueUpdateEvent"));
	void ASubscriber::FStringValueUpdateEvent(const FString& name, const FString& value)
	{
		Subscriber_eventFStringValueUpdateEvent_Parms Parms;
		Parms.name=name;
		Parms.value=value;
		ProcessEvent(FindFunctionChecked(NAME_ASubscriber_FStringValueUpdateEvent),&Parms);
	}
	static FName NAME_ASubscriber_IntValueUpdateEvent = FName(TEXT("IntValueUpdateEvent"));
	void ASubscriber::IntValueUpdateEvent(const FString& name, int32 value)
	{
		Subscriber_eventIntValueUpdateEvent_Parms Parms;
		Parms.name=name;
		Parms.value=value;
		ProcessEvent(FindFunctionChecked(NAME_ASubscriber_IntValueUpdateEvent),&Parms);
	}
	void ASubscriber::StaticRegisterNativesASubscriber()
	{
		UClass* Class = ASubscriber::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddTopic", &ASubscriber::execAddTopic },
			{ "AddTopics", &ASubscriber::execAddTopics },
			{ "AddTopicWithFile", &ASubscriber::execAddTopicWithFile },
			{ "RemoveAllTopic", &ASubscriber::execRemoveAllTopic },
			{ "RemoveTopic", &ASubscriber::execRemoveTopic },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASubscriber_AddTopic_Statics
	{
		struct Subscriber_eventAddTopic_Parms
		{
			FString topic;
			EDataType type;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_topic;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASubscriber_AddTopic_Statics::NewProp_topic = { "topic", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Subscriber_eventAddTopic_Parms, topic), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASubscriber_AddTopic_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASubscriber_AddTopic_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Subscriber_eventAddTopic_Parms, type), Z_Construct_UEnum_Datasource_EDataType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASubscriber_AddTopic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASubscriber_AddTopic_Statics::NewProp_topic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASubscriber_AddTopic_Statics::NewProp_type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASubscriber_AddTopic_Statics::NewProp_type,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASubscriber_AddTopic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Subscriber" },
		{ "ModuleRelativePath", "Public/Subscriber.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASubscriber_AddTopic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASubscriber, nullptr, "AddTopic", nullptr, nullptr, sizeof(Subscriber_eventAddTopic_Parms), Z_Construct_UFunction_ASubscriber_AddTopic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASubscriber_AddTopic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASubscriber_AddTopic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASubscriber_AddTopic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASubscriber_AddTopic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASubscriber_AddTopic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASubscriber_AddTopics_Statics
	{
		struct Subscriber_eventAddTopics_Parms
		{
			TArray<FString> topics;
			TArray<EDataType> types;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_topics_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_topics;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_types_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_types_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_types;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASubscriber_AddTopics_Statics::NewProp_topics_Inner = { "topics", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASubscriber_AddTopics_Statics::NewProp_topics = { "topics", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Subscriber_eventAddTopics_Parms, topics), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASubscriber_AddTopics_Statics::NewProp_types_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASubscriber_AddTopics_Statics::NewProp_types_Inner = { "types", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Datasource_EDataType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASubscriber_AddTopics_Statics::NewProp_types = { "types", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Subscriber_eventAddTopics_Parms, types), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASubscriber_AddTopics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASubscriber_AddTopics_Statics::NewProp_topics_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASubscriber_AddTopics_Statics::NewProp_topics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASubscriber_AddTopics_Statics::NewProp_types_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASubscriber_AddTopics_Statics::NewProp_types_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASubscriber_AddTopics_Statics::NewProp_types,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASubscriber_AddTopics_Statics::Function_MetaDataParams[] = {
		{ "Category", "Subscriber" },
		{ "ModuleRelativePath", "Public/Subscriber.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASubscriber_AddTopics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASubscriber, nullptr, "AddTopics", nullptr, nullptr, sizeof(Subscriber_eventAddTopics_Parms), Z_Construct_UFunction_ASubscriber_AddTopics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASubscriber_AddTopics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASubscriber_AddTopics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASubscriber_AddTopics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASubscriber_AddTopics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASubscriber_AddTopics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASubscriber_AddTopicWithFile_Statics
	{
		struct Subscriber_eventAddTopicWithFile_Parms
		{
			FString filePath;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_filePath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASubscriber_AddTopicWithFile_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Subscriber_eventAddTopicWithFile_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASubscriber_AddTopicWithFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Subscriber_eventAddTopicWithFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASubscriber_AddTopicWithFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Subscriber_eventAddTopicWithFile_Parms), &Z_Construct_UFunction_ASubscriber_AddTopicWithFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASubscriber_AddTopicWithFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASubscriber_AddTopicWithFile_Statics::NewProp_filePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASubscriber_AddTopicWithFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASubscriber_AddTopicWithFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "File" },
		{ "DisplayName", "AddTopicWithFile" },
		{ "ModuleRelativePath", "Public/Subscriber.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASubscriber_AddTopicWithFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASubscriber, nullptr, "AddTopicWithFile", nullptr, nullptr, sizeof(Subscriber_eventAddTopicWithFile_Parms), Z_Construct_UFunction_ASubscriber_AddTopicWithFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASubscriber_AddTopicWithFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASubscriber_AddTopicWithFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASubscriber_AddTopicWithFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASubscriber_AddTopicWithFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASubscriber_AddTopicWithFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASubscriber_FloatValueUpdateEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASubscriber_FloatValueUpdateEvent_Statics::NewProp_name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASubscriber_FloatValueUpdateEvent_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Subscriber_eventFloatValueUpdateEvent_Parms, name), METADATA_PARAMS(Z_Construct_UFunction_ASubscriber_FloatValueUpdateEvent_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASubscriber_FloatValueUpdateEvent_Statics::NewProp_name_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASubscriber_FloatValueUpdateEvent_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Subscriber_eventFloatValueUpdateEvent_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASubscriber_FloatValueUpdateEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASubscriber_FloatValueUpdateEvent_Statics::NewProp_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASubscriber_FloatValueUpdateEvent_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASubscriber_FloatValueUpdateEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Subscriber" },
		{ "DisplayName", "FloatValueUpdateEvent" },
		{ "Keywords", "Subscriber On Float Value Update" },
		{ "ModuleRelativePath", "Public/Subscriber.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASubscriber_FloatValueUpdateEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASubscriber, nullptr, "FloatValueUpdateEvent", nullptr, nullptr, sizeof(Subscriber_eventFloatValueUpdateEvent_Parms), Z_Construct_UFunction_ASubscriber_FloatValueUpdateEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASubscriber_FloatValueUpdateEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASubscriber_FloatValueUpdateEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASubscriber_FloatValueUpdateEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASubscriber_FloatValueUpdateEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASubscriber_FloatValueUpdateEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASubscriber_FStringValueUpdateEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASubscriber_FStringValueUpdateEvent_Statics::NewProp_name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASubscriber_FStringValueUpdateEvent_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Subscriber_eventFStringValueUpdateEvent_Parms, name), METADATA_PARAMS(Z_Construct_UFunction_ASubscriber_FStringValueUpdateEvent_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASubscriber_FStringValueUpdateEvent_Statics::NewProp_name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASubscriber_FStringValueUpdateEvent_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASubscriber_FStringValueUpdateEvent_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Subscriber_eventFStringValueUpdateEvent_Parms, value), METADATA_PARAMS(Z_Construct_UFunction_ASubscriber_FStringValueUpdateEvent_Statics::NewProp_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASubscriber_FStringValueUpdateEvent_Statics::NewProp_value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASubscriber_FStringValueUpdateEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASubscriber_FStringValueUpdateEvent_Statics::NewProp_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASubscriber_FStringValueUpdateEvent_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASubscriber_FStringValueUpdateEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Subscriber" },
		{ "DisplayName", "FStringValueUpdateEvent" },
		{ "Keywords", "Subscriber On FString Value Update" },
		{ "ModuleRelativePath", "Public/Subscriber.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASubscriber_FStringValueUpdateEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASubscriber, nullptr, "FStringValueUpdateEvent", nullptr, nullptr, sizeof(Subscriber_eventFStringValueUpdateEvent_Parms), Z_Construct_UFunction_ASubscriber_FStringValueUpdateEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASubscriber_FStringValueUpdateEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASubscriber_FStringValueUpdateEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASubscriber_FStringValueUpdateEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASubscriber_FStringValueUpdateEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASubscriber_FStringValueUpdateEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASubscriber_IntValueUpdateEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASubscriber_IntValueUpdateEvent_Statics::NewProp_name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASubscriber_IntValueUpdateEvent_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Subscriber_eventIntValueUpdateEvent_Parms, name), METADATA_PARAMS(Z_Construct_UFunction_ASubscriber_IntValueUpdateEvent_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASubscriber_IntValueUpdateEvent_Statics::NewProp_name_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASubscriber_IntValueUpdateEvent_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Subscriber_eventIntValueUpdateEvent_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASubscriber_IntValueUpdateEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASubscriber_IntValueUpdateEvent_Statics::NewProp_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASubscriber_IntValueUpdateEvent_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASubscriber_IntValueUpdateEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Subscriber" },
		{ "DisplayName", "IntValueUpdateEvent" },
		{ "Keywords", "Subscriber On Int Value Update" },
		{ "ModuleRelativePath", "Public/Subscriber.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASubscriber_IntValueUpdateEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASubscriber, nullptr, "IntValueUpdateEvent", nullptr, nullptr, sizeof(Subscriber_eventIntValueUpdateEvent_Parms), Z_Construct_UFunction_ASubscriber_IntValueUpdateEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASubscriber_IntValueUpdateEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASubscriber_IntValueUpdateEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASubscriber_IntValueUpdateEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASubscriber_IntValueUpdateEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASubscriber_IntValueUpdateEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASubscriber_RemoveAllTopic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASubscriber_RemoveAllTopic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Subscriber" },
		{ "ModuleRelativePath", "Public/Subscriber.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASubscriber_RemoveAllTopic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASubscriber, nullptr, "RemoveAllTopic", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASubscriber_RemoveAllTopic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASubscriber_RemoveAllTopic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASubscriber_RemoveAllTopic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASubscriber_RemoveAllTopic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASubscriber_RemoveTopic_Statics
	{
		struct Subscriber_eventRemoveTopic_Parms
		{
			FString topic;
			EDataType type;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_topic;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASubscriber_RemoveTopic_Statics::NewProp_topic = { "topic", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Subscriber_eventRemoveTopic_Parms, topic), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASubscriber_RemoveTopic_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASubscriber_RemoveTopic_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Subscriber_eventRemoveTopic_Parms, type), Z_Construct_UEnum_Datasource_EDataType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASubscriber_RemoveTopic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASubscriber_RemoveTopic_Statics::NewProp_topic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASubscriber_RemoveTopic_Statics::NewProp_type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASubscriber_RemoveTopic_Statics::NewProp_type,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASubscriber_RemoveTopic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Subscriber" },
		{ "ModuleRelativePath", "Public/Subscriber.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASubscriber_RemoveTopic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASubscriber, nullptr, "RemoveTopic", nullptr, nullptr, sizeof(Subscriber_eventRemoveTopic_Parms), Z_Construct_UFunction_ASubscriber_RemoveTopic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASubscriber_RemoveTopic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASubscriber_RemoveTopic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASubscriber_RemoveTopic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASubscriber_RemoveTopic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASubscriber_RemoveTopic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASubscriber_NoRegister()
	{
		return ASubscriber::StaticClass();
	}
	struct Z_Construct_UClass_ASubscriber_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASubscriber_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Datasource,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASubscriber_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASubscriber_AddTopic, "AddTopic" }, // 11583514
		{ &Z_Construct_UFunction_ASubscriber_AddTopics, "AddTopics" }, // 1733168596
		{ &Z_Construct_UFunction_ASubscriber_AddTopicWithFile, "AddTopicWithFile" }, // 2266030215
		{ &Z_Construct_UFunction_ASubscriber_FloatValueUpdateEvent, "FloatValueUpdateEvent" }, // 3854642619
		{ &Z_Construct_UFunction_ASubscriber_FStringValueUpdateEvent, "FStringValueUpdateEvent" }, // 3333350947
		{ &Z_Construct_UFunction_ASubscriber_IntValueUpdateEvent, "IntValueUpdateEvent" }, // 403853864
		{ &Z_Construct_UFunction_ASubscriber_RemoveAllTopic, "RemoveAllTopic" }, // 3538129516
		{ &Z_Construct_UFunction_ASubscriber_RemoveTopic, "RemoveTopic" }, // 3508144993
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASubscriber_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Subscriber.h" },
		{ "ModuleRelativePath", "Public/Subscriber.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASubscriber_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASubscriber>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASubscriber_Statics::ClassParams = {
		&ASubscriber::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASubscriber_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASubscriber_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASubscriber()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASubscriber_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASubscriber, 2288012131);
	template<> DATASOURCE_API UClass* StaticClass<ASubscriber>()
	{
		return ASubscriber::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASubscriber(Z_Construct_UClass_ASubscriber, &ASubscriber::StaticClass, TEXT("/Script/Datasource"), TEXT("ASubscriber"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASubscriber);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
