// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CustomBPFunctions.generated.h"

/**
 * 
 */
UCLASS()
class DCMFG_API UCustomBPFunctions: public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "CustomBPFunctions")
	static void GetNotifyTriggerDetails(FAnimNotifyEvent NotifyEvent, FName& TriggerName, double& TriggerTime);
	UFUNCTION(BlueprintCallable, Category = "CustomBPFunctions")
	static bool GetNotifiesFromMontage(UAnimMontage* Montage, TArray<FAnimNotifyEvent>& NotifyEvents);
};
