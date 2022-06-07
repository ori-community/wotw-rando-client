#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::MinerMinibossSpawnTask {
    IL2CPP_REGISTER_METHOD(0x00417920, app::BehaviourStatus__Enum, OnExecuteTask, (app::MinerMinibossSpawnTask * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (app::MinerMinibossSpawnTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006B38D0, void, ctor, (app::MinerMinibossSpawnTask * this_ptr))
}
