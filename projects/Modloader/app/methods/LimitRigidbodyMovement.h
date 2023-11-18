#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LimitRigidbodyMovement.h>
#include <Modloader/app/structs/Transform.h>

namespace app::classes::LimitRigidbodyMovement {
    IL2CPP_REGISTER_METHOD(0x00FA4000, void, PerformAttachment, (app::LimitRigidbodyMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FA4450, void, OnUpdatePhysics, (app::LimitRigidbodyMovement * this_ptr, float dt))
    IL2CPP_REGISTER_METHOD(0x00FA49F0, app::Transform*, get_ConnectedTransform, (app::LimitRigidbodyMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FA4AC0, void, ctor, (app::LimitRigidbodyMovement * this_ptr))
} // namespace app::classes::LimitRigidbodyMovement
