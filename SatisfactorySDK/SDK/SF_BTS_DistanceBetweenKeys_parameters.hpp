#pragma once

// Satisfactory SDK (V0.1.6 - CL#98445)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_BTS_DistanceBetweenKeys_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BTS_DistanceBetweenKeys.BTS_DistanceBetweenKeys_C.GetKeyLocation
struct UBTS_DistanceBetweenKeys_C_GetKeyLocation_Params
{
	struct FBlackboardKeySelector                      Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function BTS_DistanceBetweenKeys.BTS_DistanceBetweenKeys_C.ReceiveTickAI
struct UBTS_DistanceBetweenKeys_C_ReceiveTickAI_Params
{
	class AAIController**                              OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTS_DistanceBetweenKeys.BTS_DistanceBetweenKeys_C.ExecuteUbergraph_BTS_DistanceBetweenKeys
struct UBTS_DistanceBetweenKeys_C_ExecuteUbergraph_BTS_DistanceBetweenKeys_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
