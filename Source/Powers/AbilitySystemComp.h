// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AbilitySystemComp.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class POWERS_API UAbilitySystemComp : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAbilitySystemComp();

protected:
	UPROPERTY(VisibleAnywhere,Category = "Ability System")
		TMap<FString,TSubclassOf<UActorComponent>> AbilitiesMap;
	UPROPERTY(VisibleAnywhere)
		FString CurrentAbility;
	// Called when the game starts
	virtual void BeginPlay() override;
	
public:

	UFUNCTION(BlueprintImplementableEvent)
		void EnterSelectAbility();
	UFUNCTION(BlueprintImplementableEvent)
		void ExitSelectAbility();

	// Abilities
	void UseAbility();
	bool AbilityIsValid()const;

	UFUNCTION(BlueprintImplementableEvent)
		void StartAbility2();
	UFUNCTION(BlueprintImplementableEvent)
		void StopAbility2();
	UFUNCTION(BlueprintImplementableEvent)
		void StartAbility3();
	UFUNCTION(BlueprintImplementableEvent)
		void StopAbility3();
	

	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
