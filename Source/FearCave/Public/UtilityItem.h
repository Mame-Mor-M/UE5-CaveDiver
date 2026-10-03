#pragma once

#include "CoreMinimal.h"
#include "ItemDataAsset.h"
#include "UtilityItem.generated.h"


USTRUCT(Blueprintable)
struct FEARCAVE_API FUtilityItem : public FItemInstancedProperty
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float charge = 0.f;
};
