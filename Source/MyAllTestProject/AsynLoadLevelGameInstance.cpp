// Fill out your copyright notice in the Description page of Project Settings.

#include "AsynLoadLevelGameInstance.h"
#include "MyAllTestProject.h"
#include "Engine/LevelStreamingKismet.h"
#include "Engine/StreamableManager.h"



void UAsynLoadLevelGameInstance::Init()
{
	AsynLoadManger = NewObject<UAsynLoadManger>(this, TEXT("AsynLoadManager"));
	AsynLoadManger->AddToRoot();
}


void UAsynLoadLevelGameInstance::Shutdown()
{
	AsynLoadManger->RemoveFromRoot();
	AsynLoadManger = NULL;
}

UAsynLoadManger* UAsynLoadLevelGameInstance::GetAsynLoadManger()
{
	return AsynLoadManger;
}


void UAsynLoadLevelGameInstance::DynamicAsynLoadLevel(const FName LevelFullName)
{
	UWorld* PersistentWorld = GetWorld();

	if (!PersistentWorld)
	{
		UE_LOG(LogTemp, Fatal, TEXT("UDynamicLevels::LoadTileToStreamingArray >> Invalid PersistentWorld!!!"));
		return;
	}  

	//new StreamingClass Instance �����ؿ�ʵ��  
	UClass* StreamingClass = ULevelStreamingKismet::StaticClass();
	//ULevelStreaming* StreamingLevel = Cast<ULevelStreaming>(StaticConstructObject(StreamingClass, PersistentWorld, NAME_None, RF_Transient, NULL));
	ULevelStreaming* StreamingLevel = NewObject<ULevelStreaming>(PersistentWorld, StreamingClass, NAME_None, RF_Transient, NULL);
	// FName PackageName = TEXT("/Game/TempUmap/Level_01") ������Ŀʵ�������ȡ������PackageName  
	FName PackageName = TEXT("/Game/StarterContent/Maps/StarterMap");

	StreamingLevel->SetWorldAssetByPackageName(PackageName);

	//Make New Level Visible ʹ���ؿ��ɼ�  
	StreamingLevel->bShouldBeLoaded = true;
	StreamingLevel->bShouldBeVisible = true;
	StreamingLevel->bShouldBlockOnLoad = false;
	FTransform transfrom;
	transfrom.SetLocation(FVector(-400.0f, 700.0f, 140.0f));
	StreamingLevel->LevelTransform = transfrom;

	//Very Important, used by LevelStreaming* to load the map �������ؿ��İ���  
	StreamingLevel->PackageNameToLoad = PackageName;
	//Add to UWorld �����ؿ���ӵ�World��  
	PersistentWorld->StreamingLevels.Add(StreamingLevel);


	TArray<class ULevelStreaming*> Levels = PersistentWorld->StreamingLevels;
	for (auto level : Levels)
	{
		UE_LOG(LogGame, Warning, TEXT("level->GetPathName() = %s"), *level->GetPathName());
		UE_LOG(LogGame, Warning, TEXT("============"));
	}
	StreamingLevel->OnLevelLoaded.AddDynamic(this, &UAsynLoadLevelGameInstance::DynamicAsynLoadLevelFinished);
}


void UAsynLoadLevelGameInstance::DynamicAsynLoadLevelFinished()
{
	if (OnLevelLoaded.IsBound())
	{
		OnLevelLoaded.Broadcast(TEXT("sdf"));
	}
}

void UAsynLoadLevelGameInstance::SetDesLevelName(const FName& Name)
{
	this->DesLevelName = Name;
}


FName UAsynLoadLevelGameInstance::GetDesLevelName()
{
	return this->DesLevelName;
}



