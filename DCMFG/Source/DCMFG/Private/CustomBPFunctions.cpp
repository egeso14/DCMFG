// Fill out your copyright notice in the Description page of Project Settings.

#include "CustomBPFunctions.h"

void UCustomBPFunctions::GetNotifyTriggerDetails(FAnimNotifyEvent NotifyEvent, FName& TriggerName, double& TriggerTime)
{
	TriggerTime = NotifyEvent.GetTriggerTime();
	UAnimNotify* uan = NotifyEvent.Notify;
	if (uan)
	{
		TriggerName = FName(uan->GetNotifyName());
	}
	else
	{
		TriggerName = FName("nullPtr");
	}
}

bool UCustomBPFunctions::GetNotifiesFromMontage(UAnimMontage* Montage, TArray<FAnimNotifyEvent>& NotifyEvents)
{
	bool result = false;
	if (Montage)
	{
		NotifyEvents = Montage->Notifies;
		result = true;
	}
	else
	{
		NotifyEvents = TArray<FAnimNotifyEvent>();
	}
	return result;
}
