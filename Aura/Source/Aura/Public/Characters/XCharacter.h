// Copyright XXX

#pragma once

#include "CoreMinimal.h"
#include "Characters/XCharacterBase.h"
#include "XCharacter.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AXCharacter : public AXCharacterBase
{
	GENERATED_BODY()
public:
	AXCharacter();
	//~ Begin Engine API
	virtual void PossessedBy(AController* NewController) override;
	virtual void OnRep_PlayerState() override;
	//~ End Engine API

private:
	void InitAbilityActorInfor();
};
