// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "MyAllTestProject.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1MyAllTestProject() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	COREUOBJECT_API class UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API class UClass* Z_Construct_UClass_UObject();
	ENGINE_API class UClass* Z_Construct_UClass_UGameInstance();
	ENGINE_API class UClass* Z_Construct_UClass_AActor();
	ENGINE_API class UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API class UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AGameModeBase();

	MYALLTESTPROJECT_API class UFunction* Z_Construct_UFunction_UAsynLoadInterface_OnAsynLoadedCallBack();
	MYALLTESTPROJECT_API class UFunction* Z_Construct_UFunction_UAsynLoadInterface_OnInterfaceBPFuncTest();
	MYALLTESTPROJECT_API class UClass* Z_Construct_UClass_UAsynLoadInterface_NoRegister();
	MYALLTESTPROJECT_API class UClass* Z_Construct_UClass_UAsynLoadInterface();
	MYALLTESTPROJECT_API class UFunction* Z_Construct_UDelegateFunction_MyAllTestProject_AsynLoadDelegate__DelegateSignature();
	MYALLTESTPROJECT_API class UFunction* Z_Construct_UFunction_UAsynLoadManger_AddLoadRequest();
	MYALLTESTPROJECT_API class UClass* Z_Construct_UClass_UAsynLoadManger_NoRegister();
	MYALLTESTPROJECT_API class UClass* Z_Construct_UClass_UAsynLoadManger();
	MYALLTESTPROJECT_API class UFunction* Z_Construct_UDelegateFunction_MyAllTestProject_LevelStreamingLoadedCallBack__DelegateSignature();
	MYALLTESTPROJECT_API class UFunction* Z_Construct_UFunction_UAsynLoadLevelGameInstance_DynamicAsynLoadLevel();
	MYALLTESTPROJECT_API class UFunction* Z_Construct_UFunction_UAsynLoadLevelGameInstance_DynamicAsynLoadLevelFinished();
	MYALLTESTPROJECT_API class UFunction* Z_Construct_UFunction_UAsynLoadLevelGameInstance_GetAsynLoadManger();
	MYALLTESTPROJECT_API class UFunction* Z_Construct_UFunction_UAsynLoadLevelGameInstance_GetDesLevelName();
	MYALLTESTPROJECT_API class UFunction* Z_Construct_UFunction_UAsynLoadLevelGameInstance_SetDesLevelName();
	MYALLTESTPROJECT_API class UClass* Z_Construct_UClass_UAsynLoadLevelGameInstance_NoRegister();
	MYALLTESTPROJECT_API class UClass* Z_Construct_UClass_UAsynLoadLevelGameInstance();
	MYALLTESTPROJECT_API class UFunction* Z_Construct_UFunction_AInterfaceAndAsynLoad_CountdownHasFinished();
	MYALLTESTPROJECT_API class UClass* Z_Construct_UClass_AInterfaceAndAsynLoad_NoRegister();
	MYALLTESTPROJECT_API class UClass* Z_Construct_UClass_AInterfaceAndAsynLoad();
	MYALLTESTPROJECT_API class UFunction* Z_Construct_UFunction_ALoadBPFromPath_LoadClassFromPath();
	MYALLTESTPROJECT_API class UClass* Z_Construct_UClass_ALoadBPFromPath_NoRegister();
	MYALLTESTPROJECT_API class UClass* Z_Construct_UClass_ALoadBPFromPath();
	MYALLTESTPROJECT_API class UFunction* Z_Construct_UFunction_AMyAllTestProjectCharacter_OnmyResetVR();
	MYALLTESTPROJECT_API class UClass* Z_Construct_UClass_AMyAllTestProjectCharacter_NoRegister();
	MYALLTESTPROJECT_API class UClass* Z_Construct_UClass_AMyAllTestProjectCharacter();
	MYALLTESTPROJECT_API class UClass* Z_Construct_UClass_AMyAllTestProjectGameMode_NoRegister();
	MYALLTESTPROJECT_API class UClass* Z_Construct_UClass_AMyAllTestProjectGameMode();
	MYALLTESTPROJECT_API class UPackage* Z_Construct_UPackage__Script_MyAllTestProject();
	void IAsynLoadInterface::OnAsynLoadedCallBack(UObject* LoadedObj)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnAsynLoadedCallBack instead.");
	}
	void IAsynLoadInterface::OnInterfaceBPFuncTest()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnInterfaceBPFuncTest instead.");
	}
	void UAsynLoadInterface::StaticRegisterNativesUAsynLoadInterface()
	{
		UClass* Class = UAsynLoadInterface::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "OnAsynLoadedCallBack", (Native)&IAsynLoadInterface::execOnAsynLoadedCallBack },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 1);
	}
	UFunction* Z_Construct_UFunction_UAsynLoadInterface_OnAsynLoadedCallBack()
	{
		UObject* Outer=Z_Construct_UClass_UAsynLoadInterface();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnAsynLoadedCallBack"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x08020C00, 65535, sizeof(AsynLoadInterface_eventOnAsynLoadedCallBack_Parms));
			UProperty* NewProp_LoadedObj = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LoadedObj"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(LoadedObj, AsynLoadInterface_eventOnAsynLoadedCallBack_Parms), 0x0010000000000080, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Trigger Reaction"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("AsynLoad/IAsynLoadInterface.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAsynLoadInterface_OnInterfaceBPFuncTest()
	{
		UObject* Outer=Z_Construct_UClass_UAsynLoadInterface();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnInterfaceBPFuncTest"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x08020800, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Trigger Reaction"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("AsynLoad/IAsynLoadInterface.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAsynLoadInterface_NoRegister()
	{
		return UAsynLoadInterface::StaticClass();
	}
	UClass* Z_Construct_UClass_UAsynLoadInterface()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			UInterface::StaticClass();
			Z_Construct_UPackage__Script_MyAllTestProject();
			OuterClass = UAsynLoadInterface::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20004081;

				OuterClass->LinkChild(Z_Construct_UFunction_UAsynLoadInterface_OnAsynLoadedCallBack());
				OuterClass->LinkChild(Z_Construct_UFunction_UAsynLoadInterface_OnInterfaceBPFuncTest());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAsynLoadInterface_OnAsynLoadedCallBack(), "OnAsynLoadedCallBack"); // 2966605155
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAsynLoadInterface_OnInterfaceBPFuncTest(), "OnInterfaceBPFuncTest"); // 3557378118
				static TCppClassTypeInfo<TCppClassTypeTraits<IAsynLoadInterface> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("AsynLoad/IAsynLoadInterface.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAsynLoadInterface, 952941982);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAsynLoadInterface(Z_Construct_UClass_UAsynLoadInterface, &UAsynLoadInterface::StaticClass, TEXT("/Script/MyAllTestProject"), TEXT("UAsynLoadInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAsynLoadInterface);
	static FName NAME_UAsynLoadInterface_OnAsynLoadedCallBack = FName(TEXT("OnAsynLoadedCallBack"));
	void IAsynLoadInterface::Execute_OnAsynLoadedCallBack(UObject* O, UObject* LoadedObj)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAsynLoadInterface::StaticClass()));
		AsynLoadInterface_eventOnAsynLoadedCallBack_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UAsynLoadInterface_OnAsynLoadedCallBack);
		if (Func)
		{
			Parms.LoadedObj=LoadedObj;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IAsynLoadInterface*)(O->GetNativeInterfaceAddress(UAsynLoadInterface::StaticClass())))
		{
			I->OnAsynLoadedCallBack_Implementation(LoadedObj);
		}
	}
	static FName NAME_UAsynLoadInterface_OnInterfaceBPFuncTest = FName(TEXT("OnInterfaceBPFuncTest"));
	void IAsynLoadInterface::Execute_OnInterfaceBPFuncTest(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAsynLoadInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UAsynLoadInterface_OnInterfaceBPFuncTest);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
	}
	UFunction* Z_Construct_UDelegateFunction_MyAllTestProject_AsynLoadDelegate__DelegateSignature()
	{
		UObject* Outer=Z_Construct_UPackage__Script_MyAllTestProject();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AsynLoadDelegate__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), NULL, 0x00130000, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("AsynLoad/AsynLoadManger.h"));
