// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ST_DMGInterface.h"
#include "GameFramework/Character.h"
#include "ST_EnemyBase.generated.h"

UCLASS()
class STATETREE_API AST_EnemyBase : public ACharacter, public IST_DMGInterface
{
	GENERATED_BODY()


public:
	// Sets default values for this character's properties
	AST_EnemyBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
