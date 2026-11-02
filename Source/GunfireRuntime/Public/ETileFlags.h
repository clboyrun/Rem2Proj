#pragma once
#include "CoreMinimal.h"
#include "ETileFlags.generated.h"

UENUM(BlueprintType)
enum class ETileFlags : uint8 {
    AllowSpawns = 1,
    AllowQuests,
    NoNavValidate = 4,
    AllFlags = 255,
};

