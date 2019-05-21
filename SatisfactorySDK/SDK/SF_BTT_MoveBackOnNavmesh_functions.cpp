// Satisfactory SDK (V0.1.6 - CL#98445)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_BTT_MoveBackOnNavmesh_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BTT_MoveBackOnNavmesh.BTT_MoveBackOnNavmesh_C.ReceiveExecuteAI
// ()
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_MoveBackOnNavmesh_C::ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_MoveBackOnNavmesh.BTT_MoveBackOnNavmesh_C.ReceiveExecuteAI");

	UBTT_MoveBackOnNavmesh_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_MoveBackOnNavmesh.BTT_MoveBackOnNavmesh_C.ExecuteUbergraph_BTT_MoveBackOnNavmesh
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_MoveBackOnNavmesh_C::ExecuteUbergraph_BTT_MoveBackOnNavmesh(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_MoveBackOnNavmesh.BTT_MoveBackOnNavmesh_C.ExecuteUbergraph_BTT_MoveBackOnNavmesh");

	UBTT_MoveBackOnNavmesh_C_ExecuteUbergraph_BTT_MoveBackOnNavmesh_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
