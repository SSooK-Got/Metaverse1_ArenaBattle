// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ABNPC_Spawner.generated.h"

UCLASS()
class ARENABATTLE_API AABNPC_Spawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AABNPC_Spawner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void SpawnNPC();

	UPROPERTY(EditAnywhere, Category = Spawn)
		class AABCharacterBase* ActorToSpawn;

};
