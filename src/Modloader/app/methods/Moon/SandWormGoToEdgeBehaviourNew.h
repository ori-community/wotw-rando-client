#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/SandWormGoToEdgeBehaviourNew.h>

namespace app::classes::Moon::SandWormGoToEdgeBehaviourNew {
    IL2CPP_REGISTER_METHOD(0x00EC2CC0, void, OnEnter, app::SandWormGoToEdgeBehaviourNew* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00EC2E10, app::BehaviourStatus__Enum, OnExecute, app::SandWormGoToEdgeBehaviourNew* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00EC3890, void, OnDrawGizmos, app::SandWormGoToEdgeBehaviourNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EC3BB0, void, ctor, app::SandWormGoToEdgeBehaviourNew* this_ptr)
} // namespace app::classes::Moon::SandWormGoToEdgeBehaviourNew
