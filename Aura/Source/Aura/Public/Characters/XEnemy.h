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
	
	//~ Begin Engine API
	virtual void Tick(float DeltaSeconds) override;
	//~ End Engine API

	//~ Begin Enemy Interface
	virtual void HighlightActor() override;
	virtual void UnHightlightActor() override;
	//~ End Enemy Interface
	
protected:
	//~ Begin Engine API
	virtual void BeginPlay() override;
	//~ End Engine API
};
