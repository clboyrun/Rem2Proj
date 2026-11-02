#pragma once
#include "CoreMinimal.h"
#include "BlueprintSessionResult.h"
#include "OnOnlineSessionsFoundDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnOnlineSessionsFound, const TArray<FBlueprintSessionResult>&, Results);

