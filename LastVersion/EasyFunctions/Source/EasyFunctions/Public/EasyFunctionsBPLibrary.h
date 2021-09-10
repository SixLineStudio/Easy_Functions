// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/Engine.h"
#include "EasyFunctionsBPLibrary.generated.h"


UENUM(BlueprintType)
enum class EVector : uint8
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
	UFUNCTION(BlueprintCallable,
		meta = (WorldContext="Object", DefaultToSelf, HideSelfPin,InSocketName="None", DisplayName = "Easy Line Trace", Keywords =
			"Easy Line Trace", IgnoreSelf=true, Lenth=1000.0f), Category = "Easy Functions")
	static void EasyLineTrace(UObject* Object, USceneComponent* Origin, FName SocketName, float Lenth, EVector Direction,
	                          bool TraceComplex, bool IgnoreSelf, bool ReturnPhisicalMaterial, bool Draw_Debug_Line,
	                          FHitResult& HitResult, bool& ReturnValue);

	UFUNCTION(BlueprintCallable,
		meta = (WorldContext="Object", DefaultToSelf, HideSelfPin, DisplayName = "Easy Line Trace With Spread",
			Keywords = "Easy Line Trace Spread", IgnoreSelf=true, Lenth=1000.0f), Category = "Easy Functions")
	static void EasyLineTraceWithSpread(UObject* Object, USceneComponent* Origin, FName SocketName, float Lenth, float Spread,
	                                    EVector Direction,
	                                    bool TraceComplex, bool IgnoreSelf, bool ReturnPhisicalMaterial,
	                                    bool Draw_Debug_Line, FHitResult& HitResult, bool& ReturnValue);

	UFUNCTION(BlueprintPure,
		meta = (WorldContext="Object", DefaultToSelf, HideSelfPin, DisplayName = "Easy Line Trace Pure", Keywords =
			"Easy Line Trace Pure", IgnoreSelf=true, Lenth=1000.0f), Category = "Easy Functions")
	static AActor*EasyLineTracePure(UObject* Object, USceneComponent* Origin, float Lenth, EVector Direction,
	                              bool TraceComplex, bool IgnoreSelf, bool Draw_Debug_Line);
	///
	/// End Of Line Traces
	///
};
