// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IAsynLoadInterface.h"
#include "InterfaceAndAsynLoad.generated.h"

UCLASS()
class MYALLTESTPROJECT_API AInterfaceAndAsynLoad : public AActor,public IAsynLoadInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AInterfaceAndAsynLoad();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void OnAsynLoadedCallBack_Implementation(UObject* LoadedObj) override;
	
	UFUNCTION(BlueprintNativeEvent)
		void CountdownHasFinished();
	//这个方法是BP在使用的时候，如果她不想自己实现，那么可以使用父类的默认实现
	virtual void CountdownHasFinished_Implementation();

	/*                                                                
	DECLARE_EVENT(AAllTestProjectCharacter, MyInitEvent)

	FMyDelegate MyDelegate;

	//用于获取Event引用的函数，方便在GameMode之外执行binding  
	MyInitEvent& OnInitialize()
	{
		return InitEvent;
	}


	FADelegate ADelegate;

	//Event实例化  
	MyInitEvent InitEvent;

	//Event的binding指针  
	FDelegateHandle DHandle;
	*/

};
