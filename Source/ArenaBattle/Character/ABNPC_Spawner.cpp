// Fill out your copyright notice in the Description page of Project Settings.

#include "Character/ABCharacterBase.h"
#include "Character/ABNPC_Spawner.h"

// Sets default values
AABNPC_Spawner::AABNPC_Spawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AABNPC_Spawner::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AABNPC_Spawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AABNPC_Spawner::SpawnNPC()
{
	
	FActorSpawnParameters ActorSpawnParameters;
	AABCharacterBase* Character = GetWorld()->SpawnActor<AABCharacterBase>(ActorToSpawn->StaticClass(), this->GetActorLocation(), this->GetActorRotation());

}
