#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerato_GameWorldAreaI_Dictionar_2_Syste_Int3_WorldMapAreaStat_.h>
#include <Modloader/app/structs/Dictionary_2_GameWorldAreaID_Dictionary_2_System_Int32_WorldMapAreaState_.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_WorldMapAreaState_.h>
#include <Modloader/app/structs/GameWorldAreaID__Enum.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_GameWorldAreaID_Dictionary_2_System_Int32_WorldMapAreaState__ {
    IL2CPP_REGISTER_METHOD(0x02BA5400, app::Dictionary_2_TKey_TValue_Enumerator_GameWorldAreaID_Dictionary_2_System_Int32_WorldMapAreaState_, GetEnumerator, (app::Dictionary_2_GameWorldAreaID_Dictionary_2_System_Int32_WorldMapAreaState_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B2A0, int32_t, get_Count, (app::Dictionary_2_GameWorldAreaID_Dictionary_2_System_Int32_WorldMapAreaState_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_GameWorldAreaID_Dictionary_2_System_Int32_WorldMapAreaState_ * this_ptr, app::GameWorldAreaID__Enum key, app::Dictionary_2_System_Int32_WorldMapAreaState_** value))
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, (app::Dictionary_2_GameWorldAreaID_Dictionary_2_System_Int32_WorldMapAreaState_ * this_ptr, app::GameWorldAreaID__Enum key, app::Dictionary_2_System_Int32_WorldMapAreaState_* value))
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_GameWorldAreaID_Dictionary_2_System_Int32_WorldMapAreaState_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (app::Dictionary_2_GameWorldAreaID_Dictionary_2_System_Int32_WorldMapAreaState_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C35530, app::Dictionary_2_System_Int32_WorldMapAreaState_*, get_Item, (app::Dictionary_2_GameWorldAreaID_Dictionary_2_System_Int32_WorldMapAreaState_ * this_ptr, app::GameWorldAreaID__Enum key))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_GameWorldAreaID_Dictionary_2_System_Int32_WorldMapAreaState__
