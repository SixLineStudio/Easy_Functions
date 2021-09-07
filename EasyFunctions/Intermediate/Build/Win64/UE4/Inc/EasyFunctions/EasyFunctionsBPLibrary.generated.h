// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class USceneComponent;
struct FHitResult;
#ifdef EASYFUNCTIONS_EasyFunctionsBPLibrary_generated_h
#error "EasyFunctionsBPLibrary.generated.h already included, missing '#pragma once' in EasyFunctionsBPLibrary.h"
#endif
#define EASYFUNCTIONS_EasyFunctionsBPLibrary_generated_h

#define HostProject_Plugins_EasyFunctions_Source_EasyFunctions_Public_EasyFunctionsBPLibrary_h_23_SPARSE_DATA
#define HostProject_Plugins_EasyFunctions_Source_EasyFunctions_Public_EasyFunctionsBPLibrary_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEasyLineTracePure); \
	DECLARE_FUNCTION(execEasyLineTraceWithSpread); \
	DECLARE_FUNCTION(execEasyLineTrace);


#define HostProject_Plugins_EasyFunctions_Source_EasyFunctions_Public_EasyFunctionsBPLibrary_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEasyLineTracePure); \
	DECLARE_FUNCTION(execEasyLineTraceWithSpread); \
	DECLARE_FUNCTION(execEasyLineTrace);


#define HostProject_Plugins_EasyFunctions_Source_EasyFunctions_Public_EasyFunctionsBPLibrary_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEasyFunctionsBPLibrary(); \
	friend struct Z_Construct_UClass_UEasyFunctionsBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UEasyFunctionsBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EasyFunctions"), NO_API) \
	DECLARE_SERIALIZER(UEasyFunctionsBPLibrary)


#define HostProject_Plugins_EasyFunctions_Source_EasyFunctions_Public_EasyFunctionsBPLibrary_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUEasyFunctionsBPLibrary(); \
	friend struct Z_Construct_UClass_UEasyFunctionsBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UEasyFunctionsBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EasyFunctions"), NO_API) \
	DECLARE_SERIALIZER(UEasyFunctionsBPLibrary)


#define HostProject_Plugins_EasyFunctions_Source_EasyFunctions_Public_EasyFunctionsBPLibrary_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEasyFunctionsBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEasyFunctionsBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEasyFunctionsBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEasyFunctionsBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEasyFunctionsBPLibrary(UEasyFunctionsBPLibrary&&); \
	NO_API UEasyFunctionsBPLibrary(const UEasyFunctionsBPLibrary&); \
public:


#define HostProject_Plugins_EasyFunctions_Source_EasyFunctions_Public_EasyFunctionsBPLibrary_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEasyFunctionsBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEasyFunctionsBPLibrary(UEasyFunctionsBPLibrary&&); \
	NO_API UEasyFunctionsBPLibrary(const UEasyFunctionsBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEasyFunctionsBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEasyFunctionsBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEasyFunctionsBPLibrary)


#define HostProject_Plugins_EasyFunctions_Source_EasyFunctions_Public_EasyFunctionsBPLibrary_h_23_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_EasyFunctions_Source_EasyFunctions_Public_EasyFunctionsBPLibrary_h_19_PROLOG
#define HostProject_Plugins_EasyFunctions_Source_EasyFunctions_Public_EasyFunctionsBPLibrary_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_EasyFunctions_Source_EasyFunctions_Public_EasyFunctionsBPLibrary_h_23_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_EasyFunctions_Source_EasyFunctions_Public_EasyFunctionsBPLibrary_h_23_SPARSE_DATA \
	HostProject_Plugins_EasyFunctions_Source_EasyFunctions_Public_EasyFunctionsBPLibrary_h_23_RPC_WRAPPERS \
	HostProject_Plugins_EasyFunctions_Source_EasyFunctions_Public_EasyFunctionsBPLibrary_h_23_INCLASS \
	HostProject_Plugins_EasyFunctions_Source_EasyFunctions_Public_EasyFunctionsBPLibrary_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_EasyFunctions_Source_EasyFunctions_Public_EasyFunctionsBPLibrary_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_EasyFunctions_Source_EasyFunctions_Public_EasyFunctionsBPLibrary_h_23_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_EasyFunctions_Source_EasyFunctions_Public_EasyFunctionsBPLibrary_h_23_SPARSE_DATA \
	HostProject_Plugins_EasyFunctions_Source_EasyFunctions_Public_EasyFunctionsBPLibrary_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_EasyFunctions_Source_EasyFunctions_Public_EasyFunctionsBPLibrary_h_23_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_EasyFunctions_Source_EasyFunctions_Public_EasyFunctionsBPLibrary_h_23_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class EasyFunctionsBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EASYFUNCTIONS_API UClass* StaticClass<class UEasyFunctionsBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_EasyFunctions_Source_EasyFunctions_Public_EasyFunctionsBPLibrary_h


#define FOREACH_ENUM_EVECTOR(op) \
	op(Forvard) \
	op(Up) \
	op(Right) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
