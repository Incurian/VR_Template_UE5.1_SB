#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TestBFL.generated.h"

//Change "TEMP22" to your project name

UCLASS()
class VR_TEMP_3_API UTestBFL : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, Category = "Development", meta = (CallableWithoutWorldContext))
	static bool DoCallFunctionByName(FString Target, FString Command, FString Arguments);
};