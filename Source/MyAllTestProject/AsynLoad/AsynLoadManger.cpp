// Fill out your copyright notice in the Description page of Project Settings.

#include "AsynLoadManger.h"
#include "IAsynLoadInterface.h"


UAsynLoadManger::UAsynLoadManger()
{
	InitAsynID();
}

void UAsynLoadManger::InitAsynID()
{
	for (int32 index =0 ;index < 20 ; index++)
	{
		FString const id = FString::Printf(TEXT("AsynLoad%d"),index);
		GUIDArray.Push(id);
	}
}

void UAsynLoadManger::AddLoadRequest(const FString& ItemPath, UObject* InObject)
{
	if (InObject && InObject->GetClass()->ImplementsInterface(UAsynLoadInterface::StaticClass()))
	{
		//const FString UID = GUIDArray.Pop();

		FStringAssetReference refe(ItemPath);
		TArray<FStringAssetReference> AssetArray;
		AssetArray.AddUnique(refe);
		TSharedPtr<FStreamableHandle> hand = StreamableManager.RequestAsyncLoad(AssetArray, FStreamableDelegate::CreateUObject(this, &UAsynLoadManger::GrantItemsDeferred, ItemPath));
		AsynLoadStruct LoadInfo;
		LoadInfo.Handle = hand;
		LoadInfo.Obj = InObject;

		LoadCache.Add(ItemPath, LoadInfo);
	}
}

UAsynLoadManger* UAsynLoadManger::Get()
{
	UAsynLoadManger* instance = Cast<UAsynLoadManger>(GEngine->GameSingleton);
	if (!instance)
		return nullptr;
	else
		return instance;

}
void UAsynLoadManger::GrantItemsDeferred(const FString inID)
{
	//GUIDArray.Push(inID);

	AsynLoadStruct HandleInfo = *LoadCache.Find(inID);
	
	bool bIsImplemented = HandleInfo.Obj->GetClass()->ImplementsInterface(UAsynLoadInterface::StaticClass()); // bIsImplemented will be true if OriginalObject implements UReactToTriggerInterface.
	if (bIsImplemented)
	{
		IAsynLoadInterface* ReactingObject = Cast<IAsynLoadInterface>(HandleInfo.Obj);

		TArray<UObject *> LoadedArray;
		HandleInfo.Handle->GetLoadedAssets(LoadedArray);
		if (LoadedArray[0])
		{
			IAsynLoadInterface::Execute_OnAsynLoadedCallBack(HandleInfo.Obj,LoadedArray[0]);
		}

		LoadCache.Remove(inID);
			/*	IAsynLoadInterface::Execute_OnAsynLoadedCallBack(NULL);
				LoadCache.Remove(inID);*/
	}


	/*TArray<TSharedPtr<FStreamableHandle>> HandleArray;
	for (auto& Elem : LoadCache)
	{
		if (Elem.Key->HasLoadCompleted() && Elem.Value.IsBound())
		{
			TSharedPtr<FStreamableHandle> hand = Elem.Key;
			TArray<UObject *> LoadedArray;
			hand->GetLoadedAssets(LoadedArray);
			Elem.Value.Execute(LoadedArray);

			HandleArray.AddUnique(Elem.Key);
		}
	}

	for (auto& Hand : HandleArray)
	{
		LoadCache.Remove(Hand);
	}

	HandleArray.Empty();
	*/
}


