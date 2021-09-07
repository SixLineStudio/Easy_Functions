// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/Engine.h"
#include "EasyFunctionsBPLibrary.generated.h"



UENUM(BlueprintType)
enum  EVector 
{
	Forvard,
	Up,
	Right
};

UCLASS()

class UEasyFunctionsBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

///
/// Line Traces
///
	UFUNCTION(BlueprintCallable, meta = (WorldContext="SelfActor",DefaultToSelf,HideSelfPin,DisplayName = "Easy Line Trace", Keywords = "Easy Line Trace",IgnoreSelf=true,Lenth=1000.0f), Category = "Easy Functions")
	static void EasyLineTrace(AActor*SelfActor,USceneComponent* Origin,float Lenth, EVector Direction,
		bool TraceComplex,bool IgnoreSelf,bool ReturnPhisicalMaterial, bool DrawDebagLine,FHitResult &HitResult,bool &ReturnValue);

	UFUNCTION(BlueprintCallable, meta = (WorldContext="SelfActor",DefaultToSelf,HideSelfPin,DisplayName = "Easy Line Trace With Spread", Keywords = "Easy Line Trace Spread",IgnoreSelf=true,Lenth=1000.0f), Category = "Easy Functions")
static void EasyLineTraceWithSpread(AActor*SelfActor,USceneComponent* Origin,float Lenth,float Spread, EVector Direction,
	bool TraceComplex,bool IgnoreSelf,bool ReturnPhisicalMaterial, bool DrawDebagLine,FHitResult &HitResult,bool &ReturnValue);

	UFUNCTION(BlueprintPure, meta = (WorldContext="SelfActor",DefaultToSelf,HideSelfPin,DisplayName = "Easy Line Trace Pure", Keywords = "Easy Line Trace Pure",IgnoreSelf=true,Lenth=1000.0f), Category = "Easy Functions")
static void EasyLineTracePure(AActor*SelfActor,USceneComponent* Origin,float Lenth, EVector Direction,
	bool TraceComplex,bool IgnoreSelf, bool DrawDebagLine,AActor*&Actor);
///
/// End Of Line Traces
///


};
