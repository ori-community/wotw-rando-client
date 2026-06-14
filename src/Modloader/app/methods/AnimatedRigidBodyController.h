#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AnimatedRigidBodyController.h>

namespace app::classes::AnimatedRigidBodyController {
    IL2CPP_REGISTER_METHOD(0x004FBC40, void, FixedUpdate, app::AnimatedRigidBodyController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::AnimatedRigidBodyController* this_ptr)
} // namespace app::classes::AnimatedRigidBodyController
