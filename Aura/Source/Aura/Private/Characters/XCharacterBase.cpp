// Copyright XXX


#include "Characters/XCharacterBase.h"

// Sets default values
AXCharacterBase::AXCharacterBase()
{
	PrimaryActorTick.bCanEverTick = false;

	WeaponSkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WeaponSkeletalMeshComponent"));
	WeaponSkeletalMeshComponent->SetupAttachment(GetMesh(), TEXT("WeaponHandSocket"));
	WeaponSkeletalMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

// Called when the game starts or when spawned
void AXCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}



