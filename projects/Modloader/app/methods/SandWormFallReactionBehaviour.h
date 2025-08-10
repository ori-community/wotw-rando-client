#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MoonControllerColliderHit.h>
#include <Modloader/app/structs/SandWormFallReactionBehaviour.h>

namespace app::classes::SandWormFallReactionBehaviour {
    IL2CPP_REGISTER_METHOD(0x00C1B210, void, OnInitializeTask, app::SandWormFallReactionBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00C1B320, void, OnEnterTask, app::SandWormFallReactionBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnCollision, app::SandWormFallReactionBehaviour* this_ptr, app::MoonControllerColliderHit hit)
    IL2CPP_REGISTER_METHOD(0x00C1B500, app::BehaviourStatus__Enum, OnExecuteTask, app::SandWormFallReactionBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00C1B5E0, void, OnExitTask, app::SandWormFallReactionBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00C1B7C0, void, ctor, app::SandWormFallReactionBehaviour* this_ptr)
} // namespace app::classes::SandWormFallReactionBehaviour
