#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/HornBugSpawnTask.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MoonTimeline.h>

namespace app::classes::HornBugSpawnTask {
    IL2CPP_REGISTER_METHOD(0x00B6DFC0, void, OnEnterTask, app::HornBugSpawnTask* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::BehaviourStatus__Enum, OnExecuteTask, app::HornBugSpawnTask* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00B6E410, void, StartSpawnTimeline, app::HornBugSpawnTask* this_ptr, app::MoonTimeline* timeline, app::Action* on_stop)
    IL2CPP_REGISTER_METHOD(0x006B38C0, void, OnSpawningFinnished, app::HornBugSpawnTask* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, app::HornBugSpawnTask* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006B38D0, void, ctor, app::HornBugSpawnTask* this_ptr)
} // namespace app::classes::HornBugSpawnTask
