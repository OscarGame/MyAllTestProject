// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LoadBPFromPath.generated.h"

/*    
	����BP����ʹ�����ַ���
	��һ�ַ�����ͬ���ķ���	LoadClassFromPath
	�ڶ��ַ�����ʹ���첽���صķ�����������õ���UObject������һ��BP������󣬽��������ת��Class����ʹ��
		�������C++��ʹ�ã���ôֱ�ӾͿ���SpawnActor�����������BP��ʹ�ã���ô��Ҫ�����UClassת��AActorClass
		Ȼ���������classȥspawnActor�Ϳ�����
*/
UCLASS()
class MYALLTESTPROJECT_API ALoadBPFromPath : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALoadBPFromPath();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "LoadBPFromPath")
	UClass* LoadClassFromPath(const FString& path);
	
	UClass* GetObjectClass(UObject* InObj);

};
