// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/Characters/XCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXCharacter() {}

// Begin Cross Module References
AURA_API UClass* Z_Construct_UClass_AXCharacter();
AURA_API UClass* Z_Construct_UClass_AXCharacter_NoRegister();
AURA_API UClass* Z_Construct_UClass_AXCharacterBase();
UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References

// Begin Class AXCharacter
void AXCharacter::StaticRegisterNativesAXCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AXCharacter);
UClass* Z_Construct_UClass_AXCharacter_NoRegister()
{
	return AXCharacter::StaticClass();
}
struct Z_Construct_UClass_AXCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/XCharacter.h" },
		{ "ModuleRelativePath", "Public/Characters/XCharacter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AXCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AXCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AXCharacterBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AXCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AXCharacter_Statics::ClassParams = {
	&AXCharacter::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AXCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AXCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AXCharacter()
{
	if (!Z_Registration_Info_UClass_AXCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AXCharacter.OuterSingleton, Z_Construct_UClass_AXCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AXCharacter.OuterSingleton;
}
template<> AURA_API UClass* StaticClass<AXCharacter>()
{
	return AXCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AXCharacter);
AXCharacter::~AXCharacter() {}
// End Class AXCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_tail1_OneDrive_Desktop_Unreal_Engine_Ability_System_Aura_Source_Aura_Public_Characters_XCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AXCharacter, AXCharacter::StaticClass, TEXT("AXCharacter"), &Z_Registration_Info_UClass_AXCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AXCharacter), 1004160458U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tail1_OneDrive_Desktop_Unreal_Engine_Ability_System_Aura_Source_Aura_Public_Characters_XCharacter_h_3869985088(TEXT("/Script/Aura"),
	Z_CompiledInDeferFile_FID_Users_tail1_OneDrive_Desktop_Unreal_Engine_Ability_System_Aura_Source_Aura_Public_Characters_XCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_tail1_OneDrive_Desktop_Unreal_Engine_Ability_System_Aura_Source_Aura_Public_Characters_XCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
