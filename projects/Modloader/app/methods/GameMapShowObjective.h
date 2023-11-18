#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameMapShowObjective.h>
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/GameMapShowObjective_State__Enum.h>
#include <Modloader/app/structs/Objective.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::GameMapShowObjective {
    IL2CPP_REGISTER_METHOD(0x006A2E90, void, add_OnFinish, (app::GameMapShowObjective * this_ptr, app::Action* value))
    IL2CPP_REGISTER_METHOD(0x006A2F80, void, remove_OnFinish, (app::GameMapShowObjective * this_ptr, app::Action* value))
    IL2CPP_REGISTER_METHOD(0x002FCE30, bool, get_IsPerforming, (app::GameMapShowObjective * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006A3070, void, ShowObjective, (app::GameMapShowObjective * this_ptr, app::Objective* objective, app::Action* on_finish))
    IL2CPP_REGISTER_METHOD(0x006A36A0, void, Finish, (app::GameMapShowObjective * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006A37F0, void, OnDisable, (app::GameMapShowObjective * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006A3800, void, FixedUpdate, (app::GameMapShowObjective * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006A3840, bool, get_IsComplete, (app::GameMapShowObjective * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006A3850, bool, get_IsInEndWait, (app::GameMapShowObjective * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006A3860, app::Vector3, WorldToUIPosition, (app::GameMapShowObjective * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x006A3980, void, ChangeState, (app::GameMapShowObjective * this_ptr, app::GameMapShowObjective_State__Enum state))
    IL2CPP_REGISTER_METHOD(0x006A3990, void, UpdateState, (app::GameMapShowObjective * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006A40B0, void, ctor, (app::GameMapShowObjective * this_ptr))
} // namespace app::classes::GameMapShowObjective
