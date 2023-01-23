#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LocomotionAnimation.h>

namespace app::classes::Moon::LocomotionAnimation {
    IL2CPP_REGISTER_METHOD(0x0110DBD0, float, get_SpeedFromDistanceAndDuration, (app::LocomotionAnimation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0110DC10, void, ctor, (app::LocomotionAnimation * this_ptr))
} // namespace app::classes::Moon::LocomotionAnimation
