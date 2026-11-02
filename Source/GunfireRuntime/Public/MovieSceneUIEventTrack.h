#pragma once
#include "CoreMinimal.h"
#include "MovieSceneNameableTrack.h"
#include "MovieSceneTrackTemplateProducer.h"
#include "MovieSceneUIEventTrack.generated.h"

class UMovieSceneSection;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UMovieSceneUIEventTrack : public UMovieSceneNameableTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMovieSceneSection*> UIEventSections;
    
public:
    UMovieSceneUIEventTrack();


    // Fix for true pure virtual functions not being implemented
};

