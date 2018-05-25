// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "LoadGameWidget.generated.h"

/**
 * 
 */
UCLASS()
class DEEPGREEN_API ULoadGameWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "LoadGame")
		static int loadGame();
	UFUNCTION(BlueprintCallable, Category = "MenuFunctions")
		int stepBack();
	UFUNCTION(BlueprintCallable, Category = "MenuFunctions")
		int stepForth();
	
	
};
