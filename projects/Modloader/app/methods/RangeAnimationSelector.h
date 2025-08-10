#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LocomotionAnimation.h>
#include <Modloader/app/structs/LocomotionAnimation__Array.h>
#include <Modloader/app/structs/LocomotionTimelineAnimation.h>
#include <Modloader/app/structs/LocomotionTimelineAnimation__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/SplitTurnAnimation.h>
#include <Modloader/app/structs/SplitTurnAnimationMoonTimeline.h>
#include <Modloader/app/structs/SplitTurnAnimationMoonTimeline__Array.h>
#include <Modloader/app/structs/SplitTurnAnimation__Array.h>

namespace app::classes::RangeAnimationSelector {
    IL2CPP_REGISTER_METHOD(0x016AA250, app::Object*, GetEntry_1, app::Object__Array* entries, float parameter)
    IL2CPP_REGISTER_METHOD(0x016AA250, app::LocomotionAnimation*, GetEntry_2, app::LocomotionAnimation__Array* entries, float parameter)
    IL2CPP_REGISTER_METHOD(0x016AA250, app::SplitTurnAnimationMoonTimeline*, GetEntry_3, app::SplitTurnAnimationMoonTimeline__Array* entries, float parameter)
    IL2CPP_REGISTER_METHOD(0x016AA250, app::LocomotionTimelineAnimation*, GetEntry_4, app::LocomotionTimelineAnimation__Array* entries, float parameter)
    IL2CPP_REGISTER_METHOD(0x016AA250, app::SplitTurnAnimation*, GetEntry_5, app::SplitTurnAnimation__Array* entries, float parameter)
} // namespace app::classes::RangeAnimationSelector
