#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ContactPoint__Array.h>
#include <Modloader/app/structs/Collision.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/ContactPoint.h>

namespace app::classes::UnityEngine::Collision {
    IL2CPP_REGISTER_METHOD(0x030A0120, app::ContactPoint__Array*, GetContacts_Internal, (app::Collision * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030A0130, app::Vector3, get_relativeVelocity, (app::Collision * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F234C0, app::Rigidbody*, get_rigidbody, (app::Collision * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F22F90, app::Collider*, get_collider, (app::Collision * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030A0150, app::Transform*, get_transform, (app::Collision * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030A0230, app::GameObject*, get_gameObject, (app::Collision * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F22020, int32_t, get_contactCount, (app::Collision * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030A0310, app::ContactPoint__Array*, get_contacts, (app::Collision * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030A03C0, app::ContactPoint, GetContact, (app::Collision * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0475A870, Collision_GetContact__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x030A0520, app::Vector3, get_impulse, (app::Collision * this_ptr))
} // namespace app::classes::UnityEngine::Collision
