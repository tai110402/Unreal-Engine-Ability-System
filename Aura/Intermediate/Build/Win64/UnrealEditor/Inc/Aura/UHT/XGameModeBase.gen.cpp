// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/Games/XGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXGameModeBase() {}

// Begin Cross Module References
AURA_API UClass* Z_Construct_UClass_AXGameModeBase();
AURA_API UClass* Z_Construct_UClass_AXGameModeBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References

// Begin Class AXGameModeBase
void AXGameModeBase::StaticRegisterNativesAXGameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AXGameModeBase);
UClass* Z_Construct_UClass_AXGameModeBase_NoRegister()
{
	return AXGameModeBase::StaticClass();
}
struct Z_Construct_UClass_AXGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Games/XGameModeBase.h" },
		{ "ModuleRelativePath", "Public/Games/XGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AXGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AXGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AXGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AXGameModeBase_Statics::ClassParams = {
	&AXGameModeBase::StaticClass,
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
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AXGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AXGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AXGameModeBase()
{
	if (!Z_Registration_Info_UClass_AXGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AXGameModeBase.OuterSingleton, Z_Construct_UClass_AXGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AXGameModeBase.OuterSingleton;
}
template<> AURA_API UClass* StaticClass<AXGameModeBase>()
{
	return AXGameModeBase::StaticClass();
}
AXGameModeBase::AXGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AXGameModeBase);
AXGameModeBase::~AXGameModeBase() {}
// End Class AXGameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_tail1_OneDrive_Desktop_Unreal_Engine_Ability_System_Aura_Source_Aura_Public_Games_XGameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AXGameModeBase, AXGameModeBase::StaticClass, TEXT("AXGameModeBase"), &Z_Registration_Info_UClass_AXGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AXGameModeBase), 1408590843U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tail1_OneDrive_Desktop_Unreal_Engine_Ability_System_Aura_Source_Aura_Public_Games_XGameModeBase_h_725011886(TEXT("/Script/Aura"),
	Z_CompiledInDeferFile_FID_Users_tail1_OneDrive_Desktop_Unreal_Engine_Ability_System_Aura_Source_Aura_Public_Games_XGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_tail1_OneDrive_Desktop_Unreal_Engine_Ability_System_Aura_Source_Aura_Public_Games_XGameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
