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
	//���������BP��ʹ�õ�ʱ������������Լ�ʵ�֣���ô����ʹ�ø����Ĭ��ʵ��
	virtual void CountdownHasFinished_Implementation();

	/*                                                                
	DECLARE_EVENT(AAllTestProjectCharacter, MyInitEvent)

	FMyDelegate MyDelegate;

	//���ڻ�ȡEvent���õĺ�����������GameMode֮��ִ��binding  
	MyInitEvent& OnInitialize()
	{
		return InitEvent;
	}


	FADelegate ADelegate;

	//Eventʵ����  
	MyInitEvent InitEvent;

	//Event��bindingָ��  
	FDelegateHandle DHandle;
	*/

};
