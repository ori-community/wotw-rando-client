#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::BaurIdle {
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::BehaviourStatus__Enum, OnExecuteTask, (app::BaurIdle * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (app::BaurIdle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F9A370, void, PlayTimeline, (app::BaurIdle * this_ptr, app::MoonTimeline * timeline))
    IL2CPP_REGISTER_METHOD(0x00F9A590, void, OnEnterTask, (app::BaurIdle * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00F9A5A0, void, OnExitTask, (app::BaurIdle * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTimelineFinished, (app::BaurIdle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04771C38, BaurIdle_OnTimelineFinished__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x005B3EC0, void, ctor, (app::BaurIdle * this_ptr))
}
