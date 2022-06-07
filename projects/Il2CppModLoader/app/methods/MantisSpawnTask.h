#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::MantisSpawnTask {
    IL2CPP_REGISTER_METHOD(0x00A09410, void, OnEnterTask, (app::MantisSpawnTask * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::BehaviourStatus__Enum, OnExecuteTask, (app::MantisSpawnTask * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00A095A0, void, StartSpawnTimeline, (app::MantisSpawnTask * this_ptr, app::MoonTimeline * timeline))
    IL2CPP_REGISTER_METHOD(0x006B38C0, void, OnSpawningFinnished, (app::MantisSpawnTask * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047057B0, MantisSpawnTask_OnSpawningFinnished__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (app::MantisSpawnTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006B38D0, void, ctor, (app::MantisSpawnTask * this_ptr))
}
