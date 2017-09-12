// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYALLTESTPROJECT_MyAllTestProjectCharacter_generated_h
#error "MyAllTestProjectCharacter.generated.h already included, missing '#pragma once' in MyAllTestProjectCharacter.h"
#endif
#define MYALLTESTPROJECT_MyAllTestProjectCharacter_generated_h

#define MyAllTestProject_Source_MyAllTestProject_MyAllTestProjectCharacter_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnmyResetVR) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnmyResetVR(); \
		P_NATIVE_END; \
	}


#define MyAllTestProject_Source_MyAllTestProject_MyAllTestProjectCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnmyResetVR) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnmyResetVR(); \
		P_NATIVE_END; \
	}


#define MyAllTestProject_Source_MyAllTestProject_MyAllTestProjectCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyAllTestProjectCharacter(); \
	friend MYALLTESTPROJECT_API class UClass* Z_Construct_UClass_AMyAllTestProjectCharacter(); \
public: \
	DECLARE_CLASS(AMyAllTestProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MyAllTestProject"), NO_API) \
	DECLARE_SERIALIZER(AMyAllTestProjectCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MyAllTestProject_Source_MyAllTestProject_MyAllTestProjectCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMyAllTestProjectCharacter(); \
	friend MYALLTESTPROJECT_API class UClass* Z_Construct_UClass_AMyAllTestProjectCharacter(); \
public: \
	DECLARE_CLASS(AMyAllTestProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MyAllTestProject"), NO_API) \
	DECLARE_SERIALIZER(AMyAllTestProjectCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MyAllTestProject_Source_MyAllTestProject_MyAllTestProjectCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyAllTestProjectCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyAllTestProjectCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyAllTestProjectCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyAllTestProjectCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyAllTestProjectCharacter(AMyAllTestProjectCharacter&&); \
	NO_API AMyAllTestProjectCharacter(const AMyAllTestProjectCharacter&); \
public:


#define MyAllTestProject_Source_MyAllTestProject_MyAllTestProjectCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyAllTestProjectCharacter(AMyAllTestProjectCharacter&&); \
	NO_API AMyAllTestProjectCharacter(const AMyAllTestProjectCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyAllTestProjectCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyAllTestProjectCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyAllTestProjectCharacter)


#define MyAllTestProject_Source_MyAllTestProject_MyAllTestProjectCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AMyAllTestProjectCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AMyAllTestProjectCharacter, FollowCamera); }


#define MyAllTestProject_Source_MyAllTestProject_MyAllTestProjectCharacter_h_9_PROLOG
#define MyAllTestProject_Source_MyAllTestProject_MyAllTestProjectCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyAllTestProject_Source_MyAllTestProject_MyAllTestProjectCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	MyAllTestProject_Source_MyAllTestProject_MyAllTestProjectCharacter_h_12_RPC_WRAPPERS \
	MyAllTestProject_Source_MyAllTestProject_MyAllTestProjectCharacter_h_12_INCLASS \
	MyAllTestProject_Source_MyAllTestProject_MyAllTestProjectCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyAllTestProject_Source_MyAllTestProject_MyAllTestProjectCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyAllTestProject_Source_MyAllTestProject_MyAllTestProjectCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	MyAllTestProject_Source_MyAllTestProject_MyAllTestProjectCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MyAllTestProject_Source_MyAllTestProject_MyAllTestProjectCharacter_h_12_INCLASS_NO_PURE_DECLS \
	MyAllTestProject_Source_MyAllTestProject_MyAllTestProjectCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyAllTestProject_Source_MyAllTestProject_MyAllTestProjectCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
