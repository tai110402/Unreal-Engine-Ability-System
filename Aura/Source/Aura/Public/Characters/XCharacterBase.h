// Copyright XXX

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "XCharacterBase.generated.h"

class USkeletalMeshComponent;

UCLASS()
class AURA_API AXCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	AXCharacterBase();

protected:
	virtual void BeginPlay() override;
public:
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<USkeletalMeshComponent> WeaponSkeletalMeshComponent;
};
