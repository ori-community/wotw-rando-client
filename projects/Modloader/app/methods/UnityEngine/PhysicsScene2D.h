#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Collider2D.h>
#include <Modloader/app/structs/Collider2D__Array.h>
#include <Modloader/app/structs/ContactFilter2D.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PhysicsScene2D.h>
#include <Modloader/app/structs/PhysicsScene2D__Boxed.h>
#include <Modloader/app/structs/Ray.h>
#include <Modloader/app/structs/RaycastHit2D.h>
#include <Modloader/app/structs/RaycastHit2D__Array.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::UnityEngine::PhysicsScene2D {
    IL2CPP_REGISTER_METHOD(0x0024A820, app::String*, ToString, (app::PhysicsScene2D__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001EBC90, int32_t, GetHashCode, (app::PhysicsScene2D__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0024A930, bool, Equals_1, (app::PhysicsScene2D__Boxed * this_ptr, app::Object* other))
    IL2CPP_REGISTER_METHOD(0x00217410, bool, Equals_2, (app::PhysicsScene2D__Boxed * this_ptr, app::PhysicsScene2D other))
    IL2CPP_REGISTER_METHOD(0x0024AA00, app::RaycastHit2D, Raycast_1, (app::PhysicsScene2D__Boxed * this_ptr, app::Vector2 origin, app::Vector2 direction, float distance, int32_t layer_mask))
    IL2CPP_REGISTER_METHOD(0x0024AA50, app::RaycastHit2D, Raycast_2, (app::PhysicsScene2D__Boxed * this_ptr, app::Vector2 origin, app::Vector2 direction, float distance, app::ContactFilter2D contact_filter))
    IL2CPP_REGISTER_METHOD(0x03171D00, app::RaycastHit2D, Raycast_Internal, (app::PhysicsScene2D physics_scene, app::Vector2 origin, app::Vector2 direction, float distance, app::ContactFilter2D contact_filter))
    IL2CPP_REGISTER_METHOD(0x0024AB40, int32_t, Raycast_3, (app::PhysicsScene2D__Boxed * this_ptr, app::Vector2 origin, app::Vector2 direction, float distance, app::ContactFilter2D contact_filter, app::RaycastHit2D__Array* results))
    IL2CPP_REGISTER_METHOD(0x03171E90, int32_t, RaycastNonAlloc_Internal, (app::PhysicsScene2D physics_scene, app::Vector2 origin, app::Vector2 direction, float distance, app::ContactFilter2D contact_filter, app::RaycastHit2D__Array* results))
    IL2CPP_REGISTER_METHOD(0x0024AB90, int32_t, GetRayIntersection, (app::PhysicsScene2D__Boxed * this_ptr, app::Ray ray, float distance, app::RaycastHit2D__Array* results, int32_t layer_mask))
    IL2CPP_REGISTER_METHOD(0x03171FE0, int32_t, GetRayIntersectionNonAlloc_Internal, (app::PhysicsScene2D physics_scene, app::Vector3 origin, app::Vector3 direction, float distance, int32_t layer_mask, app::RaycastHit2D__Array* results))
    IL2CPP_REGISTER_METHOD(0x0316D7B0, int32_t, OverlapCollider, (app::Collider2D * collider, app::ContactFilter2D contact_filter, app::Collider2D__Array* results))
    IL2CPP_REGISTER_METHOD(0x03172070, int32_t, OverlapCollider_Internal, (app::Collider2D * collider, app::ContactFilter2D contact_filter, app::Collider2D__Array* results))
    IL2CPP_REGISTER_METHOD(0x031720E0, void, Raycast_Internal_Injected, (app::PhysicsScene2D * physics_scene, app::Vector2* origin, app::Vector2* direction, float distance, app::ContactFilter2D* contact_filter, app::RaycastHit2D* ret))
    IL2CPP_REGISTER_METHOD(0x03172170, int32_t, RaycastNonAlloc_Internal_Injected, (app::PhysicsScene2D * physics_scene, app::Vector2* origin, app::Vector2* direction, float distance, app::ContactFilter2D* contact_filter, app::RaycastHit2D__Array* results))
    IL2CPP_REGISTER_METHOD(0x03172200, int32_t, GetRayIntersectionNonAlloc_Internal_Injected, (app::PhysicsScene2D * physics_scene, app::Vector3* origin, app::Vector3* direction, float distance, int32_t layer_mask, app::RaycastHit2D__Array* results))
    IL2CPP_REGISTER_METHOD(0x03172290, int32_t, OverlapCollider_Internal_Injected, (app::Collider2D * collider, app::ContactFilter2D* contact_filter, app::Collider2D__Array* results))
} // namespace app::classes::UnityEngine::PhysicsScene2D
