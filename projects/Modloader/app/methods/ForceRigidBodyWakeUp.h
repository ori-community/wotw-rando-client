#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ForceRigidBodyWakeUp.h>

namespace app::classes::ForceRigidBodyWakeUp {
    IL2CPP_REGISTER_METHOD(0x012818E0, void, Awake, app::ForceRigidBodyWakeUp* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::ForceRigidBodyWakeUp* this_ptr)
} // namespace app::classes::ForceRigidBodyWakeUp
