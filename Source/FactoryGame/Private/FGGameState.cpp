// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGGameState.h"

AFGGameState::AFGGameState() : Super() {
	this->mPlannedRestartTime = 24;
	this->PrimaryActorTick.TickGroup = TG_PrePhysics; this->PrimaryActorTick.EndTickGroup = TG_PrePhysics; this->PrimaryActorTick.bTickEvenWhenPaused = true; this->PrimaryActorTick.bCanEverTick = true; this->PrimaryActorTick.bStartWithTickEnabled = true; this->PrimaryActorTick.bAllowTickOnDedicatedServer = true; this->PrimaryActorTick.TickInterval = 120;
}
void AFGGameState::Serialize(FArchive& ar){ Super::Serialize(ar); }
void AFGGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
void AFGGameState::Tick(float delta){ }
void AFGGameState::PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGGameState::PostSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGGameState::PreLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGGameState::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGGameState::GatherDependencies_Implementation(TArray< UObject* >& out_dependentObjects){ }
bool AFGGameState::NeedTransform_Implementation(){ return bool(); }
bool AFGGameState::ShouldSave_Implementation() const{ return bool(); }
void AFGGameState::HandleMatchIsWaitingToStart(){ }
void AFGGameState::HandleMatchHasStarted(){ }
void AFGGameState::AddPlayerState( APlayerState* playerState){ }
void AFGGameState::Init(){ }
bool AFGGameState::AreClientSubsystemsValid(){ return bool(); }
int32 AFGGameState::FindFreeSlot( AFGPlayerState* playerState){ return int32(); }
bool AFGGameState::IsTradingPostBuilt() const{ return bool(); }
bool AFGGameState::HasInitalTradingPostLandAnimPlayed() const{ return bool(); }
void AFGGameState::SetHasInitalTradingPostLandAnimPlayed(){ }
bool AFGGameState::IsSpaceElevatorBuilt() const{ return bool(); }
void AFGGameState::GetVisitedMapAreas(TArray< TSubclassOf< UFGMapArea > >& out_VisitedAreas){ }
bool AFGGameState::IsMapAreaVisisted(TSubclassOf< UFGMapArea > inArea){ return bool(); }
void AFGGameState::AddUniqueVisistedMapArea(TSubclassOf< UFGMapArea > mapArea){ }
void AFGGameState::OnRep_MapAreaVisited(){ }
void AFGGameState::NotifyPlayerAdded( AFGCharacterPlayer* inPlayer){ }
void AFGGameState::SendMessageToAllPlayers(TSubclassOf<  UFGMessageBase > inMessage){ }
void AFGGameState::SendMessageToPlayer(TSubclassOf<  UFGMessageBase > inMessage,  APlayerController* controller){ }
int32 AFGGameState::GetTotalPlayDuration() const{ return int32(); }
void AFGGameState::SetupColorSlots_Linear(const TArray<FLinearColor>& mColorSlotsPrimary, const TArray<FLinearColor>& mColorSlotsSecondary){ }
void AFGGameState::Server_SetBuildingColorInSlotLinear_Implementation(uint8 slotIdx, FLinearColor colorPrimary_Linear, FLinearColor colorSecondary_Linear){ }
bool AFGGameState::Server_SetBuildingColorInSlotLinear_Validate(uint8 slotIdx, FLinearColor colorPrimary_Linear, FLinearColor colorSecondary_Linear){ return bool(); }
uint8 AFGGameState::GetNbColorSlotsExposedToPlayers(){ return uint8(); }
FLinearColor AFGGameState::GetBuildingColorPrimary_Linear(uint8 slot){ return FLinearColor(); }
FLinearColor AFGGameState::GetBuildingColorSecondary_Linear(uint8 slot){ return FLinearColor(); }
void AFGGameState::OnRep_BuildingColorSlotPrimary_Linear(){ }
void AFGGameState::OnRep_BuildingColorSlotSecondary_Linear(){ }
void AFGGameState::ClaimPlayerColor( AFGPlayerState* playerState){ }
void AFGGameState::ReleasePlayerColor( AFGPlayerState* playerState){ }
void AFGGameState::ItemPickedUp(TSubclassOf<  UFGItemDescriptor > itemClass){ }
void AFGGameState::SetPlannedServerRestartWorldTime(float worldTimeSeconds){ }
void AFGGameState::CheckRestartTime(){ }
void AFGGameState::OnRep_PlannedRestartTime(){ }
