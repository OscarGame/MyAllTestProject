// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYALLTESTPROJECT_InterfaceAndAsynLoad_generated_h
#error "InterfaceAndAsynLoad.generated.h already included, missing '#pragma once' in InterfaceAndAsynLoad.h"
#endif
#define MYALLTESTPROJECT_InterfaceAndAsynLoad_generated_h

#define MyAllTestProject_Source_MyAllTestProject_AsynLoad_InterfaceAndAsynLoad_h_13_RPC_WRAPPERS \
	virtual void CountdownHasFinished_Implementation(); \
 \
	DECLARE_FUNCTION(execCountdownHasFinished) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CountdownHasFinished_Implementation(); \
		P_NATIVE_END; \
	}


#define MyAllTestProject_Source_MyAllTestProject_AsynLoad_InterfaceAndAsynLoad_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCountdownHasFinished) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CountdownHasFinished_Implementation(); \
		P_NATIVE_END; \
	}


#define MyAllTestProject_Source_MyAllTestProject_AsynLoad_InterfaceAndAsynLoad_h_13_EVENT_PARMS
#define MyAllTestProject_Source_MyAllTestProject_AsynLoad_InterfaceAndAsynLoad_h_13_CALLBACK_WRAPPERS
#define MyAllTestProject_Source_MyAllTestProject_AsynLoad_InterfaceAndAsynLoad_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInterfaceAndAsynLoad(); \
	friend MYALLTESTPROJECT_API class UClass* Z_Construct_UClass_AInterfaceAndAsynLoad(); \
public: \
	DECLARE_CLASS(AInterfaceAndAsynLoad, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MyAllTestProject"), NO_API) \
	DECLARE_SERIALIZER(AInterfaceAndAsynLoad) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AInterfaceAndAsynLoad*>(this); }


#define MyAllTestProject_Source_MyAllTestProject_AsynLoad_InterfaceAndAsynLoad_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAInterfaceAndAsynLoad(); \
	friend MYALLTESTPROJECT_API class UClass* Z_Construct_UClass_AInterfaceAndAsynLoad(); \
public: \
	DECLARE_CLASS(AInterfaceAndAsynLoad, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MyAllTestProject"), NO_API) \
	DECLARE_SERIALIZER(AInterfaceAndAsynLoad) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AInterfaceAndAsynLoad*>(this); }


#define MyAllTestProject_Source_MyAllTestProject_AsynLoad_InterfaceAndAsynLoad_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInterfaceAndAsynLoad(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInterfaceAndAsynLoad) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInterfaceAndAsynLoad); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInterfaceAndAsynLoad); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInterfaceAndAsynLoad(AInterfaceAndAsynLoad&&); \
	NO_API AInterfaceAndAsynLoad(const AInterfaceAndAsynLoad&); \
public:


#define MyAllTestProject_Source_MyAllTestProject_AsynLoad_InterfaceAndAsynLoad_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInterfaceAndAsynLoad(AInterfaceAndAsynLoad&&); \
	NO_API AInterfaceAndAsynLoad(const AInterfaceAndAsynLoad&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInterfaceAndAsynLoad); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInterfaceAndAsynLoad); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInterfaceAndAsynLoad)


#define MyAllTestProject_Source_MyAllTestProject_AsynLoad_InterfaceAndAsynLoad_h_13_PRIVATE_PROPERTY_OFFSET
#define MyAllTestProject_Source_MyAllTestProject_AsynLoad_InterfaceAndAsynLoad_h_10_PROLOG \
	MyAllTestProject_Source_MyAllTestProject_AsynLoad_InterfaceAndAsynLoad_h_13_EVENT_PARMS


#define MyAllTestProject_Source_MyAllTestProject_AsynLoad_InterfaceAndAsynLoad_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyAllTestProject_Source_MyAllTestProject_AsynLoad_InterfaceAndAsynLoad_h_13_PRIVATE_PROPERTY_OFFSET \
	MyAllTestProject_Source_MyAllTestProject_AsynLoad_InterfaceAndAsynLoad_h_13_RPC_WRAPPERS \
	MyAllTestProject_Source_MyAllTestProject_AsynLoad_InterfaceAndAsynLoad_h_13_CALLBACK_WRAPPERS \
	MyAllTestProject_Source_MyAllTestProject_AsynLoad_InterfaceAndAsynLoad_h_13_INCLASS \
	MyAllTestProject_Source_MyAllTestProject_AsynLoad_InterfaceAndAsynLoad_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyAllTestProject_Source_MyAllTestProject_AsynLoad_InterfaceAndAsynLoad_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyAllTestProject_Source_MyAllTestProject_AsynLoad_InterfaceAndAsynLoad_h_13_PRIVATE_PROPERTY_OFFSET \
	MyAllTestProject_Source_MyAllTestProject_AsynLoad_InterfaceAndAsynLoad_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	MyAllTestProject_Source_MyAllTestProject_AsynLoad_InterfaceAndAsynLoad_h_13_CALLBACK_WRAPPERS \
	MyAllTestProject_Source_MyAllTestProject_AsynLoad_InterfaceAndAsynLoad_h_13_INCLASS_NO_PURE_DECLS \
	MyAllTestProject_Source_MyAllTestProject_AsynLoad_InterfaceAndAsynLoad_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyAllTestProject_Source_MyAllTestProject_AsynLoad_InterfaceAndAsynLoad_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
