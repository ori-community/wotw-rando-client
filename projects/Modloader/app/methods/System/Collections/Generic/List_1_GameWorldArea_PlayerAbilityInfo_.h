#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameWorldArea_PlayerAbilityInfo.h>
#include <Modloader/app/structs/List_1_GameWorldArea_PlayerAbilityInfo_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_GameWorldArea_PlayerAbilityInfo_.h>

namespace app::classes::System::Collections::Generic::List_1_GameWorldArea_PlayerAbilityInfo_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_GameWorldArea_PlayerAbilityInfo_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, app::List_1_GameWorldArea_PlayerAbilityInfo_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_GameWorldArea_PlayerAbilityInfo_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E8790, void, set_Capacity, app::List_1_GameWorldArea_PlayerAbilityInfo_* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(
        0x025F0B10,
        app::List_1_T_Enumerator_GameWorldArea_PlayerAbilityInfo_,
        GetEnumerator,
        app::List_1_GameWorldArea_PlayerAbilityInfo_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x02FE8D00, bool, Contains, app::List_1_GameWorldArea_PlayerAbilityInfo_* this_ptr, app::GameWorldArea_PlayerAbilityInfo* item)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_GameWorldArea_PlayerAbilityInfo_* this_ptr, app::GameWorldArea_PlayerAbilityInfo* item)
} // namespace app::classes::System::Collections::Generic::List_1_GameWorldArea_PlayerAbilityInfo_
