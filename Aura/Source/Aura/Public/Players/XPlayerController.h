// Copyright XXX

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "XPlayerController.generated.h"


/**
 * 
 */
class UInputMappingContext;
class UInputAction;
class IXEnemyInterface;
struct FInputActionValue;

UCLASS()
class AURA_API AXPlayerController : public APlayerController
{
	GENERATED_BODY()
public:
	AXPlayerController();
	virtual void SetupInputComponent() override;
	virtual void Tick(float DeltaTime) override;
protected:
	virtual void BeginPlay() override;
private:
	UPROPERTY(EditAnywhere)
	TObjectPtr<UInputMappingContext> AuraInputMappingContext;
	UPROPERTY(EditAnywhere)
	TObjectPtr<UInputAction> MoveInputAction;

	TScriptInterface<IXEnemyInterface> ActorUnderCursorThisFrame;
	TScriptInterface<IXEnemyInterface> ActorUnderCursorLastFrame;

	void Move(const FInputActionValue& Value);
	void CursorTrace();
};
