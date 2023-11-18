#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LocomotionTimelineAnimation.h>

namespace app::classes::Moon::LocomotionTimelineAnimation {
    IL2CPP_REGISTER_METHOD(0x0110E240, float, get_SpeedFromDistanceAndDuration, (app::LocomotionTimelineAnimation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0110DC10, void, ctor, (app::LocomotionTimelineAnimation * this_ptr))
} // namespace app::classes::Moon::LocomotionTimelineAnimation
