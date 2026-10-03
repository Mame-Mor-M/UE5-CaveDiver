#pragma once

#include "CoreMinimal.h"
#include "InventoryItem.generated.h"

class UItemDataAsset;

USTRUCT(BlueprintType)
struct FEARCAVE_API FInventoryItem
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<UItemDataAsset> itemData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Quantity = 1;
};

