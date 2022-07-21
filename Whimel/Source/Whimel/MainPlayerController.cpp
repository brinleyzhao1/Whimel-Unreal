// Fill out your copyright notice in the Description page of Project Settings.


#include "MainPlayerController.h"
#include "Blueprint/UserWidget.h"

void AMainPlayerController::BeginPlay()
{
  Super::BeginPlay();

  if (HUDOverlayAsset)
  {
    HUDOverlay = CreateWidget<UUserWidget>(this, HUDOverlayAsset);
    UE_LOG(LogTemp, Warning, TEXT("yes overlay asset"));
  }
  else
  {
    UE_LOG(LogTemp, Warning, TEXT("no overlay asset"));
  }
  if (HUDOverlay)
  {
    UE_LOG(LogTemp, Warning, TEXT("hud overlay valid"));
    HUDOverlay->AddToViewport();
  }
  else
  {
    UE_LOG(LogTemp, Warning, TEXT("hud overlay not valid"));
  }

  // HUDOverlay->SetVisibility(ESlateVisibility::Visible);
}
