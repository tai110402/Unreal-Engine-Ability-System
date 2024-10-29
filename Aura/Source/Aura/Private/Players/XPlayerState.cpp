// Copyright XXX


#include "Players/XPlayerState.h"

#include "AbilitySystemComponent.h"
#include "AbilitySystem/XAbilitySystemComponent.h"
#include "AbilitySystem/XAttributeSet.h"

AXPlayerState::AXPlayerState()
{
	NetUpdateFrequency = 100.f;
	
	AbilitySystemComponent = CreateDefaultSubobject<UXAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);
	
	AttributeSet = CreateDefaultSubobject<UXAttributeSet>(TEXT("AttributeSet"));
	
}


