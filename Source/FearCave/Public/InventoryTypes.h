#pragma once

#include "CoreMinimal.h"
#include "InventoryTypes.generated.h"


UENUM(BlueprintType)
enum class EInventoryTypes : uint8 {
	Utility,
	Resource,
	QuestItems
};