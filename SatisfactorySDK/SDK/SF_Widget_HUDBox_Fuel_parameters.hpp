#pragma once

// Satisfactory SDK (V0.1.6 - CL#98445)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Widget_HUDBox_Fuel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_HUDBox_Fuel.Widget_HUDBox_Fuel_C.Construct
struct UWidget_HUDBox_Fuel_C_Construct_Params
{
};

// Function Widget_HUDBox_Fuel.Widget_HUDBox_Fuel_C.Tick
struct UWidget_HUDBox_Fuel_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_HUDBox_Fuel.Widget_HUDBox_Fuel_C.ExecuteUbergraph_Widget_HUDBox_Fuel
struct UWidget_HUDBox_Fuel_C_ExecuteUbergraph_Widget_HUDBox_Fuel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
