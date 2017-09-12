// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LoadBPFromPath.generated.h"

/*    
	加载BP对象使用两种方法
	第一种方法：同步的方法	LoadClassFromPath
	第二种方法，使用异步加载的方法，加载完得到的UObject对象是一个BP的类对象，将这个对象转成Class才能使用
		如果是在C++中使用，那么直接就可以SpawnActor；但是如果在BP中使用，那么需要将这个UClass转成AActorClass
		然后再用这个class去spawnActor就可以了
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
