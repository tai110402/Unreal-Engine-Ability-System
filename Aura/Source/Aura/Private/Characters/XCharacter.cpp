// Copyright XXX


#include "Characters/XCharacter.h"

#include "AbilitySystemComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Players/XPlayerState.h"

AXCharacter::AXCharacter()
{
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->bConstrainToPlane = true;
	GetCharacterMovement()->bSnapToPlaneAtStart = true;

	GetCharacterMovement()->RotationRate = FRotator(0, 700, 0);

	bUseControllerRotationRoll = false;
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
}

void AXCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	// Init Ability Actor Infor for the Server
	InitAbilityActorInfor();
}

void AXCharacter::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();

	// Init Ability Actor Infor for the Client
	InitAbilityActorInfor();
}

void AXCharacter::InitAbilityActorInfor()
{
	AXPlayerState* XPlayerState = GetPlayerState<AXPlayerState>();
	check(XPlayerState);
	AbilitySystemComponent = XPlayerState->GetAbilitySystemComponent();
	AttributeSet = XPlayerState->GetAttributeSet();
	AbilitySystemComponent->InitAbilityActorInfo(XPlayerState, this);
}
