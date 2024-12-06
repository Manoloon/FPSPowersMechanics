// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
//#include "Styling/SlateBrush.h"
#include "DA_BaseAbility.generated.h"

/**
 * 
 */
UENUM()
enum class EActivationType
{
	Toggle,
	Hold,
	OneTimeUse
};
UCLASS(Abstract, BlueprintType)
class POWERS_API UDA_BaseAbility : public UPrimaryDataAsset
{
	GENERATED_BODY()
public:
	UDA_BaseAbility() : Cost(0)
		, MaxLevel(1)
		, AbilityLevel(1)
		, ActivateType(EActivationType::Toggle)
	 {}
	
	// Cost of health or whatever to use this ability
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Item)
	int32 Cost;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Max)
	int32 MaxLevel=1;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Max)
	int32 AbilityLevel;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Item)
	EActivationType ActivateType;

	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = PowerItem)
	FText ItemName;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Item)
	FText ItemDescription;
	//UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Item)
	//FSlateBrush ItemIcon;

	
	
	
	// activate the ability 
	//UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Max)
	//TSubclassOf<UGameplayAbility> GrantedAbility;
	
	
	
	/** Returns the logical name, equivalent to the primary asset id */
	UFUNCTION(BlueprintCallable, Category = Item)
	FString GetIdentifierString() const;

	/** Overridden to use saved type */
//	virtual FPrimaryAssetId GetPrimaryAssetId() const override;
	
};
