#pragma once

#include "CoreMinimal.h"
#include "InventoryHoldable.generated.h"


USTRUCT(BlueprintType)
struct FEARCAVE_API FInventoryHoldable
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<AActor> ActorBP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Socket;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTransform transform;
	
};