// Copyright by Alexey Guchmazov/Inexhaustible Snake 2025. All rights reserved.

#include "Widgets/ISRecoilPatternWidget.h"
#include "EditorDialogLibrary.h"
#include "EditorAssetLibrary.h"
#include "RecoilData/ISRecoilPatternDataAssetFactory.h"

void UISRecoilPatternWidget::ShowEditorDialogueMessage(const FText& Title, const FText& Message)
{
    UEditorDialogLibrary::ShowMessage(Title, Message, EAppMsgType::Ok, EAppReturnType::Continue);
   
}

UISRecoilPatternDataAssetFactory* UISRecoilPatternWidget::CreateDataAssetFactory() const
{
    return NewObject<UISRecoilPatternDataAssetFactory>(
        reinterpret_cast<UISRecoilPatternDataAssetFactory*>(GetTransientPackage()), UISRecoilPatternDataAssetFactory::StaticClass());
}

UObject* UISRecoilPatternWidget::LoadAsset(const FString& AssetPath)
{
    return UEditorAssetLibrary::LoadAsset(AssetPath);
}
