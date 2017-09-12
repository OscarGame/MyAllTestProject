// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef MYALLTESTPROJECT_AsynLoadManger_generated_h
#error "AsynLoadManger.generated.h already included, missing '#pragma once' in AsynLoadManger.h"
#endif
#define MYALLTESTPROJECT_AsynLoadManger_generated_h

#define MyAllTestProject_Source_MyAllTestProject_AsynLoad_AsynLoadManger_h_13_DELEGATE \
static inline void FAsynLoadDelegate_DelegateWrapper(const FMulticastScriptDelegate& AsynLoadDelegate) \
{ \
	AsynLoadDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define MyAllTestProject_Source_MyAllTestProject_AsynLoad_AsynLoadManger_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddLoadRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ItemsToStream); \
		P_GET_OBJECT(UObject,Z_Param_InObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddLoadRequest(Z_Param_ItemsToStream,Z_Param_InObject); \
		P_NATIVE_END; \
	}


#define MyAllTestProject_Source_MyAllTestProject_AsynLoad_AsynLoadManger_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddLoadRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ItemsToStream); \
		P_GET_OBJECT(UObject,Z_Param_InObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddLoadRequest(Z_Param_ItemsToStream,Z_Param_InObject); \
		P_NATIVE_END; \
	}


#define MyAllTestProject_Source_MyAllTestProject_AsynLoad_AsynLoadManger_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsynLoadManger(); \
	friend MYALLTESTPROJECT_API class UClass* Z_Construct_UClass_UAsynLoadManger(); \
public: \
	DECLARE_CLASS(UAsynLoadManger, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MyAllTestProject"), NO_API) \
	DECLARE_SERIALIZER(UAsynLoadManger) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MyAllTestProject_Source_MyAllTestProject_AsynLoad_AsynLoadManger_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUAsynLoadManger(); \
	friend MYALLTESTPROJECT_API class UClass* Z_Construct_UClass_UAsynLoadManger(); \
public: \
	DECLARE_CLASS(UAsynLoadManger, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MyAllTestProject"), NO_API) \
	DECLARE_SERIALIZER(UAsynLoadManger) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MyAllTestProject_Source_MyAllTestProject_AsynLoad_AsynLoadManger_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsynLoadManger(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsynLoadManger) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsynLoadManger); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsynLoadManger); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsynLoadManger(UAsynLoadManger&&); \
	NO_API UAsynLoadManger(const UAsynLoadManger&); \
public:


#define MyAllTestProject_Source_MyAllTestProject_AsynLoad_AsynLoadManger_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsynLoadManger(UAsynLoadManger&&); \
	NO_API UAsynLoadManger(const UAsynLoadManger&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsynLoadManger); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsynLoadManger); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAsynLoadManger)


#define MyAllTestProject_Source_MyAllTestProject_AsynLoad_AsynLoadManger_h_32_PRIVATE_PROPERTY_OFFSET
#define MyAllTestProject_Source_MyAllTestProject_AsynLoad_AsynLoadManger_h_29_PROLOG
#define MyAllTestProject_Source_MyAllTestProject_AsynLoad_AsynLoadManger_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyAllTestProject_Source_MyAllTestProject_AsynLoad_AsynLoadManger_h_32_PRIVATE_PROPERTY_OFFSET \
	MyAllTestProject_Source_MyAllTestProject_AsynLoad_AsynLoadManger_h_32_RPC_WRAPPERS \
	MyAllTestProject_Source_MyAllTestProject_AsynLoad_AsynLoadManger_h_32_INCLASS \
	MyAllTestProject_Source_MyAllTestProject_AsynLoad_AsynLoadManger_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyAllTestProject_Source_MyAllTestProject_AsynLoad_AsynLoadManger_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyAllTestProject_Source_MyAllTestProject_AsynLoad_AsynLoadManger_h_32_PRIVATE_PROPERTY_OFFSET \
	MyAllTestProject_Source_MyAllTestProject_AsynLoad_AsynLoadManger_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	MyAllTestProject_Source_MyAllTestProject_AsynLoad_AsynLoadManger_h_32_INCLASS_NO_PURE_DECLS \
	MyAllTestProject_Source_MyAllTestProject_AsynLoad_AsynLoadManger_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyAllTestProject_Source_MyAllTestProject_AsynLoad_AsynLoadManger_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
