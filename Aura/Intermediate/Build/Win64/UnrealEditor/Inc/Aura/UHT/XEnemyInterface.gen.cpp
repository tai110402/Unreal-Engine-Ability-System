// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/Interaction/XEnemyInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXEnemyInterface() {}

// Begin Cross Module References
AURA_API UClass* Z_Construct_UClass_UXEnemyInterface();
AURA_API UClass* Z_Construct_UClass_UXEnemyInterface_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References

// Begin Interface UXEnemyInterface
void UXEnemyInterface::StaticRegisterNativesUXEnemyInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UXEnemyInterface);
UClass* Z_Construct_UClass_UXEnemyInterface_NoRegister()
{
	return UXEnemyInterface::StaticClass();
}
struct Z_Construct_UClass_UXEnemyInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/XEnemyInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IXEnemyInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UXEnemyInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UXEnemyInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UXEnemyInterface_Statics::ClassParams = {
	&UXEnemyInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UXEnemyInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UXEnemyInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UXEnemyInterface()
{
	if (!Z_Registration_Info_UClass_UXEnemyInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UXEnemyInterface.OuterSingleton, Z_Construct_UClass_UXEnemyInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UXEnemyInterface.OuterSingleton;
}
template<> AURA_API UClass* StaticClass<UXEnemyInterface>()
{
	return UXEnemyInterface::StaticClass();
}
UXEnemyInterface::UXEnemyInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UXEnemyInterface);
UXEnemyInterface::~UXEnemyInterface() {}
// End Interface UXEnemyInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_tail1_OneDrive_Desktop_Unreal_Engine_Ability_System_Aura_Source_Aura_Public_Interaction_XEnemyInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UXEnemyInterface, UXEnemyInterface::StaticClass, TEXT("UXEnemyInterface"), &Z_Registration_Info_UClass_UXEnemyInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UXEnemyInterface), 1242220180U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tail1_OneDrive_Desktop_Unreal_Engine_Ability_System_Aura_Source_Aura_Public_Interaction_XEnemyInterface_h_3152058188(TEXT("/Script/Aura"),
	Z_CompiledInDeferFile_FID_Users_tail1_OneDrive_Desktop_Unreal_Engine_Ability_System_Aura_Source_Aura_Public_Interaction_XEnemyInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_tail1_OneDrive_Desktop_Unreal_Engine_Ability_System_Aura_Source_Aura_Public_Interaction_XEnemyInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
