#pragma once
#include "IAsynLoadInterface.generated.h"


UINTERFACE(Blueprintable)
class UAsynLoadInterface : public UInterface
{
	GENERATED_BODY()
};

class IAsynLoadInterface
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintNativeEvent, Category = "Trigger Reaction")
	void OnAsynLoadedCallBack(UObject* LoadedObj);

	UFUNCTION( BlueprintImplementableEvent, Category = "Trigger Reaction")
		void OnInterfaceBPFuncTest();

	//BlueprintCallable 这个是不能使用的因为这个方法是给BP调用的，但是这个在接口中是抽象的，BP是不能进行调用的，所以使用了没有意义的
	// Blueprint implementable interfaces cannot contain BlueprintCallable functions that are not BlueprintImplementableEvents.  Use CannotImplementInterfaceInBlueprint on the interface if you wish to keep this function.
//	UFUNCTION(BlueprintCallable, Category = "Trigger Reaction")
	//	void OnInterfaceBPFuncTest2();
};
