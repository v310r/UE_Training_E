// Fill out your copyright notice in the Description page of Project Settings.


#include "CalculatorScript.h"


void UCalculatorScript::NativeConstruct()
{
	UE_LOG(LogTemp, Warning, TEXT("NativeConstruct begin"));
	Super::NativeConstruct();

	AnswerValueLabel->SetText(FText::AsNumber(0.0f));

	PlusButton->OnClicked.AddUniqueDynamic(this, &UCalculatorScript::OnPlusButtonClicked);
	MinusButton->OnClicked.AddUniqueDynamic(this, &UCalculatorScript::OnMinusButtonClicked);
	MultiplyButton->OnClicked.AddUniqueDynamic(this, &UCalculatorScript::OnMultiplyButtonClicked);
	DivideButton->OnClicked.AddUniqueDynamic(this, &UCalculatorScript::OnDivideButtonClicked);

	ResetButton->OnClicked.AddUniqueDynamic(this, &UCalculatorScript::OnResetButtonClicked);

	UE_LOG(LogTemp, Warning, TEXT("NativeConstruct end"));
}


void UCalculatorScript::OnPlusButtonClicked()
{
	if ((InputBox->GetText().IsEmpty() == false) && InputBox->GetText().IsNumeric())
	{
		const float inputValue = FCString::Atof(*InputBox->GetText().ToString());
		const float previousAnswer = FCString::Atof(*AnswerValueLabel->GetText().ToString());
		AnswerValueLabel->SetText(FText::AsNumber(previousAnswer + inputValue));
		UE_LOG(LogTemp, Warning, TEXT("added: %f + %f = %f"), previousAnswer, inputValue, previousAnswer + inputValue);
	}
}

void UCalculatorScript::OnMinusButtonClicked()
{
	if ((InputBox->GetText().IsEmpty() == false) && InputBox->GetText().IsNumeric())
	{
		const float inputValue = FCString::Atof(*InputBox->GetText().ToString());
		const float previousAnswer = FCString::Atof(*AnswerValueLabel->GetText().ToString());
		AnswerValueLabel->SetText(FText::AsNumber(previousAnswer - inputValue));
		UE_LOG(LogTemp, Warning, TEXT("subtracted: %f - %f = %f"), previousAnswer, inputValue, previousAnswer - inputValue);
	}
}

void UCalculatorScript::OnMultiplyButtonClicked()
{
	if ((InputBox->GetText().IsEmpty() == false) && InputBox->GetText().IsNumeric())
	{
		const float inputValue = FCString::Atof(*InputBox->GetText().ToString());
		const float previousAnswer = FCString::Atof(*AnswerValueLabel->GetText().ToString());
		AnswerValueLabel->SetText(FText::AsNumber(previousAnswer * inputValue));
		UE_LOG(LogTemp, Warning, TEXT("multiplied: %f * %f = %f"), previousAnswer, inputValue, previousAnswer * inputValue);
	}
}

void UCalculatorScript::OnDivideButtonClicked()
{
	if ((InputBox->GetText().IsEmpty() == false) && InputBox->GetText().IsNumeric())
	{
		const float inputValue = FCString::Atof(*InputBox->GetText().ToString());
		if (inputValue == 0.0f)
			return;

		const float previousAnswer = FCString::Atof(*AnswerValueLabel->GetText().ToString());
		AnswerValueLabel->SetText(FText::AsNumber(previousAnswer / inputValue));
		UE_LOG(LogTemp, Warning, TEXT("divided: %f / %f = %f"), previousAnswer, inputValue, previousAnswer / inputValue);
	}
}

void UCalculatorScript::OnResetButtonClicked()
{
	AnswerValueLabel->SetText(FText::AsNumber(0.0f));
}
