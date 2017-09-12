// Fill out your copyright notice in the Description page of Project Settings.

#include "LoadBPFromPath.h"
#include "MyAllTestProject.h"

// Sets default values
ALoadBPFromPath::ALoadBPFromPath()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ALoadBPFromPath::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALoadBPFromPath::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

UClass* ALoadBPFromPath::LoadClassFromPath(const FString& path)
{
	UClass* ModelBPClass = LoadObject<UClass>(NULL, *path);
	if (ModelBPClass)
	{
		AActor* ModelBPActor = GetWorld()->SpawnActor<AActor>(ModelBPClass);
		if (ModelBPActor)
		{
			UE_LOG(LogGame, Warning, TEXT("ModelBPActor"));
		}
	}

	return ModelBPClass;
}



UClass* ALoadBPFromPath::GetObjectClass(UObject* InObj)
{
	UClass* clazz = Cast<UClass>(InObj);
	if (clazz)
	{
		UE_LOG(LogGame, Warning, TEXT("ModelBPActor"));
		return clazz;
	}
	return  NULL;
}

