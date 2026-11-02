#pragma once
#include "CoreMinimal.h"
#include "ESlateVisibility.h"
#include "OnRootVisibilityUpdateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRootVisibilityUpdate, ESlateVisibility, NewVisibility, ESlateVisibility, PreviousVisibility);

