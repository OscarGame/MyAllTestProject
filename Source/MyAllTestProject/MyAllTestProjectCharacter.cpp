// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "MyAllTestProjectCharacter.h"
#include "Kismet/HeadMountedDisplayFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "MyAllTestProject.h"
//////////////////////////////////////////////////////////////////////////
// AMyAllTestProjectCharacter

AMyAllTestProjectCharacter::AMyAllTestProjectCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f; 

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->JumpZVelocity = 600.f;
	GetCharacterMovement()->AirControl = 0.2f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 300.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)
}

//////////////////////////////////////////////////////////////////////////
// Input

void AMyAllTestProjectCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAxis("MoveForward", this, &AMyAllTestProjectCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AMyAllTestProjectCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &AMyAllTestProjectCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &AMyAllTestProjectCharacter::LookUpAtRate);

	// handle touch devices
	PlayerInputComponent->BindTouch(IE_Pressed, this, &AMyAllTestProjectCharacter::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &AMyAllTestProjectCharacter::TouchStopped);

	// VR headset functionality
	PlayerInputComponent->BindAction("ResetVR", IE_Pressed, this, &AMyAllTestProjectCharacter::OnResetVR);

	PlayerInputComponent->BindAction("TestCKey", IE_Pressed, this, &AMyAllTestProjectCharacter::TestCKey);
}

#include "Engine/LevelStreamingKismet.h"
#include "Engine/StreamableManager.h"

void AMyAllTestProjectCharacter::TestCKey()
{
	UWorld* PersistentWorld = GetWorld();

	if (!PersistentWorld)
	{
		UE_LOG(LogTemp, Fatal, TEXT("UDynamicLevels::LoadTileToStreamingArray >> Invalid PersistentWorld!!!"));
		return;
	}

	//new StreamingClass Instance 新流关卡实例  
	UClass* StreamingClass = ULevelStreamingKismet::StaticClass();
	//ULevelStreaming* StreamingLevel = Cast<ULevelStreaming>(StaticConstructObject(StreamingClass, PersistentWorld, NAME_None, RF_Transient, NULL));
	ULevelStreaming* StreamingLevel = NewObject<ULevelStreaming>(PersistentWorld, StreamingClass, NAME_None, RF_Transient, NULL);
	// FName PackageName = TEXT("/Game/TempUmap/Level_01") 根据项目实际情况获取并设置PackageName  
	FName PackageName = TEXT("/Game/StarterContent/Maps/StarterMap");

	StreamingLevel->SetWorldAssetByPackageName(PackageName);

	//Make New Level Visible 使流关卡可见  
	StreamingLevel->bShouldBeLoaded = true;
	StreamingLevel->bShouldBeVisible = true;
	StreamingLevel->bShouldBlockOnLoad = false;
	FTransform transfrom;
	transfrom.SetLocation(FVector(-400.0f,700.0f,140.0f));
	StreamingLevel->LevelTransform = transfrom;

	//Very Important, used by LevelStreaming* to load the map 设置流关卡的包名  
	StreamingLevel->PackageNameToLoad = PackageName;
	//Add to UWorld 将流关卡添加到World中  
	PersistentWorld->StreamingLevels.Add(StreamingLevel);

	TArray<class ULevelStreaming*> Levels= PersistentWorld->StreamingLevels;
	for (auto level : Levels)
	{
		UE_LOG(LogGame, Warning, TEXT("level->GetPathName() = %s"), *level->GetPathName());
		UE_LOG(LogGame, Warning, TEXT("============"));     
	}
	StreamingLevel->OnLevelLoaded.AddDynamic(this, &AMyAllTestProjectCharacter::OnmyResetVR);
}


void AMyAllTestProjectCharacter::OnmyResetVR()
{
	UE_LOG(LogGame, Warning, TEXT("OnmyResetVR"));
}


void AMyAllTestProjectCharacter::OnResetVR()
{
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

void AMyAllTestProjectCharacter::TouchStarted(ETouchIndex::Type FingerIndex, FVector Location)
{
		Jump();
}

void AMyAllTestProjectCharacter::TouchStopped(ETouchIndex::Type FingerIndex, FVector Location)
{
		StopJumping();
}

void AMyAllTestProjectCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void AMyAllTestProjectCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void AMyAllTestProjectCharacter::MoveForward(float Value)
{
	if ((Controller != NULL) && (Value != 0.0f))
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void AMyAllTestProjectCharacter::MoveRight(float Value)
{
	if ( (Controller != NULL) && (Value != 0.0f) )
	{
		// find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
	
		// get right vector 
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, Value);
	}
}
