// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/Characters/XEnemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXEnemy() {}

// Begin Cross Module References
AURA_API UClass* Z_Construct_UClass_AXCharacterBase();
AURA_API UClass* Z_Construct_UClass_AXEnemy();
AURA_API UClass* Z_Construct_UClass_AXEnemy_NoRegister();
AURA_API UClass* Z_Construct_UClass_UXEnemyInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References

// Begin Class AXEnemy
void AXEnemy::StaticRegisterNativesAXEnemy()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AXEnemy);
UClass* Z_Construct_UClass_AXEnemy_NoRegister()
{
	return AXEnemy::StaticClass();
}
struct Z_Construct_UClass_AXEnemy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/XEnemy.h" },
		{ "ModuleRelativePath", "Public/Characters/XEnemy.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AXEnemy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AXEnemy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AXCharacterBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AXEnemy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AXEnemy_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UXEnemyInterface_NoRegister, (int32)VTABLE_OFFSET(AXEnemy, IXEnemyInterface), false },  // 1242220180
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AXEnemy_Statics::ClassParams = {
	&AXEnemy::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AXEnemy_Statics::Class_MetaDataParams), Z_Construct_UClass_AXEnemy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AXEnemy()
{
	if (!Z_Registration_Info_UClass_AXEnemy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AXEnemy.OuterSingleton, Z_Construct_UClass_AXEnemy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AXEnemy.OuterSingleton;
}
template<> AURA_API UClass* StaticClass<AXEnemy>()
{
	return AXEnemy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AXEnemy);
AXEnemy::~AXEnemy() {}
// End Class AXEnemy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_tail1_OneDrive_Desktop_Unreal_Engine_Ability_System_Aura_Source_Aura_Public_Characters_XEnemy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AXEnemy, AXEnemy::StaticClass, TEXT("AXEnemy"), &Z_Registration_Info_UClass_AXEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AXEnemy), 2745706898U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tail1_OneDrive_Desktop_Unreal_Engine_Ability_System_Aura_Source_Aura_Public_Characters_XEnemy_h_447108959(TEXT("/Script/Aura"),
	Z_CompiledInDeferFile_FID_Users_tail1_OneDrive_Desktop_Unreal_Engine_Ability_System_Aura_Source_Aura_Public_Characters_XEnemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_tail1_OneDrive_Desktop_Unreal_Engine_Ability_System_Aura_Source_Aura_Public_Characters_XEnemy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
