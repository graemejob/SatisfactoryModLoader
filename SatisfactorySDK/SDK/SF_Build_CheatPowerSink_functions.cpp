// Satisfactory SDK (V0.1.6 - CL#98445)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Build_CheatPowerSink_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Build_CheatPowerSink.Build_CheatPowerSink_C.UserConstructionScript
// ()

void ABuild_CheatPowerSink_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_CheatPowerSink.Build_CheatPowerSink_C.UserConstructionScript");

	ABuild_CheatPowerSink_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
