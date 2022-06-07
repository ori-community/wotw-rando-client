#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::MinerSpawnTask {
    IL2CPP_REGISTER_METHOD(0x01450410, void, OnInitializeTask, (app::MinerSpawnTask * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x01450520, void, OnEnterTask, (app::MinerSpawnTask * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::BehaviourStatus__Enum, OnExecuteTask, (app::MinerSpawnTask * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x01450A70, void, StartSpawnTimeline, (app::MinerSpawnTask * this_ptr, app::MoonTimeline * timeline, app::Action * on_stop))
    IL2CPP_REGISTER_METHOD(0x006B38C0, void, OnSpawningFinnished, (app::MinerSpawnTask * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04739A28, MinerSpawnTask_OnSpawningFinnished__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (app::MinerSpawnTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006B38D0, void, ctor, (app::MinerSpawnTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01450C60, void, _OnEnterTask_b__8_1, (app::MinerSpawnTask * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478ECD0, MinerSpawnTask__OnEnterTask_b__8_1__MethodInfo)
}
