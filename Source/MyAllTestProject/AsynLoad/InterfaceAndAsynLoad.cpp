// Fill out your copyright notice in the Description page of Project Settings.

#include "InterfaceAndAsynLoad.h"


// Sets default values
AInterfaceAndAsynLoad::AInterfaceAndAsynLoad()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AInterfaceAndAsynLoad::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AInterfaceAndAsynLoad::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AInterfaceAndAsynLoad::OnAsynLoadedCallBack_Implementation(UObject* LoadedObj)
{
}



 void AInterfaceAndAsynLoad::CountdownHasFinished_Implementation()
{

}

