// Fill out your copyright notice in the Description page of Project Settings.


#include "ST_HealthComponent.h"

#include "ST_DMGInterface.h"

// Sets default values for this component's properties
UST_HealthComponent::UST_HealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	Health = 100;
	MaxHealth = 100;
	// ...
}


// Called when the game starts
void UST_HealthComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UST_HealthComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UST_HealthComponent::DealDamage(int Amount)
{
	Health = Health - Amount;
	if (Health<=0)
	{
		IST_DMGInterface::Execute_TriggerDeath(GetOwner());
	}
}

