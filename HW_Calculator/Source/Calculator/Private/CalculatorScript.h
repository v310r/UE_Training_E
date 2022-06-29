// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/TextBlock.h"
#include "Components/Button.h"
#include "Components/EditableTextBox.h"

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CalculatorScript.generated.h"

/**
 * 
 */
UCLASS()
class UCalculatorScript : public UUserWidget
{
	GENERATED_BODY()

private:
	virtual void NativeConstruct() override;

	UPROPERTY(meta = (BindWidget))
		UTextBlock* AnswerValueLabel;

	UPROPERTY(meta = (BindWidget))
		UButton* PlusButton;

	UPROPERTY(meta = (BindWidget))
		UButton* MinusButton;

	UPROPERTY(meta = (BindWidget))
		UButton* MultiplyButton;

	UPROPERTY(meta = (BindWidget))
		UButton* DivideButton;

	UPROPERTY(meta = (BindWidget))
		UEditableTextBox* InputBox;

	UPROPERTY(meta = (BindWidget))
		UButton* ResetButton;

	UFUNCTION()
		void OnPlusButtonClicked();

	UFUNCTION()
		void OnMinusButtonClicked();

	UFUNCTION()
		void OnMultiplyButtonClicked();

	UFUNCTION()
		void OnDivideButtonClicked();

	UFUNCTION()
		void OnResetButtonClicked();
};
