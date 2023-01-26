#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MinerSpawnTask.h>
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MoonTimeline.h>

namespace app::classes::MinerSpawnTask {
    IL2CPP_REGISTER_METHOD(0x01450410, void, OnInitializeTask, (app::MinerSpawnTask * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01450520, void, OnEnterTask, (app::MinerSpawnTask * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::BehaviourStatus__Enum, OnExecuteTask, (app::MinerSpawnTask * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01450A70, void, StartSpawnTimeline, (app::MinerSpawnTask * this_ptr, app::MoonTimeline* timeline, app::Action* on_stop))
    IL2CPP_REGISTER_METHOD(0x006B38C0, void, OnSpawningFinnished, (app::MinerSpawnTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (app::MinerSpawnTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006B38D0, void, ctor, (app::MinerSpawnTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01450C60, void, _OnEnterTask_b__8_1, (app::MinerSpawnTask * this_ptr))
} // namespace app::classes::MinerSpawnTask
