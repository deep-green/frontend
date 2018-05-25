// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "LoginWidget.generated.h"

/**
 * 
 */
UCLASS()
class DEEPGREEN_API ULoginWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "Login")
		static int checkCredentials(FString name, FString password);

	UFUNCTION(BlueprintCallable, Category = "Register")
		static int registerAccount(FString name, FString password, FString email);
		static int getGuestAccount();
	
	
};
