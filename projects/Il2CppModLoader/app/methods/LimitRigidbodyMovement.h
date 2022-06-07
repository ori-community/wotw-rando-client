#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::LimitRigidbodyMovement {
    IL2CPP_REGISTER_METHOD(0x00FA4000, void, PerformAttachment, (app::LimitRigidbodyMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FA4450, void, OnUpdatePhysics, (app::LimitRigidbodyMovement * this_ptr, float dt))
    IL2CPP_REGISTER_METHOD(0x00FA49F0, app::Transform *, get_ConnectedTransform, (app::LimitRigidbodyMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FA4AC0, void, ctor, (app::LimitRigidbodyMovement * this_ptr))
}
