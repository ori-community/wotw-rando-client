#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MinerMinibossSpawnTask.h>

namespace app::classes::MinerMinibossSpawnTask {
    IL2CPP_REGISTER_METHOD(0x00417920, app::BehaviourStatus__Enum, OnExecuteTask, app::MinerMinibossSpawnTask* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, app::MinerMinibossSpawnTask* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006B38D0, void, ctor, app::MinerMinibossSpawnTask* this_ptr)
} // namespace app::classes::MinerMinibossSpawnTask
