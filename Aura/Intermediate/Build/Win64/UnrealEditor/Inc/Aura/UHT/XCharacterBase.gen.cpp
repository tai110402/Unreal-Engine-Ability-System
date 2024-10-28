// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/Characters/XCharacterBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXCharacterBase() {}

// Begin Cross Module References
AURA_API UClass* Z_Construct_UClass_AXCharacterBase();
AURA_API UClass* Z_Construct_UClass_AXCharacterBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References

// Begin Class AXCharacterBase
void AXCharacterBase::StaticRegisterNativesAXCharacterBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AXCharacterBase);
UClass* Z_Construct_UClass_AXCharacterBase_NoRegister()
{
	return AXCharacterBase::StaticClass();
}
struct Z_Construct_UClass_AXCharacterBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/XCharacterBase.h" },
		{ "ModuleRelativePath", "Public/Characters/XCharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponSkeletalMeshComponent_MetaData[] = {
		{ "Category", "XCharacterBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/XCharacterBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponSkeletalMeshComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AXCharacterBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AXCharacterBase_Statics::NewProp_WeaponSkeletalMeshComponent = { "WeaponSkeletalMeshComponent", nullptr, (EPropertyFlags)0x01140000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AXCharacterBase, WeaponSkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponSkeletalMeshComponent_MetaData), NewProp_WeaponSkeletalMeshComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AXCharacterBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXCharacterBase_Statics::NewProp_WeaponSkeletalMeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AXCharacterBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AXCharacterBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AXCharacterBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AXCharacterBase_Statics::ClassParams = {
	&AXCharacterBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AXCharacterBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AXCharacterBase_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AXCharacterBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AXCharacterBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AXCharacterBase()
{
	if (!Z_Registration_Info_UClass_AXCharacterBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AXCharacterBase.OuterSingleton, Z_Construct_UClass_AXCharacterBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AXCharacterBase.OuterSingleton;
}
template<> AURA_API UClass* StaticClass<AXCharacterBase>()
{
	return AXCharacterBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AXCharacterBase);
AXCharacterBase::~AXCharacterBase() {}
// End Class AXCharacterBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_tail1_OneDrive_Desktop_Unreal_Engine_Ability_System_Aura_Source_Aura_Public_Characters_XCharacterBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AXCharacterBase, AXCharacterBase::StaticClass, TEXT("AXCharacterBase"), &Z_Registration_Info_UClass_AXCharacterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AXCharacterBase), 604562999U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tail1_OneDrive_Desktop_Unreal_Engine_Ability_System_Aura_Source_Aura_Public_Characters_XCharacterBase_h_3213590107(TEXT("/Script/Aura"),
	Z_CompiledInDeferFile_FID_Users_tail1_OneDrive_Desktop_Unreal_Engine_Ability_System_Aura_Source_Aura_Public_Characters_XCharacterBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_tail1_OneDrive_Desktop_Unreal_Engine_Ability_System_Aura_Source_Aura_Public_Characters_XCharacterBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS