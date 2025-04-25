// Fill out your copyright notice in the Description page of Project Settings.


#include "Ennemy.h"

// Sets default values
AEnnemy::AEnnemy()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEnnemy::BeginPlay()
{
	Super::BeginPlay();

	switch (EnnemyType)
	{
	case EEnnemies::AngryBird:
		break;
	case EEnnemies::VeryAngryBird:
		break;
	case EEnnemies::ChuppaKid:
		break;
	case EEnnemies::ChuppaMecha:
		break;
	case EEnnemies::Popo:
		break;
	case EEnnemies::FlyingPopo:
		break;
	case EEnnemies::MisterPopo:
		break;
	case EEnnemies::HauntedPaladinArmour:
		break;
	case EEnnemies::HauntedWarriorArmour:
		break;
	}
	
}

// Called every frame
void AEnnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

