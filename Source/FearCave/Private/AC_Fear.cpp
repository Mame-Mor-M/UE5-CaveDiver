// Fill out your copyright notice in the Description page of Project Settings.


#include "AC_Fear.h"

// Sets default values for this component's properties
UAC_Fear::UAC_Fear()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true; // Enables ticking

	// ...
}


// Called when the game starts
void UAC_Fear::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UAC_Fear::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (binSafeZone) {
		DecreaseFear(DeltaTime);
	}
	else {
		IncreaseFear(DeltaTime);
	}

}

void UAC_Fear::IncreaseFear(double deltaTime) {
	currentFear = FMath::Clamp(currentFear += fearChangeRate * deltaTime, 0, 100);
}

void UAC_Fear::DisableFear() {
	fearChangeRate = 0;
}

void UAC_Fear::ChangeFearRate(bool torchOn) {
	if (torchOn && !binSafeZone) {
		fearChangeRate = 1.0;
		printf("Torch On");
	}
	else if (!torchOn && !binSafeZone) {
		fearChangeRate = 3.0;
		printf("No light! Stress increasing rapidly");
	}

	else if (binSafeZone){
		fearChangeRate = 2.0;
		printf("In a safe zone, stress decreasing");
	}
}

void UAC_Fear::DecreaseFear(double deltaTime) {
	currentFear = FMath::Clamp(currentFear -= fearChangeRate * deltaTime, 0, 100);
}

