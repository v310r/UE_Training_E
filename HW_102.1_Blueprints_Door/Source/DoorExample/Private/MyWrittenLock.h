// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "MyWrittenDoor.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyWrittenLock.generated.h"

UCLASS()
class AMyWrittenLock : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyWrittenLock();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	
	UFUNCTION()
	void OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UPROPERTY(EditAnywhere, Category = TargetDoors)
	AMyWrittenDoor* DoorTarget;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Lock;

	UPROPERTY(VisibleAnywhere)
	UBoxComponent* BoxCollision;
};