#endif
		}
		return ReturnFunction;
	}
	void UAsynLoadManger::StaticRegisterNativesUAsynLoadManger()
	{
		UClass* Class = UAsynLoadManger::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "AddLoadRequest", (Native)&UAsynLoadManger::execAddLoadRequest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 1);
	}
	UFunction* Z_Construct_UFunction_UAsynLoadManger_AddLoadRequest()
	{
		struct AsynLoadManger_eventAddLoadRequest_Parms
		{
			FString ItemsToStream;
			UObject* InObject;
		};
		UObject* Outer=Z_Construct_UClass_UAsynLoadManger();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AddLoadRequest"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(AsynLoadManger_eventAddLoadRequest_Parms));
			UProperty* NewProp_InObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("InObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(InObject, AsynLoadManger_eventAddLoadRequest_Parms), 0x0010000000000080, Z_Construct_UClass_UObject_NoRegister());
			UProperty* NewProp_ItemsToStream = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ItemsToStream"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ItemsToStream, AsynLoadManger_eventAddLoadRequest_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("AsynLoadManger"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("AsynLoad/AsynLoadManger.h"));
			MetaData->SetValue(NewProp_ItemsToStream, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAsynLoadManger_NoRegister()
	{
		return UAsynLoadManger::StaticClass();
	}
	UClass* Z_Construct_UClass_UAsynLoadManger()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_MyAllTestProject();
			OuterClass = UAsynLoadManger::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_UAsynLoadManger_AddLoadRequest());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_LoadDel = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LoadDel"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(LoadDel, UAsynLoadManger), 0x0010000010080000, Z_Construct_UDelegateFunction_MyAllTestProject_AsynLoadDelegate__DelegateSignature());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAsynLoadManger_AddLoadRequest(), "AddLoadRequest"); // 2230807624
				static TCppClassTypeInfo<TCppClassTypeTraits<UAsynLoadManger> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AsynLoad/AsynLoadManger.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("AsynLoad/AsynLoadManger.h"));
				MetaData->SetValue(NewProp_LoadDel, TEXT("Category"), TEXT("MyDelegate"));
				MetaData->SetValue(NewProp_LoadDel, TEXT("ModuleRelativePath"), TEXT("AsynLoad/AsynLoadManger.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAsynLoadManger, 610354745);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAsynLoadManger(Z_Construct_UClass_UAsynLoadManger, &UAsynLoadManger::StaticClass, TEXT("/Script/MyAllTestProject"), TEXT("UAsynLoadManger"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAsynLoadManger);
	UFunction* Z_Construct_UDelegateFunction_MyAllTestProject_LevelStreamingLoadedCallBack__DelegateSignature()
	{
		struct _Script_MyAllTestProject_eventLevelStreamingLoadedCallBack_Parms
		{
			FString Result;
		};
		UObject* Outer=Z_Construct_UPackage__Script_MyAllTestProject();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("LevelStreamingLoadedCallBack__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), NULL, 0x00130000, 65535, sizeof(_Script_MyAllTestProject_eventLevelStreamingLoadedCallBack_Parms));
			UProperty* NewProp_Result = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Result"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(Result, _Script_MyAllTestProject_eventLevelStreamingLoadedCallBack_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("AsynLoadLevelGameInstance.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("??????????????C++??\x05b8???\x0635??\x0137???????\x00f4??????????????BlueprintCallable\x04bb????"));
			MetaData->SetValue(NewProp_Result, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	void UAsynLoadLevelGameInstance::StaticRegisterNativesUAsynLoadLevelGameInstance()
	{
		UClass* Class = UAsynLoadLevelGameInstance::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "DynamicAsynLoadLevel", (Native)&UAsynLoadLevelGameInstance::execDynamicAsynLoadLevel },
			{ "DynamicAsynLoadLevelFinished", (Native)&UAsynLoadLevelGameInstance::execDynamicAsynLoadLevelFinished },
			{ "GetAsynLoadManger", (Native)&UAsynLoadLevelGameInstance::execGetAsynLoadManger },
			{ "GetDesLevelName", (Native)&UAsynLoadLevelGameInstance::execGetDesLevelName },
			{ "SetDesLevelName", (Native)&UAsynLoadLevelGameInstance::execSetDesLevelName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 5);
	}
	UFunction* Z_Construct_UFunction_UAsynLoadLevelGameInstance_DynamicAsynLoadLevel()
	{
		struct AsynLoadLevelGameInstance_eventDynamicAsynLoadLevel_Parms
		{
			FName LevelFullName;
		};
		UObject* Outer=Z_Construct_UClass_UAsynLoadLevelGameInstance();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("DynamicAsynLoadLevel"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(AsynLoadLevelGameInstance_eventDynamicAsynLoadLevel_Parms));
			UProperty* NewProp_LevelFullName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LevelFullName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(LevelFullName, AsynLoadLevelGameInstance_eventDynamicAsynLoadLevel_Parms), 0x0010000000000082);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("AsynLoadLevelGameInstance"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("AsynLoadLevelGameInstance.h"));
			MetaData->SetValue(NewProp_LevelFullName, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAsynLoadLevelGameInstance_DynamicAsynLoadLevelFinished()
	{
		UObject* Outer=Z_Construct_UClass_UAsynLoadLevelGameInstance();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("DynamicAsynLoadLevelFinished"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("AsynLoadLevelGameInstance"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("AsynLoadLevelGameInstance.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAsynLoadLevelGameInstance_GetAsynLoadManger()
	{
		struct AsynLoadLevelGameInstance_eventGetAsynLoadManger_Parms
		{
			UAsynLoadManger* ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UAsynLoadLevelGameInstance();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetAsynLoadManger"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(AsynLoadLevelGameInstance_eventGetAsynLoadManger_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, AsynLoadLevelGameInstance_eventGetAsynLoadManger_Parms), 0x0010000000000580, Z_Construct_UClass_UAsynLoadManger_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("AsynLoadLevelGameInstance"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("AsynLoadLevelGameInstance.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAsynLoadLevelGameInstance_GetDesLevelName()
	{
		struct AsynLoadLevelGameInstance_eventGetDesLevelName_Parms
		{
			FName ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UAsynLoadLevelGameInstance();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetDesLevelName"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(AsynLoadLevelGameInstance_eventGetDesLevelName_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(ReturnValue, AsynLoadLevelGameInstance_eventGetDesLevelName_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("AsynLoadLevelGameInstance"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("AsynLoadLevelGameInstance.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAsynLoadLevelGameInstance_SetDesLevelName()
	{
		struct AsynLoadLevelGameInstance_eventSetDesLevelName_Parms
		{
			FName Name;
		};
		UObject* Outer=Z_Construct_UClass_UAsynLoadLevelGameInstance();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetDesLevelName"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04420401, 65535, sizeof(AsynLoadLevelGameInstance_eventSetDesLevelName_Parms));
			UProperty* NewProp_Name = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Name"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(Name, AsynLoadLevelGameInstance_eventSetDesLevelName_Parms), 0x0010000008000182);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("AsynLoadLevelGameInstance"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("AsynLoadLevelGameInstance.h"));
			MetaData->SetValue(NewProp_Name, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAsynLoadLevelGameInstance_NoRegister()
	{
		return UAsynLoadLevelGameInstance::StaticClass();
	}
	UClass* Z_Construct_UClass_UAsynLoadLevelGameInstance()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UGameInstance();
			Z_Construct_UPackage__Script_MyAllTestProject();
			OuterClass = UAsynLoadLevelGameInstance::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900088;

				OuterClass->LinkChild(Z_Construct_UFunction_UAsynLoadLevelGameInstance_DynamicAsynLoadLevel());
				OuterClass->LinkChild(Z_Construct_UFunction_UAsynLoadLevelGameInstance_DynamicAsynLoadLevelFinished());
				OuterClass->LinkChild(Z_Construct_UFunction_UAsynLoadLevelGameInstance_GetAsynLoadManger());
				OuterClass->LinkChild(Z_Construct_UFunction_UAsynLoadLevelGameInstance_GetDesLevelName());
				OuterClass->LinkChild(Z_Construct_UFunction_UAsynLoadLevelGameInstance_SetDesLevelName());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_OnLevelLoaded = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnLevelLoaded"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnLevelLoaded, UAsynLoadLevelGameInstance), 0x0010000010080000, Z_Construct_UDelegateFunction_MyAllTestProject_LevelStreamingLoadedCallBack__DelegateSignature());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAsynLoadLevelGameInstance_DynamicAsynLoadLevel(), "DynamicAsynLoadLevel"); // 1579060528
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAsynLoadLevelGameInstance_DynamicAsynLoadLevelFinished(), "DynamicAsynLoadLevelFinished"); // 516108656
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAsynLoadLevelGameInstance_GetAsynLoadManger(), "GetAsynLoadManger"); // 338250177
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAsynLoadLevelGameInstance_GetDesLevelName(), "GetDesLevelName"); // 1932370003
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAsynLoadLevelGameInstance_SetDesLevelName(), "SetDesLevelName"); // 1963925716
				static TCppClassTypeInfo<TCppClassTypeTraits<UAsynLoadLevelGameInstance> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AsynLoadLevelGameInstance.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("AsynLoadLevelGameInstance.h"));
				MetaData->SetValue(NewProp_OnLevelLoaded, TEXT("Category"), TEXT("AsynLoadLevelGameInstance"));
				MetaData->SetValue(NewProp_OnLevelLoaded, TEXT("ModuleRelativePath"), TEXT("AsynLoadLevelGameInstance.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAsynLoadLevelGameInstance, 3988125958);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAsynLoadLevelGameInstance(Z_Construct_UClass_UAsynLoadLevelGameInstance, &UAsynLoadLevelGameInstance::StaticClass, TEXT("/Script/MyAllTestProject"), TEXT("UAsynLoadLevelGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAsynLoadLevelGameInstance);
	static FName NAME_AInterfaceAndAsynLoad_CountdownHasFinished = FName(TEXT("CountdownHasFinished"));
	void AInterfaceAndAsynLoad::CountdownHasFinished()
	{
		ProcessEvent(FindFunctionChecked(NAME_AInterfaceAndAsynLoad_CountdownHasFinished),NULL);
	}
	void AInterfaceAndAsynLoad::StaticRegisterNativesAInterfaceAndAsynLoad()
	{
		UClass* Class = AInterfaceAndAsynLoad::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "CountdownHasFinished", (Native)&AInterfaceAndAsynLoad::execCountdownHasFinished },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 1);
	}
	UFunction* Z_Construct_UFunction_AInterfaceAndAsynLoad_CountdownHasFinished()
	{
		UObject* Outer=Z_Construct_UClass_AInterfaceAndAsynLoad();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CountdownHasFinished"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x08020C00, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("AsynLoad/InterfaceAndAsynLoad.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AInterfaceAndAsynLoad_NoRegister()
	{
		return AInterfaceAndAsynLoad::StaticClass();
	}
	UClass* Z_Construct_UClass_AInterfaceAndAsynLoad()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_MyAllTestProject();
			OuterClass = AInterfaceAndAsynLoad::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_AInterfaceAndAsynLoad_CountdownHasFinished());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AInterfaceAndAsynLoad_CountdownHasFinished(), "CountdownHasFinished"); // 1592922101
				static TCppClassTypeInfo<TCppClassTypeTraits<AInterfaceAndAsynLoad> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->Interfaces.Add(FImplementedInterface(Z_Construct_UClass_UAsynLoadInterface_NoRegister(), VTABLE_OFFSET(AInterfaceAndAsynLoad, IAsynLoadInterface), false ));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AsynLoad/InterfaceAndAsynLoad.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("AsynLoad/InterfaceAndAsynLoad.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInterfaceAndAsynLoad, 3098420253);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInterfaceAndAsynLoad(Z_Construct_UClass_AInterfaceAndAsynLoad, &AInterfaceAndAsynLoad::StaticClass, TEXT("/Script/MyAllTestProject"), TEXT("AInterfaceAndAsynLoad"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInterfaceAndAsynLoad);
	void ALoadBPFromPath::StaticRegisterNativesALoadBPFromPath()
	{
		UClass* Class = ALoadBPFromPath::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "LoadClassFromPath", (Native)&ALoadBPFromPath::execLoadClassFromPath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 1);
	}
	UFunction* Z_Construct_UFunction_ALoadBPFromPath_LoadClassFromPath()
	{
		struct LoadBPFromPath_eventLoadClassFromPath_Parms
		{
			FString path;
			UClass* ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_ALoadBPFromPath();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("LoadClassFromPath"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(LoadBPFromPath_eventLoadClassFromPath_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(ReturnValue, LoadBPFromPath_eventLoadClassFromPath_Parms), 0x0010000000000580, Z_Construct_UClass_UObject_NoRegister(), UClass::StaticClass());
			UProperty* NewProp_path = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("path"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(path, LoadBPFromPath_eventLoadClassFromPath_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("LoadBPFromPath"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("LoadBPFromPath/LoadBPFromPath.h"));
			MetaData->SetValue(NewProp_path, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALoadBPFromPath_NoRegister()
	{
		return ALoadBPFromPath::StaticClass();
	}
	UClass* Z_Construct_UClass_ALoadBPFromPath()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_MyAllTestProject();
			OuterClass = ALoadBPFromPath::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_ALoadBPFromPath_LoadClassFromPath());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ALoadBPFromPath_LoadClassFromPath(), "LoadClassFromPath"); // 2018135370
				static TCppClassTypeInfo<TCppClassTypeTraits<ALoadBPFromPath> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("LoadBPFromPath/LoadBPFromPath.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("LoadBPFromPath/LoadBPFromPath.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("????BP????\x02b9?????\x05b7???\n??\x04bb?\x05b7?????\x036c???\x0137???      LoadClassFromPath\n?\x06b6??\x05b7?????\x02b9???\xccbd???\x0635\x0137????????????\x00f5???UObject??????\x04bb??BP?????????????????\x05ea??Class????\x02b9??\n        ????????C++??\x02b9?\x00e3???\x00f4\x05b1?\x04fe\x037f???SpawnActor????????????BP??\x02b9?\x00e3???\x00f4??\x04aa??????UClass\x05ea??AActorClass\n        \x023b??????????class\x0225spawnActor?\x037f?????"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALoadBPFromPath, 2074740434);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALoadBPFromPath(Z_Construct_UClass_ALoadBPFromPath, &ALoadBPFromPath::StaticClass, TEXT("/Script/MyAllTestProject"), TEXT("ALoadBPFromPath"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALoadBPFromPath);
	void AMyAllTestProjectCharacter::StaticRegisterNativesAMyAllTestProjectCharacter()
	{
		UClass* Class = AMyAllTestProjectCharacter::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "OnmyResetVR", (Native)&AMyAllTestProjectCharacter::execOnmyResetVR },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 1);
	}
	UFunction* Z_Construct_UFunction_AMyAllTestProjectCharacter_OnmyResetVR()
	{
		UObject* Outer=Z_Construct_UClass_AMyAllTestProjectCharacter();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnmyResetVR"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04080401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("MyAllTestProjectCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyAllTestProjectCharacter_NoRegister()
	{
		return AMyAllTestProjectCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_AMyAllTestProjectCharacter()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage__Script_MyAllTestProject();
			OuterClass = AMyAllTestProjectCharacter::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20800080;

				OuterClass->LinkChild(Z_Construct_UFunction_AMyAllTestProjectCharacter_OnmyResetVR());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_BaseLookUpRate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseLookUpRate"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BaseLookUpRate, AMyAllTestProjectCharacter), 0x0010000000020015);
				UProperty* NewProp_BaseTurnRate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseTurnRate"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BaseTurnRate, AMyAllTestProjectCharacter), 0x0010000000020015);
				UProperty* NewProp_FollowCamera = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FollowCamera"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(FollowCamera, AMyAllTestProjectCharacter), 0x00400000000a001d, Z_Construct_UClass_UCameraComponent_NoRegister());
				UProperty* NewProp_CameraBoom = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CameraBoom"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CameraBoom, AMyAllTestProjectCharacter), 0x00400000000a001d, Z_Construct_UClass_USpringArmComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AMyAllTestProjectCharacter_OnmyResetVR(), "OnmyResetVR"); // 1324376413
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<AMyAllTestProjectCharacter> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MyAllTestProjectCharacter.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("MyAllTestProjectCharacter.h"));
				MetaData->SetValue(NewProp_BaseLookUpRate, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_BaseLookUpRate, TEXT("ModuleRelativePath"), TEXT("MyAllTestProjectCharacter.h"));
				MetaData->SetValue(NewProp_BaseLookUpRate, TEXT("ToolTip"), TEXT("Base look up/down rate, in deg/sec. Other scaling may affect final rate."));
				MetaData->SetValue(NewProp_BaseTurnRate, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_BaseTurnRate, TEXT("ModuleRelativePath"), TEXT("MyAllTestProjectCharacter.h"));
				MetaData->SetValue(NewProp_BaseTurnRate, TEXT("ToolTip"), TEXT("Base turn rate, in deg/sec. Other scaling may affect final turn rate."));
				MetaData->SetValue(NewProp_FollowCamera, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_FollowCamera, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_FollowCamera, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_FollowCamera, TEXT("ModuleRelativePath"), TEXT("MyAllTestProjectCharacter.h"));
				MetaData->SetValue(NewProp_FollowCamera, TEXT("ToolTip"), TEXT("Follow camera"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("ModuleRelativePath"), TEXT("MyAllTestProjectCharacter.h"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("ToolTip"), TEXT("Camera boom positioning the camera behind the character"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyAllTestProjectCharacter, 1335063007);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyAllTestProjectCharacter(Z_Construct_UClass_AMyAllTestProjectCharacter, &AMyAllTestProjectCharacter::StaticClass, TEXT("/Script/MyAllTestProject"), TEXT("AMyAllTestProjectCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyAllTestProjectCharacter);
	void AMyAllTestProjectGameMode::StaticRegisterNativesAMyAllTestProjectGameMode()
	{
	}
	UClass* Z_Construct_UClass_AMyAllTestProjectGameMode_NoRegister()
	{
		return AMyAllTestProjectGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AMyAllTestProjectGameMode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_MyAllTestProject();
			OuterClass = AMyAllTestProjectGameMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20880288;


				static TCppClassTypeInfo<TCppClassTypeTraits<AMyAllTestProjectGameMode> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MyAllTestProjectGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("MyAllTestProjectGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyAllTestProjectGameMode, 3130829430);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyAllTestProjectGameMode(Z_Construct_UClass_AMyAllTestProjectGameMode, &AMyAllTestProjectGameMode::StaticClass, TEXT("/Script/MyAllTestProject"), TEXT("AMyAllTestProjectGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyAllTestProjectGameMode);
	UPackage* Z_Construct_UPackage__Script_MyAllTestProject()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/MyAllTestProject")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x25289295;
			Guid.B = 0xCD0EEDC5;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

			Z_Construct_UDelegateFunction_MyAllTestProject_AsynLoadDelegate__DelegateSignature();
			Z_Construct_UDelegateFunction_MyAllTestProject_LevelStreamingLoadedCallBack__DelegateSignature();
		}
		return ReturnPackage;
	}
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
