// Copyright XXX


#include "AbilitySystem/XAttributeSet.h"
#include "Net/UnrealNetwork.h"

UXAttributeSet::UXAttributeSet()
{
	InitMaxHealth(100.f);
	InitHealth(100.f);
	InitMaxMana(50.f);
	InitMana(50.f);
}

void UXAttributeSet::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(UXAttributeSet, Health, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UXAttributeSet, MaxHealth, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UXAttributeSet, Mana, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UXAttributeSet, MaxMana, COND_None, REPNOTIFY_Always);
}

void UXAttributeSet::OnRep_Health(const FGameplayAttributeData& OldValue) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UXAttributeSet, Health, OldValue);
	
}

void UXAttributeSet::OnRep_MaxHealth(const FGameplayAttributeData& OldValue) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UXAttributeSet, MaxHealth, OldValue);
	
}

void UXAttributeSet::OnRep_Mana(const FGameplayAttributeData& OldValue) const
{

	GAMEPLAYATTRIBUTE_REPNOTIFY(UXAttributeSet, Mana, OldValue);
	
}

void UXAttributeSet::OnRep_MaxMana(const FGameplayAttributeData& OldValue) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UXAttributeSet, MaxMana, OldValue);
}
