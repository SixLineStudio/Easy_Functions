// Copyright Epic Games, Inc. All Rights Reserved.

#include "EasyFunctionsBPLibrary.h"
#include "EasyFunctions.h"
#include "Components/SceneComponent.h"
#include "CollisionQueryParams.h"
#include "Kismet/KismetMathLibrary.h"
#include "DrawDebugHelpers.h"

UEasyFunctionsBPLibrary::UEasyFunctionsBPLibrary(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

///
///Easy Line Trace
///
void UEasyFunctionsBPLibrary::EasyLineTrace(UObject* Object, USceneComponent* Origin,FName SocketName, float Lenth, EVector Direction,
                                            bool TraceComplex, bool IgnoreSelf, bool ReturnPhisicalMaterial,
                                            bool Draw_Debug_Line, FHitResult& HitResult, bool& ReturnValue)
{
	if (UWorld* World = GEngine->GetWorldFromContextObjectChecked(Object))
	{
		FVector VectorDirection;
		if(Origin)
		{
			switch (Direction)
			{
			case EVector::Forvard:
				VectorDirection = Origin->GetForwardVector();
				break;
			case EVector::Up:
				VectorDirection = Origin->GetUpVector();
				break;
			case EVector::Right:
				VectorDirection = Origin->GetRightVector();
				break;
			}
		
		
			FVector StartLocation;
			if(SocketName!="None" || Origin->DoesSocketExist(SocketName))
			{ StartLocation=Origin->GetSocketLocation(SocketName);}
			else
			{ StartLocation = Origin->GetComponentLocation();}
		
			const FVector EndLocation = VectorDirection * Lenth + StartLocation;
			FCollisionQueryParams Params;
		
			if(IgnoreSelf) Params.AddIgnoredActor(Cast<AActor>(Object));
		
			Params.bTraceComplex = TraceComplex;
			Params.bReturnPhysicalMaterial = ReturnPhisicalMaterial;

			World->LineTraceSingleByChannel(HitResult, StartLocation, EndLocation, ECC_Visibility,Params);

			ReturnValue=HitResult.bBlockingHit;
		
			if (Draw_Debug_Line)
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
}

void UEasyFunctionsBPLibrary::EasyLineTraceWithSpread(UObject* Object, USceneComponent* Origin,FName SocketName , float Lenth,
	float Spread, EVector Direction, bool TraceComplex, bool IgnoreSelf, bool ReturnPhisicalMaterial,
	bool Draw_Debug_Line, FHitResult& HitResult, bool& ReturnValue)
{
	if(Origin)
		{
	if (UWorld* World = GEngine->GetWorldFromContextObjectChecked(Object))
	{
		FVector VectorDirection;
		switch (Direction)
		{
		case EVector::Forvard:
			VectorDirection = Origin->GetForwardVector();
			break;
		case EVector::Up:
			VectorDirection = Origin->GetUpVector();
			break;
		case EVector::Right:
			VectorDirection = Origin->GetRightVector();
			break;
		}
		

		FVector StartLocation;
		if(SocketName!="None" || Origin->DoesSocketExist(SocketName))
		{ StartLocation=Origin->GetSocketLocation(SocketName);}
		else
		{ StartLocation = Origin->GetComponentLocation();}
		
		FVector RandomDir=UKismetMathLibrary::RandomUnitVectorInConeInDegrees(VectorDirection,Spread);
		FVector EndLocation = RandomDir * Lenth + StartLocation;
		FCollisionQueryParams Params;
		
		if(IgnoreSelf)
			Params.AddIgnoredActor(Cast<AActor>(Object));
		
		Params.bTraceComplex = TraceComplex;
		Params.bReturnPhysicalMaterial = ReturnPhisicalMaterial;
		World->LineTraceSingleByChannel(HitResult, StartLocation, EndLocation, ECC_Visibility,Params);

		ReturnValue=HitResult.bBlockingHit;
		
		if (Draw_Debug_Line)
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
}


AActor*UEasyFunctionsBPLibrary::EasyLineTracePure(UObject* Object, USceneComponent* Origin, float Lenth,
                                                EVector Direction, bool TraceComplex, bool IgnoreSelf, bool Draw_Debug_Line)
{
	FHitResult HitResult;
	if (UWorld* World = GEngine->GetWorldFromContextObjectChecked(Object))
	{ if(Origin){
		FVector VectorDirection;
		switch (Direction)
		{
		case EVector::Forvard:
			VectorDirection = Origin->GetForwardVector();
			break;
		case EVector::Up:
			VectorDirection = Origin->GetUpVector();
			break;
		case EVector::Right:
			VectorDirection = Origin->GetRightVector();
			break;
		}

		const FVector StartLocation = Origin->GetComponentLocation();
		FVector EndLocation = VectorDirection * Lenth + StartLocation;
		FCollisionQueryParams Params;
		
		if(IgnoreSelf)
			Params.AddIgnoredActor(Cast<AActor>(Object));
		
		Params.bTraceComplex = TraceComplex;
		
		World->LineTraceSingleByChannel(HitResult, StartLocation, EndLocation, ECC_Visibility,Params);
		
		if (Draw_Debug_Line)
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
return HitResult.GetActor();
}
	return nullptr;
}

///
///End Easy Line Trace
///
