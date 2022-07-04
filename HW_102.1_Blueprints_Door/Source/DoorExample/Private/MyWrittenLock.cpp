// Fill out your copyright notice in the Description page of Project Settings.

#include "MyWrittenLock.h"

// Sets default values
AMyWrittenLock::AMyWrittenLock()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	Lock = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SM_Lock"));
	SetRootComponent(Lock);

	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision Box"));
	BoxCollision->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AMyWrittenLock::BeginPlay()
{
	Super::BeginPlay();
	
	BoxCollision->OnComponentBeginOverlap.AddDynamic(this, &AMyWrittenLock::OnBoxBeginOverlap);
}

// Called every frame
void AMyWrittenLock::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyWrittenLock::OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (DoorTarget->IsUnlocked())
	{
		if (GEngine != nullptr)
		{
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Magenta,
				FString::Printf(TEXT("Door is now locked (C++)")));
		}
		DoorTarget->SetLockState(false);
	}
	else
	{
		if (GEngine != nullptr)
		{
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Magenta,
				FString::Printf(TEXT("Door is now unlocked (C++)")));
		}
		DoorTarget->SetLockState(true);
	}
}
