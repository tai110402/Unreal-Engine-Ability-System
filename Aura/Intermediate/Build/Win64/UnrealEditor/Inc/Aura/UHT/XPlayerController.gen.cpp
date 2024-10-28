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
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Players/XPlayerController.h" },
		{ "ModuleRelativePath", "Public/Players/XPlayerController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AXPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
AXPlayerController::AXPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AXPlayerController);
AXPlayerController::~AXPlayerController() {}
// End Class AXPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_tail1_OneDrive_Desktop_Unreal_Engine_Ability_System_Aura_Source_Aura_Public_Players_XPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AXPlayerController, AXPlayerController::StaticClass, TEXT("AXPlayerController"), &Z_Registration_Info_UClass_AXPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AXPlayerController), 1394113984U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tail1_OneDrive_Desktop_Unreal_Engine_Ability_System_Aura_Source_Aura_Public_Players_XPlayerController_h_1370486087(TEXT("/Script/Aura"),
	Z_CompiledInDeferFile_FID_Users_tail1_OneDrive_Desktop_Unreal_Engine_Ability_System_Aura_Source_Aura_Public_Players_XPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_tail1_OneDrive_Desktop_Unreal_Engine_Ability_System_Aura_Source_Aura_Public_Players_XPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
