// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGCheatManager.h"

void UFGCheatManager::InitCheatManager(){ }
bool UFGCheatManager::IsSupportedForNetworking() const{ return bool(); }
int32 UFGCheatManager::GetFunctionCallspace(UFunction* Function, FFrame* Stack){ return int32(); }
bool UFGCheatManager::CallRemoteFunction(UFunction* Function, void* Parameters, FOutParmRec* OutParms, FFrame* Stack){ return bool(); }
bool UFGCheatManager::ReplicateSubobjects( UActorChannel *Channel,  FOutBunch *Bunch, FReplicationFlags *RepFlags){ return bool(); }
void UFGCheatManager::NoCost(bool enabled){ }
bool UFGCheatManager::NoCost_Get(){ return bool(); }
void UFGCheatManager::NoPower(bool enabled){ }
bool UFGCheatManager::NoPower_Get(){ return bool(); }
void UFGCheatManager::NoFuel(bool enabled){ }
bool UFGCheatManager::NoFuel_Get(){ return bool(); }
void UFGCheatManager::NoMessages(bool enabled){ }
bool UFGCheatManager::NoMessages_Get(){ return bool(); }
void UFGCheatManager::TurboBuildMode(bool enabled){ }
bool UFGCheatManager::TurboBuildMode_Get(){ return bool(); }
void UFGCheatManager::TurboProductionMode(bool enabled){ }
bool UFGCheatManager::TurboMode_Get(){ return bool(); }
void UFGCheatManager::GiveItemStacks(TSubclassOf<  UFGItemDescriptor > resource, int32 NumberOfStacks){ }
void UFGCheatManager::GiveItemsSingle(TSubclassOf<  UFGItemDescriptor > resource, int32 NumberOfItems){ }
void UFGCheatManager::GiveResourceSinkCoupons(int32 NumCoupons){ }
void UFGCheatManager::DrawSphere(int32 radius){ }
void UFGCheatManager::PlayerFly(bool flyModeEnabled){ }
bool UFGCheatManager::PlayerFly_Get(){ return bool(); }
void UFGCheatManager::PlayerNoClipModeOnFly(bool ghostMode){ }
bool UFGCheatManager::PlayerNoClipModeOnFly_Get(){ return bool(); }
void UFGCheatManager::ClearGiveItemPopularList(){ }
void UFGCheatManager::GiveAllSchematics(){ }
void UFGCheatManager::GiveAllSchematicsAndPhases(){ }
void UFGCheatManager::GiveAvailableSchematics(){ }
void UFGCheatManager::GiveActiveMilestoneSchematic(){ }
void UFGCheatManager::GiveCheatSchematics(){ }
void UFGCheatManager::GivePrototypeSchematics(){ }
void UFGCheatManager::GiveStorySchematics(){ }
void UFGCheatManager::GiveStartingResearch(){ }
void UFGCheatManager::GiveAllResearchTrees(){ }
void UFGCheatManager::TriggerNextPrimaryStoryMessageInQueue(){ }
void UFGCheatManager::TriggerNextSecondaryStoryMessageInQueue(int32 storyQueueIndex){ }
void UFGCheatManager::TriggerNextFloatingMessageInPrimaryQueue(){ }
void UFGCheatManager::TriggerRandomTriggeredBarksMessage(){ }
void UFGCheatManager::StartNextStoryQueue(){ }
void UFGCheatManager::ResetAllStoryQueues(){ }
void UFGCheatManager::ResetCurrentStoryQueue(){ }
void UFGCheatManager::RebuildPowerCircuits(){ }
void UFGCheatManager::EnableBuildableTick(bool enable){ }
bool UFGCheatManager::EnableBuildableTick_Get(){ return bool(); }
void UFGCheatManager::EnablePlayerFOV(bool enable){ }
bool UFGCheatManager::EnablePlayerFOV_Get(){ return bool(); }
void UFGCheatManager::DestroyPawn(){ }
void UFGCheatManager::RemoveAllFoliage(int32 maxNumInstances){ }
void UFGCheatManager::PardonAllPlayers(){ }
void UFGCheatManager::ClearPardon(){ }
void UFGCheatManager::SetTimeOfDay(int32 hour, int32 minute){ }
void UFGCheatManager::SetTimeSpeedMultiplierResetTime(int32 resetHour){ }
int32 UFGCheatManager::SetTimeOfDay_hour_Get(){ return int32(); }
int32 UFGCheatManager::SetTimeOfDay_minute_Get(){ return int32(); }
void UFGCheatManager::SetPlanetPosition(float value){ }
void UFGCheatManager::SetPlanetPositionDeg(int32 value){ }
void UFGCheatManager::SetPlanetMovementEnabled(bool enabled){ }
void UFGCheatManager::SetPlanetSpeedMultiplier(float multiplier){ }
void UFGCheatManager::ShowFactoryOnly(bool environmentHidden){ }
bool UFGCheatManager::ShowFactoryOnly_Get(){ return bool(); }
void UFGCheatManager::HideFactoryOnly(bool factoryHidden){ }
bool UFGCheatManager::HideFactoryOnly_Get(){ return bool(); }
void UFGCheatManager::DumpAllAvailableRecipes(){ }
void UFGCheatManager::EnableAudioDebug(bool isEnabled){ }
void UFGCheatManager::ToggleAudioDebug(){ }
void UFGCheatManager::SetSlomo(float slomo){ }
void UFGCheatManager::OpenModMap(){ }
void UFGCheatManager::PumpiMode(bool enable){ }
void UFGCheatManager::HiddenHUDMode(bool enable){ }
bool UFGCheatManager::PumpiMode_Get(){ return bool(); }
void UFGCheatManager::SplitAllConveyors(){ }
void UFGCheatManager::MergeAllConveyors(){ }
void UFGCheatManager::SetTimeSpeedMultiplier(float speed){ }
void UFGCheatManager::SetFactoryDetailReplication(bool enable){ }
bool UFGCheatManager::SetFactoryDetailReplication_Get(){ return bool(); }
void UFGCheatManager::ResetFuses(){ }
void UFGCheatManager::ToggleCameraMode(){ }
void UFGCheatManager::Photo_ToggleAdvancedPhotoMode(){ }
void UFGCheatManager::Photo_SetManualFocusDistance(float manualFocusDistance){ }
void UFGCheatManager::Photo_FocusTrackLookedAtObject(){ }
void UFGCheatManager::Photo_SetAperture(float aperture){ }
void UFGCheatManager::Photo_ToggleDebug(){ }
void UFGCheatManager::Photo_ResetToDefault(){ }
void UFGCheatManager::Photo_AddCurrentPlayerPosAndRot(){ }
void UFGCheatManager::Photo_PlaySequence(){ }
void UFGCheatManager::Photo_ToggleSequencer(){ }
void UFGCheatManager::GiveSchematicsOfTier(int32 tier){ }
void UFGCheatManager::SetGamePhase(EGamePhase phase){ }
void UFGCheatManager::SetNextGamePhase(){ }
void UFGCheatManager::TestSharedInventoryPtr(){ }
void UFGCheatManager::ForceSpawnCreatures(){ }
void UFGCheatManager::DumpNonDormantActors(){ }
void UFGCheatManager::ToggleAudioLandingDebug(){ }
void UFGCheatManager::DumpAttachedToSkelMesh(bool detailed){ }
void UFGCheatManager::DumpTicking(bool detailed){ }
void UFGCheatManager::DumpActiveGPUParticles(){ }
void UFGCheatManager::ReplayBuildingEffects(){ }
void UFGCheatManager::HideAllBuildings(bool inVisibility){ }
bool UFGCheatManager::HideAllBuildings_Get(){ return bool(); }
void UFGCheatManager::RandomizeBuildingsColorSlot(uint8 slotIndex){ }
void UFGCheatManager::UpdateSessionToOSS(){ }
void UFGCheatManager::VisitAllMapAreas(){ }
void UFGCheatManager::RevealMap(){ }
void UFGCheatManager::HideMap(){ }
void UFGCheatManager::SetAITickDistance(float distance){ }
void UFGCheatManager::DumpPlayerStates(){ }
void UFGCheatManager::DumpHotbarShortcuts(){ }
void UFGCheatManager::EnableInstancingOnFactory(bool enabled){ }
void UFGCheatManager::DumpActorRepresentations(){ }
void UFGCheatManager::DumpSignificanceManagedObjects(){ }
void UFGCheatManager::PurgeInactiveClientsFromSave(bool fetchInventories){ }
void UFGCheatManager::PurgeAllBeaconsFromSave(){ }
void UFGCheatManager::PurgeDeathMarkersFromSave(){ }
void UFGCheatManager::ListItemPickups(){ }
void UFGCheatManager::SetTradingPostLevel(int32 inLevel){ }
void UFGCheatManager::ListUnlockedRecipesAndSchematics(){ }
void UFGCheatManager::GetVehicleInfo(){ }
void UFGCheatManager::RunDebugMetric(){ }
void UFGCheatManager::MCP_Login(FString username, FString password){ }
void UFGCheatManager::MCP_Logout(){ }
void UFGCheatManager::MCP_GetOnlineStatus(int32 localPlayerNum){ }
void UFGCheatManager::MCP_UpdatePresence(FString key, FString value){ }
void UFGCheatManager::MCP_UpdatePresenceString(FString string){ }
void UFGCheatManager::MCP_LogPresence(){ }
void UFGCheatManager::MCP_GetFriends(){ }
void UFGCheatManager::TriggerPresenceUpdate(){ }
void UFGCheatManager::ShowSequenceList(){ }
void UFGCheatManager::SendInviteToFriend(FString friendName){ }
void UFGCheatManager::ResetHubTutorial(){ }
void UFGCheatManager::ResetSchematics(){ }
void UFGCheatManager::ResetRecipes(){ }
void UFGCheatManager::DumpSchematics(){ }
void UFGCheatManager::PrintStaticMeshesHierarchy(){ }
void UFGCheatManager::FlipVehicle(){ }
void UFGCheatManager::ResetVehicleDeadlocks(){ }
void UFGCheatManager::ResetTheChosenWheeledVehicle(){ }
void UFGCheatManager::ListDebugStartingPoint(){ }
void UFGCheatManager::SetDebugStartingPoint(FName startingPoint){ }
void UFGCheatManager::SetRandomDebugStartingPoint(){ }
void UFGCheatManager::CompleteResearch(){ }
void UFGCheatManager::PurgeAllTrainState(){ }
void UFGCheatManager::ResetAllFactoryLegsToZero(bool repopulateEmptyLegs){ }
void UFGCheatManager::RebuildFactoryLegsOneTileAroundPlayer(){ }
void UFGCheatManager::ResetGamePhases(){ }
void UFGCheatManager::DumpGamePhases(){ }
void UFGCheatManager::ToggleTrainSelfDriving(){ }
void UFGCheatManager::PipeFillFirstInEachNetwork(){ }
void UFGCheatManager::PipeEmptyAll(){ }
void UFGCheatManager::PipeResetAll(){ }
void UFGCheatManager::PipePrintMinSizes(){ }
void UFGCheatManager::PipeSetVerboseLoggingOnAimedFluidBox(bool enabled){ }
void UFGCheatManager::PipeEnableProbingOnAimedIntegrant(){ }
void UFGCheatManager::PipeDisableProbingOnAimedIntegrant(){ }
void UFGCheatManager::PipeClearProbingOnAllPipe(){ }
void UFGCheatManager::PipeAddSelectedNetworkToDisplayDebugList(){ }
void UFGCheatManager::PipeClearDisplayDebugList(){ }
void UFGCheatManager::PipePrintTweakables(){ }
void UFGCheatManager::PipeTweakMaximumFlow(float rate){ }
void UFGCheatManager::PipeTweakMinimumMaxContent(float minimumMaxContent, bool keepRelativeContent){ }
void UFGCheatManager::PipeTweakPressureLoss(float pressureLoss){ }
void UFGCheatManager::PipeTweakOverfill(float maxOverfillPct, float maxOverfillForPressure){ }
void UFGCheatManager::PipeTweakGravity(float gravity){ }
void UFGCheatManager::PipeTweakFluidFriction(float fluidFriction){ }
void UFGCheatManager::PipeTweakFluidDensity(float fluidDensity){ }
void UFGCheatManager::PipeTweakFluidViscosity(float fluidViscosity){ }
void UFGCheatManager::DupeComponentInCircuit(int32 target){ }
void UFGCheatManager::DupeComponentToAnotherCircuit(int32 source, int32 target){ }
void UFGCheatManager::DumpConnectionString(){ }
void UFGCheatManager::FillAllFreightCars(float pct){ }
void UFGCheatManager::EmptyAllFreightCars(){ }
void UFGCheatManager::DumpCircuitsToLog(){ }
void UFGCheatManager::RerailAllTrains(){ }
void UFGCheatManager::MarkTrackGraphsAsChanged(){ }
void UFGCheatManager::MarkTrackGraphsForRebuild(){ }
UActorComponent* UFGCheatManager::GetOuterPlayersUseComponent() const{ return nullptr; }
AActor* UFGCheatManager::GetOuterPlayersUseActor() const{ return nullptr; }
AActor* UFGCheatManager::GetOuterPlayersAimedAtActor(FVector& out_aimLocation) const{ return nullptr; }
IFGFluidIntegrantInterface* UFGCheatManager::GetOuterPlayerAimedAtFluidInterface() const{ return nullptr; }
