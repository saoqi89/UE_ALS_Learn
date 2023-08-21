// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASubscriber;
class UDatasourceImpl;
#ifdef DATASOURCE_datasource_generated_h
#error "datasource.generated.h already included, missing '#pragma once' in datasource.h"
#endif
#define DATASOURCE_datasource_generated_h

#define Doufeng_Plugins_Datasource_Source_Datasource_Public_datasource_h_33_SPARSE_DATA
#define Doufeng_Plugins_Datasource_Source_Datasource_Public_datasource_h_33_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetStringValue); \
	DECLARE_FUNCTION(execSetFloatValue); \
	DECLARE_FUNCTION(execSetIntValue); \
	DECLARE_FUNCTION(execNotifyPlatformString); \
	DECLARE_FUNCTION(execNotifyPlatformFloat); \
	DECLARE_FUNCTION(execNotifyPlatformInt); \
	DECLARE_FUNCTION(execRegisterSubscriber); \
	DECLARE_FUNCTION(execStopDatasource); \
	DECLARE_FUNCTION(execCreateAndStartDatasource);


#define Doufeng_Plugins_Datasource_Source_Datasource_Public_datasource_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetStringValue); \
	DECLARE_FUNCTION(execSetFloatValue); \
	DECLARE_FUNCTION(execSetIntValue); \
	DECLARE_FUNCTION(execNotifyPlatformString); \
	DECLARE_FUNCTION(execNotifyPlatformFloat); \
	DECLARE_FUNCTION(execNotifyPlatformInt); \
	DECLARE_FUNCTION(execRegisterSubscriber); \
	DECLARE_FUNCTION(execStopDatasource); \
	DECLARE_FUNCTION(execCreateAndStartDatasource);


#define Doufeng_Plugins_Datasource_Source_Datasource_Public_datasource_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatasource(); \
	friend struct Z_Construct_UClass_UDatasource_Statics; \
public: \
	DECLARE_CLASS(UDatasource, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Datasource"), DATASOURCE_API) \
	DECLARE_SERIALIZER(UDatasource)


#define Doufeng_Plugins_Datasource_Source_Datasource_Public_datasource_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUDatasource(); \
	friend struct Z_Construct_UClass_UDatasource_Statics; \
public: \
	DECLARE_CLASS(UDatasource, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Datasource"), DATASOURCE_API) \
	DECLARE_SERIALIZER(UDatasource)


#define Doufeng_Plugins_Datasource_Source_Datasource_Public_datasource_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATASOURCE_API UDatasource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasource) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATASOURCE_API, UDatasource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasource); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	DATASOURCE_API UDatasource(UDatasource&&); \
	DATASOURCE_API UDatasource(const UDatasource&); \
public:


#define Doufeng_Plugins_Datasource_Source_Datasource_Public_datasource_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATASOURCE_API UDatasource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	DATASOURCE_API UDatasource(UDatasource&&); \
	DATASOURCE_API UDatasource(const UDatasource&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATASOURCE_API, UDatasource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasource); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasource)


#define Doufeng_Plugins_Datasource_Source_Datasource_Public_datasource_h_33_PRIVATE_PROPERTY_OFFSET
#define Doufeng_Plugins_Datasource_Source_Datasource_Public_datasource_h_30_PROLOG
#define Doufeng_Plugins_Datasource_Source_Datasource_Public_datasource_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Doufeng_Plugins_Datasource_Source_Datasource_Public_datasource_h_33_PRIVATE_PROPERTY_OFFSET \
	Doufeng_Plugins_Datasource_Source_Datasource_Public_datasource_h_33_SPARSE_DATA \
	Doufeng_Plugins_Datasource_Source_Datasource_Public_datasource_h_33_RPC_WRAPPERS \
	Doufeng_Plugins_Datasource_Source_Datasource_Public_datasource_h_33_INCLASS \
	Doufeng_Plugins_Datasource_Source_Datasource_Public_datasource_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Doufeng_Plugins_Datasource_Source_Datasource_Public_datasource_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Doufeng_Plugins_Datasource_Source_Datasource_Public_datasource_h_33_PRIVATE_PROPERTY_OFFSET \
	Doufeng_Plugins_Datasource_Source_Datasource_Public_datasource_h_33_SPARSE_DATA \
	Doufeng_Plugins_Datasource_Source_Datasource_Public_datasource_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	Doufeng_Plugins_Datasource_Source_Datasource_Public_datasource_h_33_INCLASS_NO_PURE_DECLS \
	Doufeng_Plugins_Datasource_Source_Datasource_Public_datasource_h_33_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Datasource."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATASOURCE_API UClass* StaticClass<class UDatasource>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Doufeng_Plugins_Datasource_Source_Datasource_Public_datasource_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
