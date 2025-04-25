// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"

#include "BattleGameMode.h"

// Sets default values
APlayerTeam::APlayerTeam()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayerTeam::BeginPlay()
{
	Cast<ABattleGameMode>(GetWorld()->GetAuthGameMode())->Players.Add(this);
	
	Super::BeginPlay();
	InitPlayer();
}

// Called every frame
void APlayerTeam::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APlayerTeam::InitPlayer()
{
	switch (CharacterType)
	{
	case ECharacters::Boken:
		Name = "Boken";
		MaxHealth = 60;
		CurrentHealth = MaxHealth;
		MaxMana = 20;
		CurrentMana = MaxMana;
		Attack = 10;
		Defense = 5;
		Speed = 4;
		MagicAttack = 4;
		break;
	case ECharacters::Nozomi:
		Name = "Nozomi";
		MaxHealth = 40;
		CurrentHealth = MaxHealth;
		MaxMana = 25;
		CurrentMana = MaxMana;
		Attack = 5;
		Defense = 3;
		Speed = 6;
		MagicAttack = 6;
		break;
	case ECharacters::Aeris:
		Name = "Aeris";
		MaxHealth = 45;
		CurrentHealth = MaxHealth;
		MaxMana = 0;
		CurrentMana = MaxMana;
		Attack = 7;
		Defense = 5;
		Speed = 5;
		MagicAttack = 5;
		break;
	}
}

