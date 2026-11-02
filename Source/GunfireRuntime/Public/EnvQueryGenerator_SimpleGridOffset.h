#pragma once
#include "CoreMinimal.h"
#include "AIDataProviderFloatValue.h"
#include "EnvQueryGenerator_SimpleGrid.h"
#include "EnvQueryGenerator_SimpleGridOffset.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GUNFIRERUNTIME_API UEnvQueryGenerator_SimpleGridOffset : public UEnvQueryGenerator_SimpleGrid {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue ZOffset;
    
    UEnvQueryGenerator_SimpleGridOffset();

};

