#pragma once

#include "CoreMinimal.h"
#include "ItemDataAsset.h"
#include "QuestItem.generated.h"

USTRUCT(Blueprintable)
struct FEARCAVE_API FQuestItem : public FItemInstancedProperty
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool readable;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool puzzlePiece;
};