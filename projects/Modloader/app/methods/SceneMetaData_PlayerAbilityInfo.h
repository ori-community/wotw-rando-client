#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SceneMetaData_PlayerAbilityInfo.h>
#include <Modloader/app/structs/GetAbilityOnCondition.h>

namespace app::classes::SceneMetaData_PlayerAbilityInfo {
    IL2CPP_REGISTER_METHOD(0x00BAD560, void, ctor, (app::SceneMetaData_PlayerAbilityInfo * this_ptr, app::GetAbilityOnCondition* data))
}
