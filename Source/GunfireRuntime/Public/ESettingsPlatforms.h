#pragma once
#include "CoreMinimal.h"
#include "ESettingsPlatforms.generated.h"

UENUM(BlueprintType)
enum class ESettingsPlatforms : uint8 {
    PC = 1,
    XboxSeriesX,
    XboxSeriesS = 4,
    PS5 = 8,
    SteamDeck = 16,
};

