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

	//BlueprintCallable ����ǲ���ʹ�õ���Ϊ��������Ǹ�BP���õģ���������ڽӿ����ǳ���ģ�BP�ǲ��ܽ��е��õģ�����ʹ����û�������
	// Blueprint implementable interfaces cannot contain BlueprintCallable functions that are not BlueprintImplementableEvents.  Use CannotImplementInterfaceInBlueprint on the interface if you wish to keep this function.
//	UFUNCTION(BlueprintCallable, Category = "Trigger Reaction")
	//	void OnInterfaceBPFuncTest2();
};
