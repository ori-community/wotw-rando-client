#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::MoonTimelineOnConditionController {
    IL2CPP_REGISTER_METHOD(0x014732D0, app::MoonTimeline*, get_OnConditionEnterResolved, (app::MoonTimelineOnConditionController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014733D0, app::MoonTimeline*, get_OnConditionStayResolved, (app::MoonTimelineOnConditionController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014734D0, app::MoonTimeline*, get_OnConditionExitResolved, (app::MoonTimelineOnConditionController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0051DB40, bool, get_InvalidateParentTimelineCache, (app::MoonTimelineOnConditionController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0051DB50, void, set_InvalidateParentTimelineCache, (app::MoonTimelineOnConditionController * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x014735D0, void, FixedUpdate, (app::MoonTimelineOnConditionController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01473860, void, StopAllTimelinesBut, (app::MoonTimelineOnConditionController * this_ptr, app::MoonTimeline* timeline))
    IL2CPP_REGISTER_METHOD(0x01473B20, void, PlayTimeline, (app::MoonTimelineOnConditionController * this_ptr, app::MoonTimeline* timeline, app::Action* on_stop))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::MoonTimelineOnConditionController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01473C10, void, _FixedUpdate_b__18_0, (app::MoonTimelineOnConditionController * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472D810, MoonTimelineOnConditionController__FixedUpdate_b__18_0__MethodInfo)
} // namespace app::classes::MoonTimelineOnConditionController
