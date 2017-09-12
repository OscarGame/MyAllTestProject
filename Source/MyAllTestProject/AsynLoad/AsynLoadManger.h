#pragma once
#include "MyAllTestProject.h"
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/StreamableManager.h"
#include "AsynLoadManger.generated.h"



DECLARE_DELEGATE_OneParam(FAsynLoadManagerDelegate, TArray<UObject *>&);


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAsynLoadDelegate);



struct AsynLoadStruct
{
	TSharedPtr<FStreamableHandle> Handle;
	UObject* Obj;
	AsynLoadStruct()
	{
	}
};

/**
 * 
 */
UCLASS()
class MYALLTESTPROJECT_API UAsynLoadManger : public UObject
{
	GENERATED_BODY()
	
public:
	UAsynLoadManger();

	UFUNCTION(BlueprintCallable, Category = AsynLoadManger)
	void AddLoadRequest(const FString& ItemsToStream, UObject* InObject);

	void GrantItemsDeferred(const FString inID);


	UPROPERTY(BlueprintAssignable, Category = "MyDelegate")
	FAsynLoadDelegate LoadDel;


	TArray<FString> GUIDArray;

	static UAsynLoadManger* Get();
private:

	void InitAsynID();

	TMap<FString, AsynLoadStruct> LoadCache;

	FStreamableManager	StreamableManager;
	//TMap<TSharedPtr<FStreamableHandle>, FAsynLoadManagerDelegate> LoadCache;
	//TArray<TSharedPtr<FStreamableHandle>> LoadedCache;
};
