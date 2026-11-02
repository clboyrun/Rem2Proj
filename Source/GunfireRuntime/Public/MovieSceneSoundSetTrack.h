#pragma once
#include "CoreMinimal.h"
#include "MovieSceneNameableTrack.h"
#include "MovieSceneTrackTemplateProducer.h"
#include "MovieSceneSoundSetTrack.generated.h"

class UMovieSceneSection;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UMovieSceneSoundSetTrack : public UMovieSceneNameableTrack/*, public IMovieSceneTrackTemplateProducer*/ {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMovieSceneSection*> SoundSetSections;
    
public:
    UMovieSceneSoundSetTrack();


    // Fix for true pure virtual functions not being implemented
};

