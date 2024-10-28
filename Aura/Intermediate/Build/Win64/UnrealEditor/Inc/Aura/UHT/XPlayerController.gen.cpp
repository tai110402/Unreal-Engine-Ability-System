// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/Players/XPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXPlayerController() {}

// Begin Cross Module References
AURA_API UClass* Z_Construct_UClass_AXPlayerController();
AURA_API UClass* Z_Construct_UClass_AXPlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References

// Begin Class AXPlayerController
void AXPlayerController::StaticRegisterNativesAXPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AXPlayerController);
UClass* Z_Construct_UClass_AXPlayerController_NoRegister()
{
	return AXPlayerController::StaticClass();
}
struct Z_Construct_UClass_AXPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Players/XPlayerController.h" },
		{ "ModuleRelativePath", "Public/Players/XPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AuraInputMappingContext_MetaData[] = {
		{ "Category", "XPlayerController" },
		{ "ModuleRelativePath", "Public/Players/XPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveInputAction_MetaData[] = {
		{ "Category", "XPlayerController" },
		{ "ModuleRelativePath", "Public/Players/XPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AuraInputMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveInputAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AXPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AXPlayerController_Statics::NewProp_AuraInputMappingContext = { "AuraInputMappingContext", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AXPlayerController, AuraInputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AuraInputMappingContext_MetaData), NewProp_AuraInputMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AXPlayerController_Statics::NewProp_MoveInputAction = { "MoveInputAction", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AXPlayerController, MoveInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveInputAction_MetaData), NewProp_MoveInputAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AXPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXPlayerController_Statics::NewProp_AuraInputMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXPlayerController_Statics::NewProp_MoveInputAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AXPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AXPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AXPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AXPlayerController_Statics::ClassParams = {
	&AXPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AXPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AXPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AXPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AXPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AXPlayerController()
{
	if (!Z_Registration_Info_UClass_AXPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AXPlayerController.OuterSingleton, Z_Construct_UClass_AXPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AXPlayerController.OuterSingleton;
}
template<> AURA_API UClass* StaticClass<AXPlayerController>()
{
	return AXPlayerController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AXPlayerController);
AXPlayerController::~AXPlayerController() {}
// End Class AXPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_tail1_OneDrive_Desktop_Unreal_Engine_Ability_System_Aura_Source_Aura_Public_Players_XPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AXPlayerController, AXPlayerController::StaticClass, TEXT("AXPlayerController"), &Z_Registration_Info_UClass_AXPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AXPlayerController), 1320602058U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tail1_OneDrive_Desktop_Unreal_Engine_Ability_System_Aura_Source_Aura_Public_Players_XPlayerController_h_3335358917(TEXT("/Script/Aura"),
	Z_CompiledInDeferFile_FID_Users_tail1_OneDrive_Desktop_Unreal_Engine_Ability_System_Aura_Source_Aura_Public_Players_XPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_tail1_OneDrive_Desktop_Unreal_Engine_Ability_System_Aura_Source_Aura_Public_Players_XPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
