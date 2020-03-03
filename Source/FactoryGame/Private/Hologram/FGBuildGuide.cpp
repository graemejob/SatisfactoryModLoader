// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGBuildGuide.h"

float AFGBuildGuide::FindAngleBetweenBuildingCenterpoints(FVector pointA, FVector pointB, FVector rotation){ return float(); }
float AFGBuildGuide::FindRotationAngleBetweenVectors(FVector a, FVector b, FVector rotation){ return float(); }
FVector AFGBuildGuide::FindRelativeSnapPoint(FTransform originTransform, FVector relativePoint){ return FVector(); }
bool AFGBuildGuide::FindAlignedSnapPoint(UWorld* world,  AFGHologram* hologram, FVector currentUnSnappedLocation, FVector currentRotation, TArray<FGuideLineBuildingSweepData>& sweepData, FVector& out_resultSnapPoint){ return bool(); }
void AFGBuildGuide::UpdateGuideLines(TArray<FGuideLineBuildingSweepData> contenderBuildings, FVector hologramOrigin, FVector endPoint,  AActor* endPointActor, TMap<class UObject*,  AFGBuildGuide*>* guideLinePool){ }
void AFGBuildGuide::UpdateGuideLinesPool( AActor* poolOwner, TArray<FBuildingGuideLineData> updateData, TMap<class UObject*,  AFGBuildGuide*>* guideLinePool){ }
bool AFGBuildGuide::IsClearPathToHologram( UWorld* world, FVector start, FVector end, TSet<class AActor*> excludedActors, ECollisionChannel collisionChannel){ return bool(); }
TArray<FGuideLineBuildingSweepData> AFGBuildGuide::SweepForAlignedBuildings( AActor* actor, FVector guidelinesBase){ return TArray<FGuideLineBuildingSweepData>(); }
bool AFGBuildGuide::IsWithinRange(float value, float min, float max, bool inclusive){ return bool(); }
AFGBuildGuide::AFGBuildGuide(){ }
void AFGBuildGuide::SetBuildGuideStartEnd(FVector startPoint, FVector endPoint, float meshSize){ }
void AFGBuildGuide::BeginPlay(){ }
