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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsHighlighted_MetaData[] = {
		{ "Category", "XEnemy" },
		{ "ModuleRelativePath", "Public/Characters/XEnemy.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsHighlighted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHighlighted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AXEnemy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_AXEnemy_Statics::NewProp_bIsHighlighted_SetBit(void* Obj)
{
	((AXEnemy*)Obj)->bIsHighlighted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AXEnemy_Statics::NewProp_bIsHighlighted = { "bIsHighlighted", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AXEnemy), &Z_Construct_UClass_AXEnemy_Statics::NewProp_bIsHighlighted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsHighlighted_MetaData), NewProp_bIsHighlighted_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AXEnemy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXEnemy_Statics::NewProp_bIsHighlighted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AXEnemy_Statics::PropPointers) < 2048);
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
	Z_Construct_UClass_AXEnemy_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AXEnemy_Statics::PropPointers),
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
		{ Z_Construct_UClass_AXEnemy, AXEnemy::StaticClass, TEXT("AXEnemy"), &Z_Registration_Info_UClass_AXEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AXEnemy), 1857774931U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tail1_OneDrive_Desktop_Unreal_Engine_Ability_System_Aura_Source_Aura_Public_Characters_XEnemy_h_3023685949(TEXT("/Script/Aura"),
	Z_CompiledInDeferFile_FID_Users_tail1_OneDrive_Desktop_Unreal_Engine_Ability_System_Aura_Source_Aura_Public_Characters_XEnemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_tail1_OneDrive_Desktop_Unreal_Engine_Ability_System_Aura_Source_Aura_Public_Characters_XEnemy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
