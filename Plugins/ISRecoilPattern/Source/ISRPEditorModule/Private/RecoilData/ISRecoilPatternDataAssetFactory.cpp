// Copyright by Alexey Guchmazov/Inexhaustible Snake 2025. All rights reserved.

#include "RecoilData/ISRecoilPatternDataAssetFactory.h"
#include "RecoilData/ISRecoilPatterDataAsset.h"

UISRecoilPatternDataAssetFactory::UISRecoilPatternDataAssetFactory()
{
    bCreateNew = true;
    bEditAfterNew = true;
    SupportedClass = UISRecoilPatterDataAsset::StaticClass();
}

bool UISRecoilPatternDataAssetFactory::ConfigureProperties()
{
    return true;
}

UObject* UISRecoilPatternDataAssetFactory::FactoryCreateNew(
    UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
    return NewObject<UISRecoilPatterDataAsset>(InParent, Class, Name, Flags);
}
