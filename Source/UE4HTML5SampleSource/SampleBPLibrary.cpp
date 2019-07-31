// Fill out your copyright notice in the Description page of Project Settings.


#include "SampleBPLibrary.h"
#include "SampleHTML5.h"

void USampleBPLibrary::SampleInit()
{
#if PLATFORM_HTML5
	UE_InitSampleHTML5();
#endif
}
