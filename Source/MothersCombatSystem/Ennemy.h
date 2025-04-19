// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MCS_Datas.h"
#include "GameFramework/Actor.h"
#include "Ennemy.generated.h"

UCLASS()
class MOTHERSCOMBATSYSTEM_API AEnnemy : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnnemy();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stat")
	int Health;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stat")
	int Defense;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stat")
	int Attack;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stat")
	FString Name;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stat")
	UTexture2D* Icon;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stat")
	EEnnemies EnnemyType;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
