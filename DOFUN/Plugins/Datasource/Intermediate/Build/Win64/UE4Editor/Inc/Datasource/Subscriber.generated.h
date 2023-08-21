// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDataType : uint8;
#ifdef DATASOURCE_Subscriber_generated_h
#error "Subscriber.generated.h already included, missing '#pragma once' in Subscriber.h"
#endif
#define DATASOURCE_Subscriber_generated_h

#define Doufeng_Plugins_Datasource_Source_Datasource_Public_Subscriber_h_23_SPARSE_DATA
#define Doufeng_Plugins_Datasource_Source_Datasource_Public_Subscriber_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddTopicWithFile); \
	DECLARE_FUNCTION(execRemoveAllTopic); \
	DECLARE_FUNCTION(execRemoveTopic); \
	DECLARE_FUNCTION(execAddTopics); \
	DECLARE_FUNCTION(execAddTopic);


#define Doufeng_Plugins_Datasource_Source_Datasource_Public_Subscriber_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddTopicWithFile); \
	DECLARE_FUNCTION(execRemoveAllTopic); \
	DECLARE_FUNCTION(execRemoveTopic); \
	DECLARE_FUNCTION(execAddTopics); \
	DECLARE_FUNCTION(execAddTopic);


#define Doufeng_Plugins_Datasource_Source_Datasource_Public_Subscriber_h_23_EVENT_PARMS \
	struct Subscriber_eventFloatValueUpdateEvent_Parms \
	{ \
		FString name; \
		float value; \
	}; \
	struct Subscriber_eventFStringValueUpdateEvent_Parms \
	{ \
		FString name; \
		FString value; \
	}; \
	struct Subscriber_eventIntValueUpdateEvent_Parms \
	{ \
		FString name; \
		int32 value; \
	};


#define Doufeng_Plugins_Datasource_Source_Datasource_Public_Subscriber_h_23_CALLBACK_WRAPPERS
#define Doufeng_Plugins_Datasource_Source_Datasource_Public_Subscriber_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASubscriber(); \
	friend struct Z_Construct_UClass_ASubscriber_Statics; \
public: \
	DECLARE_CLASS(ASubscriber, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Datasource"), NO_API) \
	DECLARE_SERIALIZER(ASubscriber)


#define Doufeng_Plugins_Datasource_Source_Datasource_Public_Subscriber_h_23_INCLASS \
private: \
	static void StaticRegisterNativesASubscriber(); \
	friend struct Z_Construct_UClass_ASubscriber_Statics; \
public: \
	DECLARE_CLASS(ASubscriber, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Datasource"), NO_API) \
	DECLARE_SERIALIZER(ASubscriber)


#define Doufeng_Plugins_Datasource_Source_Datasource_Public_Subscriber_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASubscriber(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASubscriber) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASubscriber); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASubscriber); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASubscriber(ASubscriber&&); \
	NO_API ASubscriber(const ASubscriber&); \
public:


#define Doufeng_Plugins_Datasource_Source_Datasource_Public_Subscriber_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASubscriber(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASubscriber(ASubscriber&&); \
	NO_API ASubscriber(const ASubscriber&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASubscriber); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASubscriber); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASubscriber)


#define Doufeng_Plugins_Datasource_Source_Datasource_Public_Subscriber_h_23_PRIVATE_PROPERTY_OFFSET
#define Doufeng_Plugins_Datasource_Source_Datasource_Public_Subscriber_h_21_PROLOG \
	Doufeng_Plugins_Datasource_Source_Datasource_Public_Subscriber_h_23_EVENT_PARMS


#define Doufeng_Plugins_Datasource_Source_Datasource_Public_Subscriber_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Doufeng_Plugins_Datasource_Source_Datasource_Public_Subscriber_h_23_PRIVATE_PROPERTY_OFFSET \
	Doufeng_Plugins_Datasource_Source_Datasource_Public_Subscriber_h_23_SPARSE_DATA \
	Doufeng_Plugins_Datasource_Source_Datasource_Public_Subscriber_h_23_RPC_WRAPPERS \
	Doufeng_Plugins_Datasource_Source_Datasource_Public_Subscriber_h_23_CALLBACK_WRAPPERS \
	Doufeng_Plugins_Datasource_Source_Datasource_Public_Subscriber_h_23_INCLASS \
	Doufeng_Plugins_Datasource_Source_Datasource_Public_Subscriber_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Doufeng_Plugins_Datasource_Source_Datasource_Public_Subscriber_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Doufeng_Plugins_Datasource_Source_Datasource_Public_Subscriber_h_23_PRIVATE_PROPERTY_OFFSET \
	Doufeng_Plugins_Datasource_Source_Datasource_Public_Subscriber_h_23_SPARSE_DATA \
	Doufeng_Plugins_Datasource_Source_Datasource_Public_Subscriber_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Doufeng_Plugins_Datasource_Source_Datasource_Public_Subscriber_h_23_CALLBACK_WRAPPERS \
	Doufeng_Plugins_Datasource_Source_Datasource_Public_Subscriber_h_23_INCLASS_NO_PURE_DECLS \
	Doufeng_Plugins_Datasource_Source_Datasource_Public_Subscriber_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATASOURCE_API UClass* StaticClass<class ASubscriber>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Doufeng_Plugins_Datasource_Source_Datasource_Public_Subscriber_h


#define FOREACH_ENUM_EDATATYPE(op) \
	op(EDataType::DataType_Int) \
	op(EDataType::DataType_Float) \
	op(EDataType::DataType_String) 

enum class EDataType : uint8;
template<> DATASOURCE_API UEnum* StaticEnum<EDataType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
