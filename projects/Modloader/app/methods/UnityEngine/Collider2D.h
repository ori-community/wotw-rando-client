#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/Collider2D.h>
#include <Modloader/app/structs/Collider2D__Array.h>
#include <Modloader/app/structs/ColliderDistance2D.h>
#include <Modloader/app/structs/ColliderErrorState2D__Enum.h>
#include <Modloader/app/structs/CompositeCollider2D.h>
#include <Modloader/app/structs/ContactFilter2D.h>
#include <Modloader/app/structs/ContactPoint2D__Array.h>
#include <Modloader/app/structs/PhysicsMaterial2D.h>
#include <Modloader/app/structs/RaycastHit2D__Array.h>
#include <Modloader/app/structs/Rigidbody2D.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::UnityEngine::Collider2D {
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::Collider2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0316CC90, float, get_density, app::Collider2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0316CCE0, void, set_density, app::Collider2D* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x0316CD40, bool, get_isTrigger, app::Collider2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0316CD90, void, set_isTrigger, app::Collider2D* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0316CDF0, bool, get_usedByEffector, app::Collider2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0316CE40, void, set_usedByEffector, app::Collider2D* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0316CEA0, bool, get_usedByComposite, app::Collider2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0316CEF0, void, set_usedByComposite, app::Collider2D* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0316CF50, app::CompositeCollider2D*, get_composite, app::Collider2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0316CFA0, app::Vector2, get_offset, app::Collider2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0316D010, void, set_offset, app::Collider2D* this_ptr, app::Vector2 value)
    IL2CPP_REGISTER_METHOD(0x0316D070, app::Rigidbody2D*, get_attachedRigidbody, app::Collider2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0316D0C0, int32_t, get_shapeCount, app::Collider2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0316D110, app::Bounds, get_bounds, app::Collider2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0316D1A0, app::ColliderErrorState2D__Enum, get_errorState, app::Collider2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0316D1F0, bool, get_compositeCapable, app::Collider2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0316D240, app::PhysicsMaterial2D*, get_sharedMaterial, app::Collider2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0316D290, void, set_sharedMaterial, app::Collider2D* this_ptr, app::PhysicsMaterial2D* value)
    IL2CPP_REGISTER_METHOD(0x0316D2F0, float, get_friction, app::Collider2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0316D340, float, get_bounciness, app::Collider2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0316D390, bool, IsTouching_1, app::Collider2D* this_ptr, app::Collider2D* collider)
    IL2CPP_REGISTER_METHOD(0x0316D3F0, bool, IsTouching_2, app::Collider2D* this_ptr, app::Collider2D* collider, app::ContactFilter2D contact_filter)
    IL2CPP_REGISTER_METHOD(
        0x0316D480,
        bool,
        IsTouching_OtherColliderWithFilter,
        app::Collider2D* this_ptr,
        app::Collider2D* collider,
        app::ContactFilter2D contact_filter
    )
    IL2CPP_REGISTER_METHOD(0x0316D4F0, bool, IsTouching_3, app::Collider2D* this_ptr, app::ContactFilter2D contact_filter)
    IL2CPP_REGISTER_METHOD(0x0316D560, bool, IsTouching_AnyColliderWithFilter, app::Collider2D* this_ptr, app::ContactFilter2D contact_filter)
    IL2CPP_REGISTER_METHOD(0x0316D5C0, bool, IsTouchingLayers_1, app::Collider2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0316D620, bool, IsTouchingLayers_2, app::Collider2D* this_ptr, int32_t layer_mask)
    IL2CPP_REGISTER_METHOD(0x0316D680, bool, OverlapPoint, app::Collider2D* this_ptr, app::Vector2 point)
    IL2CPP_REGISTER_METHOD(0x0316D6E0, app::ColliderDistance2D, Distance, app::Collider2D* this_ptr, app::Collider2D* collider)
    IL2CPP_REGISTER_METHOD(
        0x0316D7B0,
        int32_t,
        OverlapCollider,
        app::Collider2D* this_ptr,
        app::ContactFilter2D contact_filter,
        app::Collider2D__Array* results
    )
    IL2CPP_REGISTER_METHOD(0x0316D830, int32_t, GetContacts_1, app::Collider2D* this_ptr, app::ContactPoint2D__Array* contacts)
    IL2CPP_REGISTER_METHOD(
        0x0316D950,
        int32_t,
        GetContacts_2,
        app::Collider2D* this_ptr,
        app::ContactFilter2D contact_filter,
        app::ContactPoint2D__Array* contacts
    )
    IL2CPP_REGISTER_METHOD(0x0316DA30, int32_t, GetContacts_3, app::Collider2D* this_ptr, app::Collider2D__Array* colliders)
    IL2CPP_REGISTER_METHOD(
        0x0316DB50,
        int32_t,
        GetContacts_4,
        app::Collider2D* this_ptr,
        app::ContactFilter2D contact_filter,
        app::Collider2D__Array* colliders
    )
    IL2CPP_REGISTER_METHOD(0x0316DC30, int32_t, Cast_1, app::Collider2D* this_ptr, app::Vector2 direction, app::RaycastHit2D__Array* results)
    IL2CPP_REGISTER_METHOD(0x0316DE80, int32_t, Cast_2, app::Collider2D* this_ptr, app::Vector2 direction, app::RaycastHit2D__Array* results, float distance)
    IL2CPP_REGISTER_METHOD(
        0x0316E0E0,
        int32_t,
        Cast_3,
        app::Collider2D* this_ptr,
        app::Vector2 direction,
        app::RaycastHit2D__Array* results,
        float distance,
        bool ignore_sibling_colliders
    )
    IL2CPP_REGISTER_METHOD(
        0x0316E350,
        int32_t,
        Cast_4,
        app::Collider2D* this_ptr,
        app::Vector2 direction,
        app::ContactFilter2D contact_filter,
        app::RaycastHit2D__Array* results
    )
    IL2CPP_REGISTER_METHOD(
        0x0316E3F0,
        int32_t,
        Cast_5,
        app::Collider2D* this_ptr,
        app::Vector2 direction,
        app::ContactFilter2D contact_filter,
        app::RaycastHit2D__Array* results,
        float distance
    )
    IL2CPP_REGISTER_METHOD(
        0x0316E490,
        int32_t,
        Cast_6,
        app::Collider2D* this_ptr,
        app::Vector2 direction,
        app::ContactFilter2D contact_filter,
        app::RaycastHit2D__Array* results,
        float distance,
        bool ignore_sibling_colliders
    )
    IL2CPP_REGISTER_METHOD(
        0x0316E540,
        int32_t,
        Cast_Internal,
        app::Collider2D* this_ptr,
        app::Vector2 direction,
        float distance,
        app::ContactFilter2D contact_filter,
        bool ignore_sibling_colliders,
        app::RaycastHit2D__Array* results
    )
    IL2CPP_REGISTER_METHOD(0x0316E5E0, int32_t, Raycast_1, app::Collider2D* this_ptr, app::Vector2 direction, app::RaycastHit2D__Array* results)
    IL2CPP_REGISTER_METHOD(0x0316E6C0, int32_t, Raycast_2, app::Collider2D* this_ptr, app::Vector2 direction, app::RaycastHit2D__Array* results, float distance)
    IL2CPP_REGISTER_METHOD(
        0x0316E7B0,
        int32_t,
        Raycast_3,
        app::Collider2D* this_ptr,
        app::Vector2 direction,
        app::RaycastHit2D__Array* results,
        float distance,
        int32_t layer_mask
    )
    IL2CPP_REGISTER_METHOD(
        0x0316E8A0,
        int32_t,
        Raycast_4,
        app::Collider2D* this_ptr,
        app::Vector2 direction,
        app::RaycastHit2D__Array* results,
        float distance,
        int32_t layer_mask,
        float min_depth
    )
    IL2CPP_REGISTER_METHOD(
        0x0316E990,
        int32_t,
        Raycast_5,
        app::Collider2D* this_ptr,
        app::Vector2 direction,
        app::RaycastHit2D__Array* results,
        float distance,
        int32_t layer_mask,
        float min_depth,
        float max_depth
    )
    IL2CPP_REGISTER_METHOD(
        0x0316EA80,
        int32_t,
        Raycast_6,
        app::Collider2D* this_ptr,
        app::Vector2 direction,
        app::ContactFilter2D contact_filter,
        app::RaycastHit2D__Array* results
    )
    IL2CPP_REGISTER_METHOD(
        0x0316EB20,
        int32_t,
        Raycast_7,
        app::Collider2D* this_ptr,
        app::Vector2 direction,
        app::ContactFilter2D contact_filter,
        app::RaycastHit2D__Array* results,
        float distance
    )
    IL2CPP_REGISTER_METHOD(
        0x0316EBC0,
        int32_t,
        Raycast_Internal,
        app::Collider2D* this_ptr,
        app::Vector2 direction,
        float distance,
        app::ContactFilter2D contact_filter,
        app::RaycastHit2D__Array* results
    )
    IL2CPP_REGISTER_METHOD(0x0316EC50, void, get_offset_Injected, app::Collider2D* this_ptr, app::Vector2* ret)
    IL2CPP_REGISTER_METHOD(0x0316ECB0, void, set_offset_Injected, app::Collider2D* this_ptr, app::Vector2* value)
    IL2CPP_REGISTER_METHOD(0x0316ED10, void, get_bounds_Injected, app::Collider2D* this_ptr, app::Bounds* ret)
    IL2CPP_REGISTER_METHOD(
        0x0316ED70,
        bool,
        IsTouching_OtherColliderWithFilter_Injected,
        app::Collider2D* this_ptr,
        app::Collider2D* collider,
        app::ContactFilter2D* contact_filter
    )
    IL2CPP_REGISTER_METHOD(0x0316EDE0, bool, IsTouching_AnyColliderWithFilter_Injected, app::Collider2D* this_ptr, app::ContactFilter2D* contact_filter)
    IL2CPP_REGISTER_METHOD(0x0316EE40, bool, OverlapPoint_Injected, app::Collider2D* this_ptr, app::Vector2* point)
    IL2CPP_REGISTER_METHOD(
        0x0316EEA0,
        int32_t,
        Cast_Internal_Injected,
        app::Collider2D* this_ptr,
        app::Vector2* direction,
        float distance,
        app::ContactFilter2D* contact_filter,
        bool ignore_sibling_colliders,
        app::RaycastHit2D__Array* results
    )
    IL2CPP_REGISTER_METHOD(
        0x0316EF30,
        int32_t,
        Raycast_Internal_Injected,
        app::Collider2D* this_ptr,
        app::Vector2* direction,
        float distance,
        app::ContactFilter2D* contact_filter,
        app::RaycastHit2D__Array* results
    )
} // namespace app::classes::UnityEngine::Collider2D
