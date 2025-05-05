// Made by Inexhaustible Snake

#pragma once

#include "CoreMinimal.h"
#include "Factories/DataAssetFactory.h"
#include "ISRecoilPatternDataAssetFactory.generated.h"

UCLASS()
class ISRECOILPATTERN_API UISRecoilPatternDataAssetFactory : public UDataAssetFactory
{
	GENERATED_BODY()
public:
	UISRecoilPatternDataAssetFactory();
	virtual bool ConfigureProperties() override;
	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
};
