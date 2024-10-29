// Copyright XXX


#include "Actors/XEffectActor.h"

#include "AbilitySystemComponent.h"
#include "AbilitySystemInterface.h"
#include "AbilitySystem/XAttributeSet.h"
#include "Components/SphereComponent.h"

AXEffectActor::AXEffectActor()
{
	PrimaryActorTick.bCanEverTick = false;

	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
	StaticMeshComponent->SetCollisionResponseToAllChannels(ECR_Ignore);
	SetRootComponent(StaticMeshComponent);

	SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	SphereComponent->SetupAttachment(RootComponent);
}

void AXEffectActor::BeginPlay()
{
	Super::BeginPlay();
	
}

void AXEffectActor::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	SphereComponent->OnComponentBeginOverlap.AddDynamic(this, &AXEffectActor::OnBeginOverlap);
	SphereComponent->OnComponentEndOverlap.AddDynamic(this, &AXEffectActor::OnEndOverlap);
}

void AXEffectActor::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
                                   UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	GEngine->AddOnScreenDebugMessage(1, 1, FColor::Red, "BEGIN Overlapped Actor");

	// TODO: Change this to apply a Gameplay Effect
	if (IAbilitySystemInterface* ASIActor = Cast<IAbilitySystemInterface>(OtherActor))
	{
		const UXAttributeSet* XAttributeSet = Cast<UXAttributeSet>(ASIActor->GetAbilitySystemComponent()->GetAttributeSet(UXAttributeSet::StaticClass()));
		UXAttributeSet* MutableXAttributeSet = const_cast<UXAttributeSet*>(XAttributeSet);
		MutableXAttributeSet->SetHealth(XAttributeSet->GetHealth() + (25));
		Destroy();
	}
}

void AXEffectActor::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	GEngine->AddOnScreenDebugMessage(2, 1, FColor::Green, "END Overlapped Actor");
}

