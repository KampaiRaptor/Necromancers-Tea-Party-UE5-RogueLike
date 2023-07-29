// Fill out your copyright notice in the Description page of Project Settings.


#include "ST_PlayerBase.h"

// Sets default values
AST_PlayerBase::AST_PlayerBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AST_PlayerBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AST_PlayerBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AST_PlayerBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

