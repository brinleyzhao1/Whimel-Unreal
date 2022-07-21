// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Main.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class WHIMEL_API UMain : public UActorComponent
{
  GENERATED_BODY()

public:
  // Sets default values for this component's properties
  UMain();

protected:
  // Called when the game starts
  virtual void BeginPlay() override;

public:
  // Called every frame
  virtual void TickComponent(float DeltaTime, ELevelTick TickType,
                             FActorComponentTickFunction* ThisTickFunction) override;

  /**
   *
   *Player Stars
   *
   */
  UPROPERTY(EditAnywhere, Category = "Player Stats")
  float MaxEnergy;

  UPROPERTY(EditAnywhere, Category = "Player Stats")
  float Energy;

  UPROPERTY(EditAnywhere, Category = "Player Stats")
  int32 Coins;
};
