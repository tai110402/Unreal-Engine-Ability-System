// Copyright XXX


#include "Players/XPlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "Interaction/XEnemyInterface.h"

AXPlayerController::AXPlayerController()
{
	bReplicates = true;
}

void AXPlayerController::BeginPlay()
{
	Super::BeginPlay();
	check(AuraInputMappingContext);
	UEnhancedInputLocalPlayerSubsystem* EnhancedInputLocalPlayerSubsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());
	check(EnhancedInputLocalPlayerSubsystem);
	EnhancedInputLocalPlayerSubsystem->AddMappingContext(AuraInputMappingContext, 0);

	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Default;
	FInputModeGameAndUI InputModeGameAndUI;
	InputModeGameAndUI.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
	InputModeGameAndUI.SetHideCursorDuringCapture(false);
	SetInputMode(InputModeGameAndUI);
}

void AXPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(InputComponent))
	{
		EnhancedInputComponent->BindAction(MoveInputAction, ETriggerEvent::Triggered, this, &AXPlayerController::Move);
	}
}

void AXPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	CursorTrace();
}

void AXPlayerController::Move(const FInputActionValue& Value)
{
	if (APawn* ControlledPawn = GetPawn<APawn>())
	{
		const FVector2d InputValue = Value.Get<FVector2d>();
		const FRotator ControllerYawRotation = FRotator(0, GetControlRotation().Yaw, 0);
		const FVector ForwardVector = FRotationMatrix(ControllerYawRotation).GetUnitAxis(EAxis::X);
		const FVector RightVector = FRotationMatrix(ControllerYawRotation).GetUnitAxis(EAxis::Y);
		ControlledPawn->AddMovementInput(ForwardVector, InputValue.Y);
		ControlledPawn->AddMovementInput(RightVector, InputValue.X);
	}
}

void AXPlayerController::CursorTrace()
{
	FHitResult HitResult;
	GetHitResultUnderCursor(ECC_Visibility, false, HitResult);
	if (HitResult.bBlockingHit)
	{
		ActorUnderCursorLastFrame = ActorUnderCursorThisFrame;
		ActorUnderCursorThisFrame = HitResult.GetActor();
	}

	if (ActorUnderCursorThisFrame == nullptr)
	{
		if (ActorUnderCursorLastFrame == nullptr)
		{
			// Do Nothing
		}
		else
		{
			ActorUnderCursorLastFrame->UnHightlightActor();
		}
	}
	else
	{
		if (ActorUnderCursorLastFrame == nullptr)
		{
			ActorUnderCursorThisFrame->HighlightActor();
		}
		else
		{
			if (ActorUnderCursorLastFrame == ActorUnderCursorThisFrame)
			{
				// Do Nothing
			}
			else
			{
				ActorUnderCursorThisFrame->HighlightActor();
				ActorUnderCursorLastFrame->UnHightlightActor();
				
			}
		}
	}
}

