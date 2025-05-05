// Made by Inexhaustible Snake
#pragma once

#include "CoreMinimal.h"
#include "EditorUtilityWidget.h"
#include "ISRecoilPatternWidget.generated.h"

class UISRecoilPatternDataAssetFactory;

UCLASS()
class ISRECOILPATTERN_API UISRecoilPatternWidget : public UEditorUtilityWidget
{
    GENERATED_BODY()

protected:
    UFUNCTION(BlueprintCallable, Category = "ISRecoilPatternWidget")
    void ShowEditorDialogueMessage(const FText& Title, const FText& Message);

    UFUNCTION(BlueprintCallable, Category = "ISRecoilPatternWidget")
    UISRecoilPatternDataAssetFactory* CreateDataAssetFactory() const;
};
