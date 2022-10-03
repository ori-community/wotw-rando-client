#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::RangeAnimationSelector {
    IL2CPP_REGISTER_METHOD(0x016AA250, app::Object*, GetEntry_1, (app::Object__Array * entries, float parameter))
    IL2CPP_REGISTER_METHOD(0x016AA250, app::LocomotionAnimation*, GetEntry_2, (app::LocomotionAnimation__Array * entries, float parameter))
    IL2CPP_REGISTER_METHODINFO(0x0470F540, RangeAnimationSelector_GetEntry_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x016AA250, app::SplitTurnAnimationMoonTimeline*, GetEntry_3, (app::SplitTurnAnimationMoonTimeline__Array * entries, float parameter))
    IL2CPP_REGISTER_METHODINFO(0x0473E290, RangeAnimationSelector_GetEntry_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x016AA250, app::LocomotionTimelineAnimation*, GetEntry_4, (app::LocomotionTimelineAnimation__Array * entries, float parameter))
    IL2CPP_REGISTER_METHODINFO(0x04706228, RangeAnimationSelector_GetEntry_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x016AA250, app::SplitTurnAnimation*, GetEntry_5, (app::SplitTurnAnimation__Array * entries, float parameter))
    IL2CPP_REGISTER_METHODINFO(0x04732610, RangeAnimationSelector_GetEntry_4__MethodInfo)
} // namespace app::classes::RangeAnimationSelector
