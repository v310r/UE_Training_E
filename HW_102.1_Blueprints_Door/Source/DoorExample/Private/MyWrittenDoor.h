// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Components/TimelineComponent.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyWrittenDoor.generated.h"

UCLASS()
class AMyWrittenDoor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyWrittenDoor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void SetLockState(bool IsUnlocked);
	bool IsUnlocked();

private:

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* DoorFrame;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Door;

	UPROPERTY(VisibleAnywhere)
	UBoxComponent* BoxCollision;

	UPROPERTY(EditAnywhere)
	UCurveFloat* DoorCurve;

	UPROPERTY()
	UTimelineComponent* DoorTogglingAnimation;

	FOnTimelineFloat UpdateDoorAnimation;

	UFUNCTION()
	void OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other,
			UPrimitiveComponent* OtherComp,
			int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnBoxEndOverlap(UPrimitiveComponent* OverlappedComp, class AActor* Other,
			UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	UFUNCTION()
	void ToggleDoor();

	UFUNCTION()
	void OnDoorTogglingAnimate(float Angle);

	bool bIsNotOpen = true;
	
	bool bIsUnlocked = false;
};
