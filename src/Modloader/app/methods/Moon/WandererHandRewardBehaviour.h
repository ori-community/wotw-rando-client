#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/WandererHandRewardBehaviour.h>

namespace app::classes::Moon::WandererHandRewardBehaviour {
    IL2CPP_REGISTER_METHOD(0x011A2F00, void, OnEntityInitialized, app::WandererHandRewardBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011A3090, void, OnEnter, app::WandererHandRewardBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x011A33E0, void, HandOutFinish, app::WandererHandRewardBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011A3600, void, RewardTakenOrTimedOut, app::WandererHandRewardBehaviour* this_ptr, bool result)
    IL2CPP_REGISTER_METHOD(0x011A3690, app::BehaviourStatus__Enum, OnExecute, app::WandererHandRewardBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x008C6EF0, void, OnExit, app::WandererHandRewardBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x011A3950, void, ctor, app::WandererHandRewardBehaviour* this_ptr)
} // namespace app::classes::Moon::WandererHandRewardBehaviour
