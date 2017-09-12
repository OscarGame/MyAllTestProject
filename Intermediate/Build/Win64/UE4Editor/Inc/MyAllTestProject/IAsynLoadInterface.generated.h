// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef MYALLTESTPROJECT_IAsynLoadInterface_generated_h
#error "IAsynLoadInterface.generated.h already included, missing '#pragma once' in IAsynLoadInterface.h"
#endif
#define MYALLTESTPROJECT_IAsynLoadInterface_generated_h

#define MyAllTestProject_Source_MyAllTestProject_AsynLoad_IAsynLoadInterface_h_8_RPC_WRAPPERS \
	virtual void OnAsynLoadedCallBack_Implementation(UObject* LoadedObj)=0; \
 \
	DECLARE_FUNCTION(execOnAsynLoadedCallBack) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_LoadedObj); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnAsynLoadedCallBack_Implementation(Z_Param_LoadedObj); \
		P_NATIVE_END; \
	}


#define MyAllTestProject_Source_MyAllTestProject_AsynLoad_IAsynLoadInterface_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnAsynLoadedCallBack_Implementation(UObject* LoadedObj)=0; \
 \
	DECLARE_FUNCTION(execOnAsynLoadedCallBack) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_LoadedObj); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnAsynLoadedCallBack_Implementation(Z_Param_LoadedObj); \
		P_NATIVE_END; \
	}


#define MyAllTestProject_Source_MyAllTestProject_AsynLoad_IAsynLoadInterface_h_8_EVENT_PARMS \
	struct AsynLoadInterface_eventOnAsynLoadedCallBack_Parms \
	{ \
		UObject* LoadedObj; \
	};


#define MyAllTestProject_Source_MyAllTestProject_AsynLoad_IAsynLoadInterface_h_8_CALLBACK_WRAPPERS
#define MyAllTestProject_Source_MyAllTestProject_AsynLoad_IAsynLoadInterface_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsynLoadInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsynLoadInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsynLoadInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsynLoadInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsynLoadInterface(UAsynLoadInterface&&); \
	NO_API UAsynLoadInterface(const UAsynLoadInterface&); \
public:


#define MyAllTestProject_Source_MyAllTestProject_AsynLoad_IAsynLoadInterface_h_8_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsynLoadInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsynLoadInterface(UAsynLoadInterface&&); \
	NO_API UAsynLoadInterface(const UAsynLoadInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsynLoadInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsynLoadInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsynLoadInterface)


#undef GENERATED_UINTERFACE_BODY_COMMON
#define GENERATED_UINTERFACE_BODY_COMMON() \
private: \
	static void StaticRegisterNativesUAsynLoadInterface(); \
	friend MYALLTESTPROJECT_API class UClass* Z_Construct_UClass_UAsynLoadInterface(); \
public: \
	DECLARE_CLASS(UAsynLoadInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), 0, TEXT("/Script/MyAllTestProject"), NO_API) \
	DECLARE_SERIALIZER(UAsynLoadInterface) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MyAllTestProject_Source_MyAllTestProject_AsynLoad_IAsynLoadInterface_h_8_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GENERATED_UINTERFACE_BODY_COMMON() \
	MyAllTestProject_Source_MyAllTestProject_AsynLoad_IAsynLoadInterface_h_8_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyAllTestProject_Source_MyAllTestProject_AsynLoad_IAsynLoadInterface_h_8_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GENERATED_UINTERFACE_BODY_COMMON() \
	MyAllTestProject_Source_MyAllTestProject_AsynLoad_IAsynLoadInterface_h_8_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyAllTestProject_Source_MyAllTestProject_AsynLoad_IAsynLoadInterface_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAsynLoadInterface() {} \
public: \
	typedef UAsynLoadInterface UClassType; \
	static void Execute_OnAsynLoadedCallBack(UObject* O, UObject* LoadedObj); \
	static void Execute_OnInterfaceBPFuncTest(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define MyAllTestProject_Source_MyAllTestProject_AsynLoad_IAsynLoadInterface_h_8_INCLASS_IINTERFACE \
protected: \
	virtual ~IAsynLoadInterface() {} \
public: \
	typedef UAsynLoadInterface UClassType; \
	static void Execute_OnAsynLoadedCallBack(UObject* O, UObject* LoadedObj); \
	static void Execute_OnInterfaceBPFuncTest(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define MyAllTestProject_Source_MyAllTestProject_AsynLoad_IAsynLoadInterface_h_5_PROLOG \
	MyAllTestProject_Source_MyAllTestProject_AsynLoad_IAsynLoadInterface_h_8_EVENT_PARMS


#define MyAllTestProject_Source_MyAllTestProject_AsynLoad_IAsynLoadInterface_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyAllTestProject_Source_MyAllTestProject_AsynLoad_IAsynLoadInterface_h_8_RPC_WRAPPERS \
	MyAllTestProject_Source_MyAllTestProject_AsynLoad_IAsynLoadInterface_h_8_CALLBACK_WRAPPERS \
	MyAllTestProject_Source_MyAllTestProject_AsynLoad_IAsynLoadInterface_h_8_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyAllTestProject_Source_MyAllTestProject_AsynLoad_IAsynLoadInterface_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyAllTestProject_Source_MyAllTestProject_AsynLoad_IAsynLoadInterface_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	MyAllTestProject_Source_MyAllTestProject_AsynLoad_IAsynLoadInterface_h_8_CALLBACK_WRAPPERS \
	MyAllTestProject_Source_MyAllTestProject_AsynLoad_IAsynLoadInterface_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyAllTestProject_Source_MyAllTestProject_AsynLoad_IAsynLoadInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
