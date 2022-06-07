#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::RigidbodyMovement {
    IL2CPP_REGISTER_METHOD(0x00913C50, void, Awake, (app::RigidbodyMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00913CE0, void, ApplyForce, (app::RigidbodyMovement * this_ptr, app::Vector3 force))
    IL2CPP_REGISTER_METHOD(0x00913EE0, void, ApplyImpulseForce, (app::RigidbodyMovement * this_ptr, app::Vector3 force))
    IL2CPP_REGISTER_METHOD(0x00914080, void, ApplySpringForce, (app::RigidbodyMovement * this_ptr, float force_per_unit, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x00914330, void, MultiplySpeedOverTime, (app::RigidbodyMovement * this_ptr, float multiplier))
    IL2CPP_REGISTER_METHOD(0x00914530, void, ApplyDrag, (app::RigidbodyMovement * this_ptr, float drag))
    IL2CPP_REGISTER_METHOD(0x00911F20, app::Vector3, get_Velocity, (app::RigidbodyMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00911FB0, void, set_Velocity, (app::RigidbodyMovement * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::RigidbodyMovement * this_ptr))
}
