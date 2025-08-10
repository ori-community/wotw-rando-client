#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Collider2D.h>
#include <Modloader/app/structs/Collider2D__Array.h>
#include <Modloader/app/structs/ColliderDistance2D.h>
#include <Modloader/app/structs/ContactFilter2D.h>
#include <Modloader/app/structs/ContactPoint2D__Array.h>
#include <Modloader/app/structs/PhysicsScene2D.h>
#include <Modloader/app/structs/Ray.h>
#include <Modloader/app/structs/RaycastHit2D.h>
#include <Modloader/app/structs/RaycastHit2D__Array.h>
#include <Modloader/app/structs/Rigidbody2D.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::UnityEngine::Physics2D {
    IL2CPP_REGISTER_METHOD(0x0316F310, app::PhysicsScene2D, get_defaultPhysicsScene, )
    IL2CPP_REGISTER_METHOD(0x0316F3F0, bool, get_queriesHitTriggers, )
    IL2CPP_REGISTER_METHOD(0x0316F440, int32_t, GetLayerCollisionMask, int32_t layer)
    IL2CPP_REGISTER_METHOD(0x0316F550, int32_t, GetLayerCollisionMask_Internal, int32_t layer)
    IL2CPP_REGISTER_METHOD(0x0316F5A0, app::ColliderDistance2D, Distance, app::Collider2D* collider_a, app::Collider2D* collider_b)
    IL2CPP_REGISTER_METHOD(0x0316F870, app::ColliderDistance2D, Distance_Internal, app::Collider2D* collider_a, app::Collider2D* collider_b)
    IL2CPP_REGISTER_METHOD(0x0316F990, app::RaycastHit2D, Raycast_1, app::Vector2 origin, app::Vector2 direction)
    IL2CPP_REGISTER_METHOD(0x0316FAA0, app::RaycastHit2D, Raycast_2, app::Vector2 origin, app::Vector2 direction, float distance)
    IL2CPP_REGISTER_METHOD(0x0316FBC0, app::RaycastHit2D, Raycast_3, app::Vector2 origin, app::Vector2 direction, float distance, int32_t layer_mask)
    IL2CPP_REGISTER_METHOD(
        0x0316FD90,
        app::RaycastHit2D,
        Raycast_4,
        app::Vector2 origin,
        app::Vector2 direction,
        float distance,
        int32_t layer_mask,
        float min_depth
    )
    IL2CPP_REGISTER_METHOD(
        0x0316FF60,
        app::RaycastHit2D,
        Raycast_5,
        app::Vector2 origin,
        app::Vector2 direction,
        float distance,
        int32_t layer_mask,
        float min_depth,
        float max_depth
    )
    IL2CPP_REGISTER_METHOD(
        0x03170120,
        int32_t,
        Raycast_6,
        app::Vector2 origin,
        app::Vector2 direction,
        app::ContactFilter2D contact_filter,
        app::RaycastHit2D__Array* results
    )
    IL2CPP_REGISTER_METHOD(
        0x03170280,
        int32_t,
        Raycast_7,
        app::Vector2 origin,
        app::Vector2 direction,
        app::ContactFilter2D contact_filter,
        app::RaycastHit2D__Array* results,
        float distance
    )
    IL2CPP_REGISTER_METHOD(0x031703F0, app::RaycastHit2D__Array*, GetRayIntersectionAll_1, app::Ray ray)
    IL2CPP_REGISTER_METHOD(0x031704E0, app::RaycastHit2D__Array*, GetRayIntersectionAll_2, app::Ray ray, float distance)
    IL2CPP_REGISTER_METHOD(0x031705E0, app::RaycastHit2D__Array*, GetRayIntersectionAll_3, app::Ray ray, float distance, int32_t layer_mask)
    IL2CPP_REGISTER_METHOD(
        0x031706E0,
        app::RaycastHit2D__Array*,
        GetRayIntersectionAll_Internal,
        app::PhysicsScene2D physics_scene,
        app::Vector3 origin,
        app::Vector3 direction,
        float distance,
        int32_t layer_mask
    )
    IL2CPP_REGISTER_METHOD(0x031707F0, int32_t, GetRayIntersectionNonAlloc_1, app::Ray ray, app::RaycastHit2D__Array* results)
    IL2CPP_REGISTER_METHOD(0x03170940, int32_t, GetRayIntersectionNonAlloc_2, app::Ray ray, app::RaycastHit2D__Array* results, float distance)
    IL2CPP_REGISTER_METHOD(
        0x03170AA0,
        int32_t,
        GetRayIntersectionNonAlloc_3,
        app::Ray ray,
        app::RaycastHit2D__Array* results,
        float distance,
        int32_t layer_mask
    )
    IL2CPP_REGISTER_METHOD(
        0x03170C00,
        int32_t,
        GetContacts_1,
        app::Collider2D* collider,
        app::ContactFilter2D contact_filter,
        app::ContactPoint2D__Array* contacts
    )
    IL2CPP_REGISTER_METHOD(
        0x03170D90,
        int32_t,
        GetContacts_2,
        app::Collider2D* collider,
        app::ContactFilter2D contact_filter,
        app::Collider2D__Array* colliders
    )
    IL2CPP_REGISTER_METHOD(
        0x03170F20,
        int32_t,
        GetContacts_3,
        app::Rigidbody2D* rigidbody,
        app::ContactFilter2D contact_filter,
        app::ContactPoint2D__Array* contacts
    )
    IL2CPP_REGISTER_METHOD(
        0x031710B0,
        int32_t,
        GetContacts_4,
        app::Rigidbody2D* rigidbody,
        app::ContactFilter2D contact_filter,
        app::Collider2D__Array* colliders
    )
    IL2CPP_REGISTER_METHOD(
        0x03171240,
        int32_t,
        GetColliderContacts,
        app::Collider2D* collider,
        app::ContactFilter2D contact_filter,
        app::ContactPoint2D__Array* results
    )
    IL2CPP_REGISTER_METHOD(
        0x03171330,
        int32_t,
        GetRigidbodyContacts,
        app::Rigidbody2D* rigidbody,
        app::ContactFilter2D contact_filter,
        app::ContactPoint2D__Array* results
    )
    IL2CPP_REGISTER_METHOD(
        0x03171420,
        int32_t,
        GetColliderContactsCollidersOnly,
        app::Collider2D* collider,
        app::ContactFilter2D contact_filter,
        app::Collider2D__Array* results
    )
    IL2CPP_REGISTER_METHOD(
        0x03171510,
        int32_t,
        GetRigidbodyContactsCollidersOnly,
        app::Rigidbody2D* rigidbody,
        app::ContactFilter2D contact_filter,
        app::Collider2D__Array* results
    )
    IL2CPP_REGISTER_METHOD(0x03171600, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x03171750, void, get_defaultPhysicsScene_Injected, app::PhysicsScene2D* ret)
    IL2CPP_REGISTER_METHOD(0x031717A0, void, Distance_Internal_Injected, app::Collider2D* collider_a, app::Collider2D* collider_b, app::ColliderDistance2D* ret)
    IL2CPP_REGISTER_METHOD(
        0x03171810,
        app::RaycastHit2D__Array*,
        GetRayIntersectionAll_Internal_Injected,
        app::PhysicsScene2D* physics_scene,
        app::Vector3* origin,
        app::Vector3* direction,
        float distance,
        int32_t layer_mask
    )
    IL2CPP_REGISTER_METHOD(
        0x031718A0,
        int32_t,
        GetColliderContacts_Injected,
        app::Collider2D* collider,
        app::ContactFilter2D* contact_filter,
        app::ContactPoint2D__Array* results
    )
    IL2CPP_REGISTER_METHOD(
        0x03171910,
        int32_t,
        GetRigidbodyContacts_Injected,
        app::Rigidbody2D* rigidbody,
        app::ContactFilter2D* contact_filter,
        app::ContactPoint2D__Array* results
    )
    IL2CPP_REGISTER_METHOD(
        0x03171980,
        int32_t,
        GetColliderContactsCollidersOnly_Injected,
        app::Collider2D* collider,
        app::ContactFilter2D* contact_filter,
        app::Collider2D__Array* results
    )
    IL2CPP_REGISTER_METHOD(
        0x031719F0,
        int32_t,
        GetRigidbodyContactsCollidersOnly_Injected,
        app::Rigidbody2D* rigidbody,
        app::ContactFilter2D* contact_filter,
        app::Collider2D__Array* results
    )
} // namespace app::classes::UnityEngine::Physics2D
