#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SplitTurnAnimation.h>
#include <Modloader/app/structs/ILocomotionTurningHandler.h>

namespace app::classes::SplitTurnAnimation {
    IL2CPP_REGISTER_METHOD(0x002FCE30, bool, get_IsDone, (app::SplitTurnAnimation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009A3650, void, Play, (app::SplitTurnAnimation * this_ptr, app::ILocomotionTurningHandler* locomotion, float target_look_direction))
    IL2CPP_REGISTER_METHOD(0x009A37E0, void, Step, (app::SplitTurnAnimation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009A3B20, void, ctor, (app::SplitTurnAnimation * this_ptr))
} // namespace app::classes::SplitTurnAnimation
