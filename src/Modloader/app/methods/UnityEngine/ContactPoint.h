#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/ContactPoint__Boxed.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::UnityEngine::ContactPoint {
    IL2CPP_REGISTER_METHOD(0x001EB5F0, app::Vector3, get_point, app::ContactPoint__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001EB680, app::Vector3, get_normal, app::ContactPoint__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00244220, app::Collider*, get_thisCollider, app::ContactPoint__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00244270, app::Collider*, get_otherCollider, app::ContactPoint__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030A2D60, app::Collider*, GetColliderByInstanceID, int32_t instance_i_d)
} // namespace app::classes::UnityEngine::ContactPoint
