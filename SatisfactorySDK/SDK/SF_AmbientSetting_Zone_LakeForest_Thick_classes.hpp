#pragma once

// Satisfactory SDK (V0.1.6 - CL#98445)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_AmbientSetting_Zone_LakeForest_Thick_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AmbientSetting_Zone_LakeForest_Thick.AmbientSetting_Zone_LakeForest_Thick_C
// 0x0000 (0x0050 - 0x0050)
class UAmbientSetting_Zone_LakeForest_Thick_C : public UFGAmbientSettings
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AmbientSetting_Zone_LakeForest_Thick.AmbientSetting_Zone_LakeForest_Thick_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
