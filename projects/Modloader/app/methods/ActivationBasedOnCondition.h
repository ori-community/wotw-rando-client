#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ActivationBasedOnCondition {
    IL2CPP_REGISTER_METHOD(0x004C8F60, void, Awake, (app::ActivationBasedOnCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C8F70, void, UpdateActivation, (app::ActivationBasedOnCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C8F60, void, FixedUpdate, (app::ActivationBasedOnCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ActivationBasedOnCondition * this_ptr))
} // namespace app::classes::ActivationBasedOnCondition
