// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyFunctions/Public/EasyFunctionsBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEasyFunctionsBPLibrary() {}
// Cross Module References
	EASYFUNCTIONS_API UEnum* Z_Construct_UEnum_EasyFunctions_EVector();
	UPackage* Z_Construct_UPackage__Script_EasyFunctions();
	EASYFUNCTIONS_API UClass* Z_Construct_UClass_UEasyFunctionsBPLibrary_NoRegister();
	EASYFUNCTIONS_API UClass* Z_Construct_UClass_UEasyFunctionsBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	static UEnum* EVector_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EasyFunctions_EVector, Z_Construct_UPackage__Script_EasyFunctions(), TEXT("EVector"));
		}
		return Singleton;
	}
	template<> EASYFUNCTIONS_API UEnum* StaticEnum<EVector>()
	{
		return EVector_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVector(EVector_StaticEnum, TEXT("/Script/EasyFunctions"), TEXT("EVector"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EasyFunctions_EVector_Hash() { return 2041892016U; }
	UEnum* Z_Construct_UEnum_EasyFunctions_EVector()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EasyFunctions();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVector"), 0, Get_Z_Construct_UEnum_EasyFunctions_EVector_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVector::Forvard", (int64)EVector::Forvard },
				{ "EVector::Up", (int64)EVector::Up },
				{ "EVector::Right", (int64)EVector::Right },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Forvard.Name", "EVector::Forvard" },
				{ "ModuleRelativePath", "Public/EasyFunctionsBPLibrary.h" },
				{ "Right.Name", "EVector::Right" },
				{ "Up.Name", "EVector::Up" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EasyFunctions,
				nullptr,
				"EVector",
				"EVector",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(UEasyFunctionsBPLibrary::execEasyLineTracePure)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_GET_OBJECT(USceneComponent,Z_Param_Origin);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Lenth);
		P_GET_ENUM(EVector,Z_Param_Direction);
		P_GET_UBOOL(Z_Param_TraceComplex);
		P_GET_UBOOL(Z_Param_IgnoreSelf);
		P_GET_UBOOL(Z_Param_Draw_Debug_Line);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=UEasyFunctionsBPLibrary::EasyLineTracePure(Z_Param_Object,Z_Param_Origin,Z_Param_Lenth,EVector(Z_Param_Direction),Z_Param_TraceComplex,Z_Param_IgnoreSelf,Z_Param_Draw_Debug_Line);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEasyFunctionsBPLibrary::execEasyLineTraceWithSpread)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_GET_OBJECT(USceneComponent,Z_Param_Origin);
		P_GET_PROPERTY(FNameProperty,Z_Param_SocketName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Lenth);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Spread);
		P_GET_ENUM(EVector,Z_Param_Direction);
		P_GET_UBOOL(Z_Param_TraceComplex);
		P_GET_UBOOL(Z_Param_IgnoreSelf);
		P_GET_UBOOL(Z_Param_ReturnPhisicalMaterial);
		P_GET_UBOOL(Z_Param_Draw_Debug_Line);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
		P_GET_UBOOL_REF(Z_Param_Out_ReturnValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEasyFunctionsBPLibrary::EasyLineTraceWithSpread(Z_Param_Object,Z_Param_Origin,Z_Param_SocketName,Z_Param_Lenth,Z_Param_Spread,EVector(Z_Param_Direction),Z_Param_TraceComplex,Z_Param_IgnoreSelf,Z_Param_ReturnPhisicalMaterial,Z_Param_Draw_Debug_Line,Z_Param_Out_HitResult,Z_Param_Out_ReturnValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEasyFunctionsBPLibrary::execEasyLineTrace)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_GET_OBJECT(USceneComponent,Z_Param_Origin);
		P_GET_PROPERTY(FNameProperty,Z_Param_SocketName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Lenth);
		P_GET_ENUM(EVector,Z_Param_Direction);
		P_GET_UBOOL(Z_Param_TraceComplex);
		P_GET_UBOOL(Z_Param_IgnoreSelf);
		P_GET_UBOOL(Z_Param_ReturnPhisicalMaterial);
		P_GET_UBOOL(Z_Param_Draw_Debug_Line);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
		P_GET_UBOOL_REF(Z_Param_Out_ReturnValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEasyFunctionsBPLibrary::EasyLineTrace(Z_Param_Object,Z_Param_Origin,Z_Param_SocketName,Z_Param_Lenth,EVector(Z_Param_Direction),Z_Param_TraceComplex,Z_Param_IgnoreSelf,Z_Param_ReturnPhisicalMaterial,Z_Param_Draw_Debug_Line,Z_Param_Out_HitResult,Z_Param_Out_ReturnValue);
		P_NATIVE_END;
	}
	void UEasyFunctionsBPLibrary::StaticRegisterNativesUEasyFunctionsBPLibrary()
	{
		UClass* Class = UEasyFunctionsBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EasyLineTrace", &UEasyFunctionsBPLibrary::execEasyLineTrace },
			{ "EasyLineTracePure", &UEasyFunctionsBPLibrary::execEasyLineTracePure },
			{ "EasyLineTraceWithSpread", &UEasyFunctionsBPLibrary::execEasyLineTraceWithSpread },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTrace_Statics
	{
		struct EasyFunctionsBPLibrary_eventEasyLineTrace_Parms
		{
			UObject* Object;
			USceneComponent* Origin;
			FName SocketName;
			float Lenth;
			EVector Direction;
			bool TraceComplex;
			bool IgnoreSelf;
			bool ReturnPhisicalMaterial;
			bool Draw_Debug_Line;
			FHitResult HitResult;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Origin;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SocketName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Lenth;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Direction;
		static void NewProp_TraceComplex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TraceComplex;
		static void NewProp_IgnoreSelf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IgnoreSelf;
		static void NewProp_ReturnPhisicalMaterial_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnPhisicalMaterial;
		static void NewProp_Draw_Debug_Line_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Draw_Debug_Line;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTrace_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EasyFunctionsBPLibrary_eventEasyLineTrace_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTrace_Statics::NewProp_Origin_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTrace_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EasyFunctionsBPLibrary_eventEasyLineTrace_Parms, Origin), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTrace_Statics::NewProp_Origin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTrace_Statics::NewProp_Origin_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTrace_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EasyFunctionsBPLibrary_eventEasyLineTrace_Parms, SocketName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTrace_Statics::NewProp_Lenth = { "Lenth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EasyFunctionsBPLibrary_eventEasyLineTrace_Parms, Lenth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTrace_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTrace_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EasyFunctionsBPLibrary_eventEasyLineTrace_Parms, Direction), Z_Construct_UEnum_EasyFunctions_EVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTrace_Statics::NewProp_TraceComplex_SetBit(void* Obj)
	{
		((EasyFunctionsBPLibrary_eventEasyLineTrace_Parms*)Obj)->TraceComplex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTrace_Statics::NewProp_TraceComplex = { "TraceComplex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EasyFunctionsBPLibrary_eventEasyLineTrace_Parms), &Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTrace_Statics::NewProp_TraceComplex_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTrace_Statics::NewProp_IgnoreSelf_SetBit(void* Obj)
	{
		((EasyFunctionsBPLibrary_eventEasyLineTrace_Parms*)Obj)->IgnoreSelf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTrace_Statics::NewProp_IgnoreSelf = { "IgnoreSelf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EasyFunctionsBPLibrary_eventEasyLineTrace_Parms), &Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTrace_Statics::NewProp_IgnoreSelf_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTrace_Statics::NewProp_ReturnPhisicalMaterial_SetBit(void* Obj)
	{
		((EasyFunctionsBPLibrary_eventEasyLineTrace_Parms*)Obj)->ReturnPhisicalMaterial = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTrace_Statics::NewProp_ReturnPhisicalMaterial = { "ReturnPhisicalMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EasyFunctionsBPLibrary_eventEasyLineTrace_Parms), &Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTrace_Statics::NewProp_ReturnPhisicalMaterial_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTrace_Statics::NewProp_Draw_Debug_Line_SetBit(void* Obj)
	{
		((EasyFunctionsBPLibrary_eventEasyLineTrace_Parms*)Obj)->Draw_Debug_Line = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTrace_Statics::NewProp_Draw_Debug_Line = { "Draw_Debug_Line", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EasyFunctionsBPLibrary_eventEasyLineTrace_Parms), &Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTrace_Statics::NewProp_Draw_Debug_Line_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTrace_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EasyFunctionsBPLibrary_eventEasyLineTrace_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTrace_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EasyFunctionsBPLibrary_eventEasyLineTrace_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTrace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EasyFunctionsBPLibrary_eventEasyLineTrace_Parms), &Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTrace_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTrace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTrace_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTrace_Statics::NewProp_Origin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTrace_Statics::NewProp_SocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTrace_Statics::NewProp_Lenth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTrace_Statics::NewProp_Direction_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTrace_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTrace_Statics::NewProp_TraceComplex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTrace_Statics::NewProp_IgnoreSelf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTrace_Statics::NewProp_ReturnPhisicalMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTrace_Statics::NewProp_Draw_Debug_Line,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTrace_Statics::NewProp_HitResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTrace_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTrace_Statics::Function_MetaDataParams[] = {
		{ "Category", "Easy Functions" },
		{ "Comment", "///\n/// Line Traces\n///\n" },
		{ "DefaultToSelf", "" },
		{ "DisplayName", "Easy Line Trace" },
		{ "HideSelfPin", "" },
		{ "IgnoreSelf", "TRUE" },
		{ "InSocketName", "None" },
		{ "Keywords", "Easy Line Trace" },
		{ "Lenth", "1000.000000" },
		{ "ModuleRelativePath", "Public/EasyFunctionsBPLibrary.h" },
		{ "ToolTip", "Line Traces" },
		{ "WorldContext", "Object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyFunctionsBPLibrary, nullptr, "EasyLineTrace", nullptr, nullptr, sizeof(EasyFunctionsBPLibrary_eventEasyLineTrace_Parms), Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTrace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTrace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTrace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTrace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTrace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTrace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTracePure_Statics
	{
		struct EasyFunctionsBPLibrary_eventEasyLineTracePure_Parms
		{
			UObject* Object;
			USceneComponent* Origin;
			float Lenth;
			EVector Direction;
			bool TraceComplex;
			bool IgnoreSelf;
			bool Draw_Debug_Line;
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Origin;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Lenth;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Direction;
		static void NewProp_TraceComplex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TraceComplex;
		static void NewProp_IgnoreSelf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IgnoreSelf;
		static void NewProp_Draw_Debug_Line_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Draw_Debug_Line;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTracePure_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EasyFunctionsBPLibrary_eventEasyLineTracePure_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTracePure_Statics::NewProp_Origin_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTracePure_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EasyFunctionsBPLibrary_eventEasyLineTracePure_Parms, Origin), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTracePure_Statics::NewProp_Origin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTracePure_Statics::NewProp_Origin_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTracePure_Statics::NewProp_Lenth = { "Lenth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EasyFunctionsBPLibrary_eventEasyLineTracePure_Parms, Lenth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTracePure_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTracePure_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EasyFunctionsBPLibrary_eventEasyLineTracePure_Parms, Direction), Z_Construct_UEnum_EasyFunctions_EVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTracePure_Statics::NewProp_TraceComplex_SetBit(void* Obj)
	{
		((EasyFunctionsBPLibrary_eventEasyLineTracePure_Parms*)Obj)->TraceComplex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTracePure_Statics::NewProp_TraceComplex = { "TraceComplex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EasyFunctionsBPLibrary_eventEasyLineTracePure_Parms), &Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTracePure_Statics::NewProp_TraceComplex_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTracePure_Statics::NewProp_IgnoreSelf_SetBit(void* Obj)
	{
		((EasyFunctionsBPLibrary_eventEasyLineTracePure_Parms*)Obj)->IgnoreSelf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTracePure_Statics::NewProp_IgnoreSelf = { "IgnoreSelf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EasyFunctionsBPLibrary_eventEasyLineTracePure_Parms), &Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTracePure_Statics::NewProp_IgnoreSelf_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTracePure_Statics::NewProp_Draw_Debug_Line_SetBit(void* Obj)
	{
		((EasyFunctionsBPLibrary_eventEasyLineTracePure_Parms*)Obj)->Draw_Debug_Line = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTracePure_Statics::NewProp_Draw_Debug_Line = { "Draw_Debug_Line", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EasyFunctionsBPLibrary_eventEasyLineTracePure_Parms), &Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTracePure_Statics::NewProp_Draw_Debug_Line_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTracePure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EasyFunctionsBPLibrary_eventEasyLineTracePure_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTracePure_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTracePure_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTracePure_Statics::NewProp_Origin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTracePure_Statics::NewProp_Lenth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTracePure_Statics::NewProp_Direction_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTracePure_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTracePure_Statics::NewProp_TraceComplex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTracePure_Statics::NewProp_IgnoreSelf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTracePure_Statics::NewProp_Draw_Debug_Line,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTracePure_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTracePure_Statics::Function_MetaDataParams[] = {
		{ "Category", "Easy Functions" },
		{ "DefaultToSelf", "" },
		{ "DisplayName", "Easy Line Trace Pure" },
		{ "HideSelfPin", "" },
		{ "IgnoreSelf", "TRUE" },
		{ "Keywords", "Easy Line Trace Pure" },
		{ "Lenth", "1000.000000" },
		{ "ModuleRelativePath", "Public/EasyFunctionsBPLibrary.h" },
		{ "WorldContext", "Object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTracePure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyFunctionsBPLibrary, nullptr, "EasyLineTracePure", nullptr, nullptr, sizeof(EasyFunctionsBPLibrary_eventEasyLineTracePure_Parms), Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTracePure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTracePure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTracePure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTracePure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTracePure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTracePure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTraceWithSpread_Statics
	{
		struct EasyFunctionsBPLibrary_eventEasyLineTraceWithSpread_Parms
		{
			UObject* Object;
			USceneComponent* Origin;
			FName SocketName;
			float Lenth;
			float Spread;
			EVector Direction;
			bool TraceComplex;
			bool IgnoreSelf;
			bool ReturnPhisicalMaterial;
			bool Draw_Debug_Line;
			FHitResult HitResult;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Origin;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SocketName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Lenth;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Spread;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Direction;
		static void NewProp_TraceComplex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TraceComplex;
		static void NewProp_IgnoreSelf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IgnoreSelf;
		static void NewProp_ReturnPhisicalMaterial_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnPhisicalMaterial;
		static void NewProp_Draw_Debug_Line_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Draw_Debug_Line;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTraceWithSpread_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EasyFunctionsBPLibrary_eventEasyLineTraceWithSpread_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTraceWithSpread_Statics::NewProp_Origin_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTraceWithSpread_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EasyFunctionsBPLibrary_eventEasyLineTraceWithSpread_Parms, Origin), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTraceWithSpread_Statics::NewProp_Origin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTraceWithSpread_Statics::NewProp_Origin_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTraceWithSpread_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EasyFunctionsBPLibrary_eventEasyLineTraceWithSpread_Parms, SocketName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTraceWithSpread_Statics::NewProp_Lenth = { "Lenth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EasyFunctionsBPLibrary_eventEasyLineTraceWithSpread_Parms, Lenth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTraceWithSpread_Statics::NewProp_Spread = { "Spread", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EasyFunctionsBPLibrary_eventEasyLineTraceWithSpread_Parms, Spread), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTraceWithSpread_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTraceWithSpread_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EasyFunctionsBPLibrary_eventEasyLineTraceWithSpread_Parms, Direction), Z_Construct_UEnum_EasyFunctions_EVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTraceWithSpread_Statics::NewProp_TraceComplex_SetBit(void* Obj)
	{
		((EasyFunctionsBPLibrary_eventEasyLineTraceWithSpread_Parms*)Obj)->TraceComplex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTraceWithSpread_Statics::NewProp_TraceComplex = { "TraceComplex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EasyFunctionsBPLibrary_eventEasyLineTraceWithSpread_Parms), &Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTraceWithSpread_Statics::NewProp_TraceComplex_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTraceWithSpread_Statics::NewProp_IgnoreSelf_SetBit(void* Obj)
	{
		((EasyFunctionsBPLibrary_eventEasyLineTraceWithSpread_Parms*)Obj)->IgnoreSelf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTraceWithSpread_Statics::NewProp_IgnoreSelf = { "IgnoreSelf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EasyFunctionsBPLibrary_eventEasyLineTraceWithSpread_Parms), &Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTraceWithSpread_Statics::NewProp_IgnoreSelf_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTraceWithSpread_Statics::NewProp_ReturnPhisicalMaterial_SetBit(void* Obj)
	{
		((EasyFunctionsBPLibrary_eventEasyLineTraceWithSpread_Parms*)Obj)->ReturnPhisicalMaterial = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTraceWithSpread_Statics::NewProp_ReturnPhisicalMaterial = { "ReturnPhisicalMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EasyFunctionsBPLibrary_eventEasyLineTraceWithSpread_Parms), &Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTraceWithSpread_Statics::NewProp_ReturnPhisicalMaterial_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTraceWithSpread_Statics::NewProp_Draw_Debug_Line_SetBit(void* Obj)
	{
		((EasyFunctionsBPLibrary_eventEasyLineTraceWithSpread_Parms*)Obj)->Draw_Debug_Line = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTraceWithSpread_Statics::NewProp_Draw_Debug_Line = { "Draw_Debug_Line", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EasyFunctionsBPLibrary_eventEasyLineTraceWithSpread_Parms), &Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTraceWithSpread_Statics::NewProp_Draw_Debug_Line_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTraceWithSpread_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EasyFunctionsBPLibrary_eventEasyLineTraceWithSpread_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTraceWithSpread_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EasyFunctionsBPLibrary_eventEasyLineTraceWithSpread_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTraceWithSpread_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EasyFunctionsBPLibrary_eventEasyLineTraceWithSpread_Parms), &Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTraceWithSpread_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTraceWithSpread_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTraceWithSpread_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTraceWithSpread_Statics::NewProp_Origin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTraceWithSpread_Statics::NewProp_SocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTraceWithSpread_Statics::NewProp_Lenth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTraceWithSpread_Statics::NewProp_Spread,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTraceWithSpread_Statics::NewProp_Direction_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTraceWithSpread_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTraceWithSpread_Statics::NewProp_TraceComplex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTraceWithSpread_Statics::NewProp_IgnoreSelf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTraceWithSpread_Statics::NewProp_ReturnPhisicalMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTraceWithSpread_Statics::NewProp_Draw_Debug_Line,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTraceWithSpread_Statics::NewProp_HitResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTraceWithSpread_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTraceWithSpread_Statics::Function_MetaDataParams[] = {
		{ "Category", "Easy Functions" },
		{ "DefaultToSelf", "" },
		{ "DisplayName", "Easy Line Trace With Spread" },
		{ "HideSelfPin", "" },
		{ "IgnoreSelf", "TRUE" },
		{ "Keywords", "Easy Line Trace Spread" },
		{ "Lenth", "1000.000000" },
		{ "ModuleRelativePath", "Public/EasyFunctionsBPLibrary.h" },
		{ "WorldContext", "Object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTraceWithSpread_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyFunctionsBPLibrary, nullptr, "EasyLineTraceWithSpread", nullptr, nullptr, sizeof(EasyFunctionsBPLibrary_eventEasyLineTraceWithSpread_Parms), Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTraceWithSpread_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTraceWithSpread_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTraceWithSpread_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTraceWithSpread_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTraceWithSpread()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTraceWithSpread_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEasyFunctionsBPLibrary_NoRegister()
	{
		return UEasyFunctionsBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UEasyFunctionsBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEasyFunctionsBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyFunctions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEasyFunctionsBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTrace, "EasyLineTrace" }, // 339060794
		{ &Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTracePure, "EasyLineTracePure" }, // 3577323196
		{ &Z_Construct_UFunction_UEasyFunctionsBPLibrary_EasyLineTraceWithSpread, "EasyLineTraceWithSpread" }, // 2045633613
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEasyFunctionsBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EasyFunctionsBPLibrary.h" },
		{ "ModuleRelativePath", "Public/EasyFunctionsBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEasyFunctionsBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEasyFunctionsBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEasyFunctionsBPLibrary_Statics::ClassParams = {
		&UEasyFunctionsBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEasyFunctionsBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEasyFunctionsBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEasyFunctionsBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEasyFunctionsBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEasyFunctionsBPLibrary, 4201499985);
	template<> EASYFUNCTIONS_API UClass* StaticClass<UEasyFunctionsBPLibrary>()
	{
		return UEasyFunctionsBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEasyFunctionsBPLibrary(Z_Construct_UClass_UEasyFunctionsBPLibrary, &UEasyFunctionsBPLibrary::StaticClass, TEXT("/Script/EasyFunctions"), TEXT("UEasyFunctionsBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEasyFunctionsBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
