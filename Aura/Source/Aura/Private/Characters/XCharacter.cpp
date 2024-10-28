// Copyright XXX


#include "Characters/XCharacter.h"

#include "GameFramework/CharacterMovementComponent.h"

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
