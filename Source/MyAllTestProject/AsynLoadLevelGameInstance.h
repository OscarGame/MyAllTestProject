// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "AsynLoad/AsynLoadManger.h"
#include "Engine/GameInstance.h"
#include "AsynLoadLevelGameInstance.generated.h"


//DECLARE_DYNAMIC_MULTICAST_DELEGATE(FLevelStreamingLoadedCallBack);

//������������C++��ָ���ص��ķ�������ô�������������BlueprintCallableһ���
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLevelStreamingLoadedCallBack,const FString&,Result);

/**
 * 
 */
UCLASS()
class MYALLTESTPROJECT_API UAsynLoadLevelGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:

	FName DesLevelName;

	UAsynLoadManger* AsynLoadManger;

	virtual void Init() override;

	virtual void Shutdown() override;

	UFUNCTION(BlueprintCallable, Category = "AsynLoadLevelGameInstance")
	void DynamicAsynLoadLevel(const FName LevelFullName);

	UPROPERTY(BlueprintAssignable, Category = "AsynLoadLevelGameInstance")
	FLevelStreamingLoadedCallBack OnLevelLoaded;

	UFUNCTION(BlueprintCallable, Category = "AsynLoadLevelGameInstance")
	void DynamicAsynLoadLevelFinished();

	UFUNCTION(BlueprintCallable, Category = "AsynLoadLevelGameInstance")
	void SetDesLevelName(const FName& Name);

	UFUNCTION(BlueprintCallable, Category = "AsynLoadLevelGameInstance")
	FName GetDesLevelName();

	UFUNCTION(BlueprintCallable, Category = "AsynLoadLevelGameInstance")
	UAsynLoadManger* GetAsynLoadManger();

};
