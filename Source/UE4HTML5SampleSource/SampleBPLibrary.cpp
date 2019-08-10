// Fill out your copyright notice in the Description page of Project Settings.


#include "SampleBPLibrary.h"
#include "SampleHTML5.h"

void USampleBPLibrary::SampleInit()
{
#ifdef __EMSCRIPTEN__
	/* register the listener */
	SampleHTML5_RegisterStringFunction(&Callback_RegisterStringFunction);
#endif

#if PLATFORM_HTML5
	UE_InitSampleHTML5();
#endif
}

void USampleBPLibrary::Callback_RegisterStringFunction(const char* str)
{
	UE_LOG(LogTemp, Log, TEXT("USampleBPLibrary::Callback_RegisterStringFunction invoked\r\n"));
}
