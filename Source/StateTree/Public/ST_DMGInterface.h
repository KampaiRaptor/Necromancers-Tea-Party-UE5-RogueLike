// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ST_DMGInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UST_DMGInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class STATETREE_API IST_DMGInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void DealDMG(APawn* InstigatorPawn, float DamageAmount);
	
};
