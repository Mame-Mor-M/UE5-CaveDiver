#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "StructUtils/InstancedStruct.h"
#include "InventoryHoldable.h"
#include "InventoryTypes.h"
#include "ItemDataAsset.generated.h"

USTRUCT()
struct FEARCAVE_API FItemInstancedProperty
{
    GENERATED_BODY()
};

UCLASS(Blueprintable)
class FEARCAVE_API UItemDataAsset : public UPrimaryDataAsset
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    FName ID;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    EInventoryTypes ItemType = EInventoryTypes::Utility;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    FText Name;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    FText Description;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    UTexture2D* Icon;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    FInventoryHoldable HoldableSettings;

    UPROPERTY(EditAnywhere, meta = (BaseStruct = "/Script/FearCave.ItemInstancedProperty", ExcludeBaseStruct))
    TArray<FInstancedStruct> ItemProperties;
};