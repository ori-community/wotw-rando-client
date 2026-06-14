#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SkeetoSpawnTask.h>

namespace app::classes::SkeetoSpawnTask {
    IL2CPP_REGISTER_METHOD(0x006B35D0, void, OnEnterTask, app::SkeetoSpawnTask* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::BehaviourStatus__Enum, OnExecuteTask, app::SkeetoSpawnTask* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x006B3730, void, StartSpawnTimeline, app::SkeetoSpawnTask* this_ptr, app::MoonTimeline* timeline)
    IL2CPP_REGISTER_METHOD(0x006B38C0, void, OnSpawningFinnished, app::SkeetoSpawnTask* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, app::SkeetoSpawnTask* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006B38D0, void, ctor, app::SkeetoSpawnTask* this_ptr)
} // namespace app::classes::SkeetoSpawnTask
