// Fill out your copyright notice in the Description page of Project Settings.

#include "LoginWidget.h"

int ULoginWidget::checkCredentials(FString name, FString password)
{
	if (name == "test" & password == "1234")
	{
		return 0;
	}
	else
	{
		return 1;
	}

}

int ULoginWidget::registerAccount(FString name, FString password, FString email)
{
	return 0;
}

int ULoginWidget::getGuestAccount()
{
	return 0;
}
