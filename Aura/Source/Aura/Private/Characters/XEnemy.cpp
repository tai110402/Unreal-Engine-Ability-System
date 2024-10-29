// Copyright XXX


#include "Characters/XEnemy.h"

#include "AbilitySystemComponent.h"
#include "AbilitySystem/XAbilitySystemComponent.h"
#include "AbilitySystem/XAttributeSet.h"
#include "Aura/Aura.h"

AXEnemy::AXEnemy()
{
	GetMesh()->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);

	AbilitySystemComponent = CreateDefaultSubobject<UXAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Minimal);
	
	AttributeSet = CreateDefaultSubobject<UXAttributeSet>(TEXT("AttributeSet"));
}

void AXEnemy::BeginPlay()
{
	Super::BeginPlay();
	// Init owner and avatar for AbilitySystemComponent
	AbilitySystemComponent->InitAbilityActorInfo(this, this);
}

void AXEnemy::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
}

void AXEnemy::HighlightActor()
{
	GetMesh()->SetRenderCustomDepth(true);
	GetMesh()->SetCustomDepthStencilValue(CUSTEM_DEPTH_RED);
	WeaponSkeletalMeshComponent->SetRenderCustomDepth(true);
	WeaponSkeletalMeshComponent->SetCustomDepthStencilValue(CUSTEM_DEPTH_RED);
}

void AXEnemy::UnHightlightActor()
{
	GetMesh()->SetRenderCustomDepth(false);
	WeaponSkeletalMeshComponent->SetRenderCustomDepth(false);
}


