#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CameraStraightLineMotion.h>
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::CameraStraightLineMotion {
    IL2CPP_REGISTER_METHOD(0x00B1E330, void, add_OnMotionFinishedEvent, (app::CameraStraightLineMotion * this_ptr, app::Action* value))
    IL2CPP_REGISTER_METHOD(0x00B1E420, void, remove_OnMotionFinishedEvent, (app::CameraStraightLineMotion * this_ptr, app::Action* value))
    IL2CPP_REGISTER_METHOD(0x00B1E510, void, Awake, (app::CameraStraightLineMotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B1E5F0, void, UpdateMotion, (app::CameraStraightLineMotion * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x00B1E990, void, MoveToTarget, (app::CameraStraightLineMotion * this_ptr, app::Vector3 target, float duration))
    IL2CPP_REGISTER_METHOD(0x00B1EA50, void, set_EndPosition, (app::CameraStraightLineMotion * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x00B1EA60, app::Vector3, get_EndPosition, (app::CameraStraightLineMotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CameraStraightLineMotion * this_ptr))
} // namespace app::classes::CameraStraightLineMotion
