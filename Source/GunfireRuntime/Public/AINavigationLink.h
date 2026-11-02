#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NavigationLinkBase.h"
#include "AINavigationLink.generated.h"

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FAINavigationLink : public FNavigationLinkBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Left;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Right;
    
    FAINavigationLink();
};

