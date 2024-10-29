// Copyright XXX

#pragma once

#include "CoreMinimal.h"
#include "Characters/XCharacterBase.h"
#include "Interaction/XEnemyInterface.h"
#include "XEnemy.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AXEnemy : public AXCharacterBase, public IXEnemyInterface
{
	GENERATED_BODY()
public:
	AXEnemy();
	virtual void Tick(float DeltaSeconds) override;
	virtual void HighlightActor() override;
	virtual void UnHightlightActor() override;

	UPROPERTY(BlueprintReadWrite)
	bool bIsHighlighted;
};
