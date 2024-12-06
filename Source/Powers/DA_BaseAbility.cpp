// Fill out your copyright notice in the Description page of Project Settings.


#include "DA_BaseAbility.h"


FString UDA_BaseAbility::GetIdentifierString() const
{
	return GetPrimaryAssetId().ToString();
}

/**
FPrimaryAssetId UDA_BaseAbility::GetPrimaryAssetId() const
{
	return Super::GetPrimaryAssetId();
}*/