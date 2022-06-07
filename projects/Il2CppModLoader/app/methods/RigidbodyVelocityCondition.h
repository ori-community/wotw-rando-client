#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::RigidbodyVelocityCondition {
    IL2CPP_REGISTER_METHOD(0x01354F40, bool, Validate, (app::RigidbodyVelocityCondition * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::RigidbodyVelocityCondition * this_ptr))
}
