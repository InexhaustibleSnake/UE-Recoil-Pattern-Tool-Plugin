// Made by Inexhaustible Snake

#include "Widgets/ISRecoilPatternWidget.h"
#include "EditorDialogLibrary.h"
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
