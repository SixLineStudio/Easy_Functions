// Copyright Epic Games, Inc. All Rights Reserved.

#include "EasyFunctionsBPLibrary.h"
#include "EasyFunctions.h"
#include "Components/SceneComponent.h"
#include "CollisionQueryParams.h"
#include "Kismet/KismetMathLibrary.h"
//#include "Engine/World.h"
#include "DrawDebugHelpers.h"

UEasyFunctionsBPLibrary::UEasyFunctionsBPLibrary(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

///
///Easy Line Trace
///
void UEasyFunctionsBPLibrary::EasyLineTrace(AActor* SelfActor, USceneComponent* Origin, float Lenth, EVector Direction,
                                            bool TraceComplex, bool IgnoreSelf, bool ReturnPhisicalMaterial,
                                            bool DrawDebagLine, FHitResult& HitResult, bool& ReturnValue)
{
	if (UWorld* World = GEngine->GetWorldFromContextObjectChecked(SelfActor))
	{
		FVector VectorDirection;
		switch (Direction)
		{
		case Forvard:
			VectorDirection = Origin->GetForwardVector();
			break;
		case Up:
			VectorDirection = Origin->GetUpVector();
			break;
		case Right:
			VectorDirection = Origin->GetRightVector();
			break;
		}

		const FVector StartLocation = Origin->GetComponentLocation();
		FVector EndLocation = VectorDirection * Lenth + StartLocation;
		FCollisionQueryParams Params;
		
		if(IgnoreSelf)
		Params.AddIgnoredActor(SelfActor);
		
		
		if (TraceComplex)
		{
			Params.bTraceComplex = true;
		}
		else
			Params.bTraceComplex = false;

		if (ReturnPhisicalMaterial)
			Params.bReturnPhysicalMaterial = true;

		World->LineTraceSingleByChannel(HitResult, StartLocation, EndLocation, ECC_Visibility,Params);

		ReturnValue=HitResult.bBlockingHit;
		
		if (DrawDebagLine)
		{
			DrawDebugLine
			(
				World,
				StartLocation,
				EndLocation,
				FColor::Red,
				false, 2, 0, 1
			);
			DrawDebugBox(World,
			             HitResult.Location,
			             FVector(2.f, 2.f, 2.f)
			             , FColor::Green,
			             false,
			             2, 0, 10);
		}
	}
}

void UEasyFunctionsBPLibrary::EasyLineTraceWithSpread(AActor* SelfActor, USceneComponent* Origin, float Lenth,
	float Spread, EVector Direction, bool TraceComplex, bool IgnoreSelf, bool ReturnPhisicalMaterial,
	bool DrawDebagLine, FHitResult& HitResult, bool& ReturnValue)
{
	if (UWorld* World = GEngine->GetWorldFromContextObjectChecked(SelfActor))
	{
		FVector VectorDirection;
		switch (Direction)
		{
		case Forvard:
			VectorDirection = Origin->GetForwardVector();
			break;
		case Up:
			VectorDirection = Origin->GetUpVector();
			break;
		case Right:
			VectorDirection = Origin->GetRightVector();
			break;
		}

		const FVector StartLocation = Origin->GetComponentLocation();
		FVector RandomDir=UKismetMathLibrary::RandomUnitVectorInConeInDegrees(VectorDirection,Spread);
		FVector EndLocation = RandomDir * Lenth + StartLocation;
		FCollisionQueryParams Params;
		
		if(IgnoreSelf)
			Params.AddIgnoredActor(SelfActor);
		
		
		if (TraceComplex)
		{
			Params.bTraceComplex = true;
		}
		else
			Params.bTraceComplex = false;

		if (ReturnPhisicalMaterial)
			Params.bReturnPhysicalMaterial = true;

		World->LineTraceSingleByChannel(HitResult, StartLocation, EndLocation, ECC_Visibility,Params);

		ReturnValue=HitResult.bBlockingHit;
		
		if (DrawDebagLine)
		{
			DrawDebugLine
			(
				World,
				StartLocation,
				EndLocation,
				FColor::Red,
				false, 2, 0, 1
			);
			DrawDebugBox(World,
						HitResult.Location,
						FVector(2.f, 2.f, 2.f)
						, FColor::Green,
						false,
						2, 0, 10);
		}
	}
}


void UEasyFunctionsBPLibrary::EasyLineTracePure(AActor* SelfActor, USceneComponent* Origin, float Lenth,
                                                EVector Direction, bool TraceComplex, bool IgnoreSelf, bool DrawDebagLine,AActor*&Actor)
{
	FHitResult HitResult;
	if (UWorld* World = GEngine->GetWorldFromContextObjectChecked(SelfActor))
	{
		FVector VectorDirection;
		switch (Direction)
		{
		case Forvard:
			VectorDirection = Origin->GetForwardVector();
			break;
		case Up:
			VectorDirection = Origin->GetUpVector();
			break;
		case Right:
			VectorDirection = Origin->GetRightVector();
			break;
		}

		const FVector StartLocation = Origin->GetComponentLocation();
		FVector EndLocation = VectorDirection * Lenth + StartLocation;
		FCollisionQueryParams Params;
		
		if(IgnoreSelf)
			Params.AddIgnoredActor(SelfActor);
		
		if (TraceComplex)
		{
			Params.bTraceComplex = true;
		}
		else
			Params.bTraceComplex = false;
		
		World->LineTraceSingleByChannel(HitResult, StartLocation, EndLocation, ECC_Visibility,Params);
		
		if (DrawDebagLine)
		{
			DrawDebugLine
			(
				World,
				StartLocation,
				EndLocation,
				FColor::Red,
				false, 2, 0, 1
			);
			DrawDebugBox(World,
						HitResult.Location,
						FVector(2.f, 2.f, 2.f)
						, FColor::Green,
						false,
						2, 0, 10);
		}
	}
	Actor= HitResult.GetActor();
}

///
///End Easy Line Trace
///
