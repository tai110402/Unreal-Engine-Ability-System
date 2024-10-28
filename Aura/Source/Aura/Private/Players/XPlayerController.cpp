// Copyright XXX


#include "Players/XPlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"

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

