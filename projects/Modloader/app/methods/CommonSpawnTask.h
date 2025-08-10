#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/CommonSpawnTask.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MoonTimeline.h>

namespace app::classes::CommonSpawnTask {
    IL2CPP_REGISTER_METHOD(0x011DEAB0, void, OnEnterTask, app::CommonSpawnTask* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::BehaviourStatus__Enum, OnExecuteTask, app::CommonSpawnTask* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x011DEBA0, void, StartSpawnTimeline, app::CommonSpawnTask* this_ptr, app::MoonTimeline* timeline)
    IL2CPP_REGISTER_METHOD(0x006B38C0, void, OnSpawningFinnished, app::CommonSpawnTask* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, app::CommonSpawnTask* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006B38D0, void, ctor, app::CommonSpawnTask* this_ptr)
} // namespace app::classes::CommonSpawnTask
