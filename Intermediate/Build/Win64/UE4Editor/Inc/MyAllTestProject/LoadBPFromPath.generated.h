// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef MYALLTESTPROJECT_LoadBPFromPath_generated_h
#error "LoadBPFromPath.generated.h already included, missing '#pragma once' in LoadBPFromPath.h"
#endif
#define MYALLTESTPROJECT_LoadBPFromPath_generated_h

#define MyAllTestProject_Source_MyAllTestProject_LoadBPFromPath_LoadBPFromPath_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoadClassFromPath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_path); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UClass**)Z_Param__Result=this->LoadClassFromPath(Z_Param_path); \
		P_NATIVE_END; \
	}


#define MyAllTestProject_Source_MyAllTestProject_LoadBPFromPath_LoadBPFromPath_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadClassFromPath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_path); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UClass**)Z_Param__Result=this->LoadClassFromPath(Z_Param_path); \
		P_NATIVE_END; \
	}


#define MyAllTestProject_Source_MyAllTestProject_LoadBPFromPath_LoadBPFromPath_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALoadBPFromPath(); \
	friend MYALLTESTPROJECT_API class UClass* Z_Construct_UClass_ALoadBPFromPath(); \
public: \
	DECLARE_CLASS(ALoadBPFromPath, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MyAllTestProject"), NO_API) \
	DECLARE_SERIALIZER(ALoadBPFromPath) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MyAllTestProject_Source_MyAllTestProject_LoadBPFromPath_LoadBPFromPath_h_19_INCLASS \
private: \
	static void StaticRegisterNativesALoadBPFromPath(); \
	friend MYALLTESTPROJECT_API class UClass* Z_Construct_UClass_ALoadBPFromPath(); \
public: \
	DECLARE_CLASS(ALoadBPFromPath, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MyAllTestProject"), NO_API) \
	DECLARE_SERIALIZER(ALoadBPFromPath) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MyAllTestProject_Source_MyAllTestProject_LoadBPFromPath_LoadBPFromPath_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALoadBPFromPath(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALoadBPFromPath) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALoadBPFromPath); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALoadBPFromPath); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALoadBPFromPath(ALoadBPFromPath&&); \
	NO_API ALoadBPFromPath(const ALoadBPFromPath&); \
public:


#define MyAllTestProject_Source_MyAllTestProject_LoadBPFromPath_LoadBPFromPath_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALoadBPFromPath(ALoadBPFromPath&&); \
	NO_API ALoadBPFromPath(const ALoadBPFromPath&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALoadBPFromPath); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALoadBPFromPath); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALoadBPFromPath)


#define MyAllTestProject_Source_MyAllTestProject_LoadBPFromPath_LoadBPFromPath_h_19_PRIVATE_PROPERTY_OFFSET
#define MyAllTestProject_Source_MyAllTestProject_LoadBPFromPath_LoadBPFromPath_h_16_PROLOG
#define MyAllTestProject_Source_MyAllTestProject_LoadBPFromPath_LoadBPFromPath_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyAllTestProject_Source_MyAllTestProject_LoadBPFromPath_LoadBPFromPath_h_19_PRIVATE_PROPERTY_OFFSET \
	MyAllTestProject_Source_MyAllTestProject_LoadBPFromPath_LoadBPFromPath_h_19_RPC_WRAPPERS \
	MyAllTestProject_Source_MyAllTestProject_LoadBPFromPath_LoadBPFromPath_h_19_INCLASS \
	MyAllTestProject_Source_MyAllTestProject_LoadBPFromPath_LoadBPFromPath_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyAllTestProject_Source_MyAllTestProject_LoadBPFromPath_LoadBPFromPath_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyAllTestProject_Source_MyAllTestProject_LoadBPFromPath_LoadBPFromPath_h_19_PRIVATE_PROPERTY_OFFSET \
	MyAllTestProject_Source_MyAllTestProject_LoadBPFromPath_LoadBPFromPath_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	MyAllTestProject_Source_MyAllTestProject_LoadBPFromPath_LoadBPFromPath_h_19_INCLASS_NO_PURE_DECLS \
	MyAllTestProject_Source_MyAllTestProject_LoadBPFromPath_LoadBPFromPath_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyAllTestProject_Source_MyAllTestProject_LoadBPFromPath_LoadBPFromPath_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
