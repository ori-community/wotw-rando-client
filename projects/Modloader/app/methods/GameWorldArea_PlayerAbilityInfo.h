#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameWorldArea_PlayerAbilityInfo.h>
#include <Modloader/app/structs/SceneMetaData_PlayerAbilityInfo.h>

namespace app::classes::GameWorldArea_PlayerAbilityInfo {
    IL2CPP_REGISTER_METHOD(0x0040AF10, void, ctor_1, app::GameWorldArea_PlayerAbilityInfo* this_ptr, app::SceneMetaData_PlayerAbilityInfo* ability_info)
    IL2CPP_REGISTER_METHOD(0x0040AF10, void, ctor_2, app::GameWorldArea_PlayerAbilityInfo* this_ptr, app::GameWorldArea_PlayerAbilityInfo* copy_from)
    IL2CPP_REGISTER_METHOD(0x0040AF50, bool, IsFulfilled, app::GameWorldArea_PlayerAbilityInfo* this_ptr)
} // namespace app::classes::GameWorldArea_PlayerAbilityInfo
