// Made by Inexhaustible Snake

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ISRecoilPatterDataAsset.generated.h"

UCLASS()
class ISRECOILPATTERN_API UISRecoilPatterDataAsset : public UPrimaryDataAsset
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ISRecoilPatterDataAsset")
    TArray<FVector2D> RecoilPoints;
};
