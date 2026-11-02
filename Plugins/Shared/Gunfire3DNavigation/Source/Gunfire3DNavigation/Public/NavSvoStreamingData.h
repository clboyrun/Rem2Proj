#pragma once
#include "CoreMinimal.h"
#include "NavigationDataChunk.h"
#include "NavSvoStreamingData.generated.h"

class ULevel;

UCLASS(Blueprintable)
class GUNFIRE3DNAVIGATION_API UNavSvoStreamingData : public UNavigationDataChunk {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULevel* Level;
    
    UNavSvoStreamingData();

};

