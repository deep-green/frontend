// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "NewGameWidget.generated.h"

/**
 * 
 */
UCLASS()
class DEEPGREEN_API UNewGameWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "NewGame")
	static int createNewGame();
	
	UFUNCTION(BlueprintCallable, Category = "MenuFunctions")
	int stepBack();
	UFUNCTION(BlueprintCallable, Category = "MenuFunctions")
	int stepForth();

private:
	/*
	0 = Main Menu
	1 = Select Enemytype
	2 = Select AI Type
	11 = Select real player type
	21 = select color
	3 = Read image
	*/
	int steps;
};
