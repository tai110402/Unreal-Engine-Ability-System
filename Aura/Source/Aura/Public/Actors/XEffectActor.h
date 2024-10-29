// Copyright XXX

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "XEffectActor.generated.h"

class USphereComponent;

UCLASS()
class AURA_API AXEffectActor : public AActor
{
	GENERATED_BODY()
	
public:
	AXEffectActor();

protected:
	//~ Begin Engine API
	virtual void BeginPlay() override;
	virtual void PostInitializeComponents() override;
	//~ End Engine API

private:
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* StaticMeshComponent;

	UPROPERTY(VisibleAnywhere)
	USphereComponent* SphereComponent;

	UFUNCTION()
	virtual void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);

	UFUNCTION()
	virtual void OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
};
