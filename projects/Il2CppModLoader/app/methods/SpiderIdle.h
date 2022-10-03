#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SpiderIdle {
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::BehaviourStatus__Enum, OnExecuteTask, (app::SpiderIdle * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (app::SpiderIdle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011BD380, void, PlayTimeline, (app::SpiderIdle * this_ptr, app::MoonTimeline* timeline))
    IL2CPP_REGISTER_METHOD(0x011BD5A0, void, OnEnterTask, (app::SpiderIdle * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x011BD5B0, void, OnExitTask, (app::SpiderIdle * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTimelineFinished, (app::SpiderIdle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470AC68, SpiderIdle_OnTimelineFinished__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x005B3EC0, void, ctor, (app::SpiderIdle * this_ptr))
} // namespace app::classes::SpiderIdle
