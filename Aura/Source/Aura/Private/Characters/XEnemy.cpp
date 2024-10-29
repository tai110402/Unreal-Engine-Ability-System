// Copyright XXX


#include "Characters/XEnemy.h"
#include "Aura/Aura.h"

AXEnemy::AXEnemy()
{
	GetMesh()->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);
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
