#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::PhysicsScene {
    IL2CPP_REGISTER_METHOD(0x002442E0, app::String *, ToString, (app::PhysicsScene__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001EBC90, int32_t, GetHashCode, (app::PhysicsScene__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002443F0, bool, Equals_1, (app::PhysicsScene__Boxed * this_ptr, app::Object * other))
    IL2CPP_REGISTER_METHOD(0x00217410, bool, Equals_2, (app::PhysicsScene__Boxed * this_ptr, app::PhysicsScene other))
    IL2CPP_REGISTER_METHOD(0x002444C0, bool, Raycast_1, (app::PhysicsScene__Boxed * this_ptr, app::Vector3 origin, app::Vector3 direction, float max_distance, int32_t layer_mask, app::QueryTriggerInteraction__Enum query_trigger_interaction))
    IL2CPP_REGISTER_METHOD(0x030AA670, bool, Internal_RaycastTest, (app::PhysicsScene physics_scene, app::Ray ray, float max_distance, int32_t layer_mask, app::QueryTriggerInteraction__Enum query_trigger_interaction))
    IL2CPP_REGISTER_METHOD(0x00244520, bool, Raycast_2, (app::PhysicsScene__Boxed * this_ptr, app::Vector3 origin, app::Vector3 direction, app::RaycastHit * hit_info, float max_distance, int32_t layer_mask, app::QueryTriggerInteraction__Enum query_trigger_interaction))
    IL2CPP_REGISTER_METHOD(0x030AA970, bool, Internal_Raycast, (app::PhysicsScene physics_scene, app::Ray ray, float max_distance, app::RaycastHit * hit, int32_t layer_mask, app::QueryTriggerInteraction__Enum query_trigger_interaction))
    IL2CPP_REGISTER_METHOD(0x00244590, int32_t, Raycast_3, (app::PhysicsScene__Boxed * this_ptr, app::Vector3 origin, app::Vector3 direction, app::RaycastHit__Array * raycast_hits, float max_distance, int32_t layer_mask, app::QueryTriggerInteraction__Enum query_trigger_interaction))
    IL2CPP_REGISTER_METHOD(0x030AABE0, int32_t, Internal_RaycastNonAlloc, (app::PhysicsScene physics_scene, app::Ray ray, app::RaycastHit__Array * raycast_hits, float max_distance, int32_t mask, app::QueryTriggerInteraction__Enum query_trigger_interaction))
    IL2CPP_REGISTER_METHOD(0x030AAC70, bool, Internal_RaycastTest_Injected, (app::PhysicsScene * physics_scene, app::Ray * ray, float max_distance, int32_t layer_mask, app::QueryTriggerInteraction__Enum query_trigger_interaction))
    IL2CPP_REGISTER_METHOD(0x030AAD00, bool, Internal_Raycast_Injected, (app::PhysicsScene * physics_scene, app::Ray * ray, float max_distance, app::RaycastHit * hit, int32_t layer_mask, app::QueryTriggerInteraction__Enum query_trigger_interaction))
    IL2CPP_REGISTER_METHOD(0x030AAD90, int32_t, Internal_RaycastNonAlloc_Injected, (app::PhysicsScene * physics_scene, app::Ray * ray, app::RaycastHit__Array * raycast_hits, float max_distance, int32_t mask, app::QueryTriggerInteraction__Enum query_trigger_interaction))
}
