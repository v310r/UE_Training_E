// Fill out your copyright notice in the Description page of Project Settings.


#include "MyWrittenDoor.h"

// Sets default values
AMyWrittenDoor::AMyWrittenDoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	DoorFrame = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SM_DoorFrame"));
	SetRootComponent(DoorFrame);

	Door = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SM_Door"));
	Door->SetupAttachment(RootComponent);

	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision Box"));
	BoxCollision->SetupAttachment(RootComponent);

	DoorTogglingAnimation = CreateDefaultSubobject<UTimelineComponent>(TEXT("Animation"));
}

// Called when the game starts or when spawned
void AMyWrittenDoor::BeginPlay()
{
	Super::BeginPlay();

	BoxCollision->OnComponentBeginOverlap.AddDynamic(this, &AMyWrittenDoor::OnBoxBeginOverlap);
	BoxCollision->OnComponentEndOverlap.AddDynamic(this, &AMyWrittenDoor::OnBoxEndOverlap);


	InputComponent = NewObject<UInputComponent>(this);
	InputComponent->RegisterComponent();
	if (InputComponent != nullptr)
		InputComponent->BindAction("Use", IE_Pressed, this, &AMyWrittenDoor::ToggleDoor);

	if (DoorCurve != nullptr)
	{
		UpdateDoorAnimation.BindDynamic(this, &AMyWrittenDoor::OnDoorTogglingAnimate);
		DoorTogglingAnimation->AddInterpFloat(DoorCurve, UpdateDoorAnimation);
	}
}

// Called every frame
void AMyWrittenDoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyWrittenDoor::OnBoxBeginOverlap( UPrimitiveComponent* OverlappedComp, AActor* Other,
	 UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (GEngine != nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Magenta,
			FString::Printf(TEXT("Entered (C++)")));
	}
	EnableInput(GetWorld()->GetFirstPlayerController());
}

void AMyWrittenDoor::OnBoxEndOverlap( UPrimitiveComponent* OverlappedComp, AActor* Other,
	 UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (GEngine != nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Magenta,
			FString::Printf(TEXT("Exited (C++)")));
	}
	DisableInput(GetWorld()->GetFirstPlayerController());
}

void AMyWrittenDoor::ToggleDoor()
{
	if (!bIsUnlocked)
	{
		if (GEngine != nullptr)
		{
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Magenta,
				FString::Printf(TEXT("Door is locked (C++)")));
		}
		return;
	}

	if (bIsNotOpen)
	{
		bIsNotOpen = false;
		DoorTogglingAnimation->Play();
		if (GEngine != nullptr)
		{
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Magenta,
				FString::Printf(TEXT("Open door (C++)")));
		}
	}
	else
	{
		bIsNotOpen = true;
		DoorTogglingAnimation->Reverse();
		if (GEngine != nullptr)
		{
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Magenta,
				FString::Printf(TEXT("Close door (C++)")));
		}
	}
}

void AMyWrittenDoor::OnDoorTogglingAnimate(float Angle)
{
	Door->SetRelativeRotation(FRotator(0.0f, Angle, 0.0f));
}

void AMyWrittenDoor::SetLockState(bool IsUnlocked)
{
	bIsUnlocked = IsUnlocked;
}

bool AMyWrittenDoor::IsUnlocked()
{
	return bIsUnlocked;
}