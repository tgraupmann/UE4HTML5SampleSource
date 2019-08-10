// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SampleBPLibrary.generated.h"

/**
 * 
 */
UCLASS()
class UE4HTML5SAMPLESOURCE_API USampleBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "SampleInit", Keywords = "Invoke Sample JS"), Category = "Sample")
	static void SampleInit();

	static void Callback_RegisterStringFunction(const char* str);
};
