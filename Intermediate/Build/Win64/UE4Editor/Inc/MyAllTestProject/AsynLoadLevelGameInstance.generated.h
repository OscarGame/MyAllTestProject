// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAsynLoadManger;
#ifdef MYALLTESTPROJECT_AsynLoadLevelGameInstance_generated_h
#error "AsynLoadLevelGameInstance.generated.h already included, missing '#pragma once' in AsynLoadLevelGameInstance.h"
#endif
#define MYALLTESTPROJECT_AsynLoadLevelGameInstance_generated_h

#define MyAllTestProject_Source_MyAllTestProject_AsynLoadLevelGameInstance_h_13_DELEGATE \
struct _Script_MyAllTestProject_eventLevelStreamingLoadedCallBack_Parms \
{ \
	FString Result; \
}; \
static inline void FLevelStreamingLoadedCallBack_DelegateWrapper(const FMulticastScriptDelegate& LevelStreamingLoadedCallBack, const FString& Result) \
{ \
	_Script_MyAllTestProject_eventLevelStreamingLoadedCallBack_Parms Parms; \
	Parms.Result=Result; \
	LevelStreamingLoadedCallBack.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyAllTestProject_Source_MyAllTestProject_AsynLoadLevelGameInstance_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAsynLoadManger) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAsynLoadManger**)Z_Param__Result=this->GetAsynLoadManger(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDesLevelName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=this->GetDesLevelName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDesLevelName) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_Name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetDesLevelName(Z_Param_Out_Name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDynamicAsynLoadLevelFinished) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DynamicAsynLoadLevelFinished(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDynamicAsynLoadLevel) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_LevelFullName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DynamicAsynLoadLevel(Z_Param_LevelFullName); \
		P_NATIVE_END; \
	}


#define MyAllTestProject_Source_MyAllTestProject_AsynLoadLevelGameInstance_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAsynLoadManger) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAsynLoadManger**)Z_Param__Result=this->GetAsynLoadManger(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDesLevelName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=this->GetDesLevelName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDesLevelName) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_Name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetDesLevelName(Z_Param_Out_Name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDynamicAsynLoadLevelFinished) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DynamicAsynLoadLevelFinished(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDynamicAsynLoadLevel) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_LevelFullName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DynamicAsynLoadLevel(Z_Param_LevelFullName); \
		P_NATIVE_END; \
	}


#define MyAllTestProject_Source_MyAllTestProject_AsynLoadLevelGameInstance_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsynLoadLevelGameInstance(); \
	friend MYALLTESTPROJECT_API class UClass* Z_Construct_UClass_UAsynLoadLevelGameInstance(); \
public: \
	DECLARE_CLASS(UAsynLoadLevelGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/MyAllTestProject"), NO_API) \
	DECLARE_SERIALIZER(UAsynLoadLevelGameInstance) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MyAllTestProject_Source_MyAllTestProject_AsynLoadLevelGameInstance_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUAsynLoadLevelGameInstance(); \
	friend MYALLTESTPROJECT_API class UClass* Z_Construct_UClass_UAsynLoadLevelGameInstance(); \
public: \
	DECLARE_CLASS(UAsynLoadLevelGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/MyAllTestProject"), NO_API) \
	DECLARE_SERIALIZER(UAsynLoadLevelGameInstance) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MyAllTestProject_Source_MyAllTestProject_AsynLoadLevelGameInstance_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsynLoadLevelGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsynLoadLevelGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsynLoadLevelGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsynLoadLevelGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsynLoadLevelGameInstance(UAsynLoadLevelGameInstance&&); \
	NO_API UAsynLoadLevelGameInstance(const UAsynLoadLevelGameInstance&); \
public:


#define MyAllTestProject_Source_MyAllTestProject_AsynLoadLevelGameInstance_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsynLoadLevelGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsynLoadLevelGameInstance(UAsynLoadLevelGameInstance&&); \
	NO_API UAsynLoadLevelGameInstance(const UAsynLoadLevelGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsynLoadLevelGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsynLoadLevelGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsynLoadLevelGameInstance)


#define MyAllTestProject_Source_MyAllTestProject_AsynLoadLevelGameInstance_h_21_PRIVATE_PROPERTY_OFFSET
#define MyAllTestProject_Source_MyAllTestProject_AsynLoadLevelGameInstance_h_18_PROLOG
#define MyAllTestProject_Source_MyAllTestProject_AsynLoadLevelGameInstance_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyAllTestProject_Source_MyAllTestProject_AsynLoadLevelGameInstance_h_21_PRIVATE_PROPERTY_OFFSET \
	MyAllTestProject_Source_MyAllTestProject_AsynLoadLevelGameInstance_h_21_RPC_WRAPPERS \
	MyAllTestProject_Source_MyAllTestProject_AsynLoadLevelGameInstance_h_21_INCLASS \
	MyAllTestProject_Source_MyAllTestProject_AsynLoadLevelGameInstance_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyAllTestProject_Source_MyAllTestProject_AsynLoadLevelGameInstance_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyAllTestProject_Source_MyAllTestProject_AsynLoadLevelGameInstance_h_21_PRIVATE_PROPERTY_OFFSET \
	MyAllTestProject_Source_MyAllTestProject_AsynLoadLevelGameInstance_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	MyAllTestProject_Source_MyAllTestProject_AsynLoadLevelGameInstance_h_21_INCLASS_NO_PURE_DECLS \
	MyAllTestProject_Source_MyAllTestProject_AsynLoadLevelGameInstance_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyAllTestProject_Source_MyAllTestProject_AsynLoadLevelGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
