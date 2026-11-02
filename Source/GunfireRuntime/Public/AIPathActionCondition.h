#pragma once
#include "CoreMinimal.h"
#include "EPathFollowingAction.h"
#include "Condition.h"
#include "AIPathActionCondition.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UAIPathActionCondition : public UCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPathFollowingAction::Type> Action;
    
public:
    UAIPathActionCondition();

};

