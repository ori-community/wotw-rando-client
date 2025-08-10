#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/Collider__Array.h>
#include <Modloader/app/structs/PhysicsScene.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/QueryTriggerInteraction__Enum.h>
#include <Modloader/app/structs/Ray.h>
#include <Modloader/app/structs/RaycastHit.h>
#include <Modloader/app/structs/RaycastHit__Array.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::UnityEngine::Physics {
    IL2CPP_REGISTER_METHOD(0x030A3D30, app::Vector3, get_gravity, )
    IL2CPP_REGISTER_METHOD(0x030A3DB0, float, get_sleepThreshold, )
    IL2CPP_REGISTER_METHOD(0x030A3E00, app::PhysicsScene, get_defaultPhysicsScene, )
    IL2CPP_REGISTER_METHOD(0x030A3E60, void, IgnoreCollision_1, app::Collider* collider1, app::Collider* collider2, bool ignore)
    IL2CPP_REGISTER_METHOD(0x030A3EE0, void, IgnoreCollision_2, app::Collider* collider1, app::Collider* collider2)
    IL2CPP_REGISTER_METHOD(0x030A3F50, void, IgnoreLayerCollision_1, int32_t layer1, int32_t layer2, bool ignore)
    IL2CPP_REGISTER_METHOD(0x030A3FC0, void, IgnoreLayerCollision_2, int32_t layer1, int32_t layer2)
    IL2CPP_REGISTER_METHOD(0x030A4020, bool, GetIgnoreLayerCollision, int32_t layer1, int32_t layer2)
    IL2CPP_REGISTER_METHOD(
        0x030A4080,
        bool,
        Raycast_1,
        app::Vector3 origin,
        app::Vector3 direction,
        float max_distance,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(0x030A4160, bool, Raycast_2, app::Vector3 origin, app::Vector3 direction, float max_distance, int32_t layer_mask)
    IL2CPP_REGISTER_METHOD(0x030A4240, bool, Raycast_3, app::Vector3 origin, app::Vector3 direction, float max_distance)
    IL2CPP_REGISTER_METHOD(0x030A4310, bool, Raycast_4, app::Vector3 origin, app::Vector3 direction)
    IL2CPP_REGISTER_METHOD(
        0x030A43E0,
        bool,
        Raycast_5,
        app::Vector3 origin,
        app::Vector3 direction,
        app::RaycastHit* hit_info,
        float max_distance,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x030A44D0,
        bool,
        Raycast_6,
        app::Vector3 origin,
        app::Vector3 direction,
        app::RaycastHit* hit_info,
        float max_distance,
        int32_t layer_mask
    )
    IL2CPP_REGISTER_METHOD(0x030A45C0, bool, Raycast_7, app::Vector3 origin, app::Vector3 direction, app::RaycastHit* hit_info, float max_distance)
    IL2CPP_REGISTER_METHOD(0x030A46A0, bool, Raycast_8, app::Vector3 origin, app::Vector3 direction, app::RaycastHit* hit_info)
    IL2CPP_REGISTER_METHOD(
        0x030A4780,
        bool,
        Raycast_9,
        app::Ray ray,
        float max_distance,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(0x030A4860, bool, Raycast_10, app::Ray ray, float max_distance, int32_t layer_mask)
    IL2CPP_REGISTER_METHOD(0x030A4930, bool, Raycast_11, app::Ray ray, float max_distance)
    IL2CPP_REGISTER_METHOD(0x030A4A00, bool, Raycast_12, app::Ray ray)
    IL2CPP_REGISTER_METHOD(
        0x030A4AC0,
        bool,
        Raycast_13,
        app::Ray ray,
        app::RaycastHit* hit_info,
        float max_distance,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(0x030A4BA0, bool, Raycast_14, app::Ray ray, app::RaycastHit* hit_info, float max_distance, int32_t layer_mask)
    IL2CPP_REGISTER_METHOD(0x030A4C80, bool, Raycast_15, app::Ray ray, app::RaycastHit* hit_info, float max_distance)
    IL2CPP_REGISTER_METHOD(0x030A4D60, bool, Raycast_16, app::Ray ray, app::RaycastHit* hit_info)
    IL2CPP_REGISTER_METHOD(
        0x030A4E40,
        bool,
        Linecast_1,
        app::Vector3 start,
        app::Vector3 end,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(0x030A4FF0, bool, Linecast_2, app::Vector3 start, app::Vector3 end, int32_t layer_mask)
    IL2CPP_REGISTER_METHOD(0x030A5040, bool, Linecast_3, app::Vector3 start, app::Vector3 end)
    IL2CPP_REGISTER_METHOD(
        0x030A5090,
        bool,
        Linecast_4,
        app::Vector3 start,
        app::Vector3 end,
        app::RaycastHit* hit_info,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(0x030A5250, bool, Linecast_5, app::Vector3 start, app::Vector3 end, app::RaycastHit* hit_info, int32_t layer_mask)
    IL2CPP_REGISTER_METHOD(
        0x030A52A0,
        bool,
        Query_CapsuleCast,
        app::PhysicsScene physics_scene,
        app::Vector3 point1,
        app::Vector3 point2,
        float radius,
        app::Vector3 direction,
        float max_distance,
        app::RaycastHit* hit_info,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x030A5360,
        bool,
        Internal_CapsuleCast,
        app::PhysicsScene physics_scene,
        app::Vector3 point1,
        app::Vector3 point2,
        float radius,
        app::Vector3 direction,
        app::RaycastHit* hit_info,
        float max_distance,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x030A5590,
        bool,
        CapsuleCast_1,
        app::Vector3 point1,
        app::Vector3 point2,
        float radius,
        app::Vector3 direction,
        app::RaycastHit* hit_info,
        float max_distance,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x030A57C0,
        bool,
        CapsuleCast_2,
        app::Vector3 point1,
        app::Vector3 point2,
        float radius,
        app::Vector3 direction,
        app::RaycastHit* hit_info,
        float max_distance,
        int32_t layer_mask
    )
    IL2CPP_REGISTER_METHOD(
        0x030A5850,
        bool,
        Query_SphereCast,
        app::PhysicsScene physics_scene,
        app::Vector3 origin,
        float radius,
        app::Vector3 direction,
        float max_distance,
        app::RaycastHit* hit_info,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x030A5900,
        bool,
        Internal_SphereCast,
        app::PhysicsScene physics_scene,
        app::Vector3 origin,
        float radius,
        app::Vector3 direction,
        app::RaycastHit* hit_info,
        float max_distance,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x030A5AF0,
        bool,
        SphereCast_1,
        app::Vector3 origin,
        float radius,
        app::Vector3 direction,
        app::RaycastHit* hit_info,
        float max_distance,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x030A5BF0,
        bool,
        SphereCast_2,
        app::Vector3 origin,
        float radius,
        app::Vector3 direction,
        app::RaycastHit* hit_info,
        float max_distance,
        int32_t layer_mask
    )
    IL2CPP_REGISTER_METHOD(
        0x030A5CF0,
        bool,
        SphereCast_3,
        app::Vector3 origin,
        float radius,
        app::Vector3 direction,
        app::RaycastHit* hit_info,
        float max_distance
    )
    IL2CPP_REGISTER_METHOD(
        0x030A5DF0,
        bool,
        SphereCast_4,
        app::Ray ray,
        float radius,
        float max_distance,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(0x030A5F00, bool, SphereCast_5, app::Ray ray, float radius, float max_distance, int32_t layer_mask)
    IL2CPP_REGISTER_METHOD(
        0x030A6020,
        bool,
        SphereCast_6,
        app::Ray ray,
        float radius,
        app::RaycastHit* hit_info,
        float max_distance,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(0x030A6110, bool, SphereCast_7, app::Ray ray, float radius, app::RaycastHit* hit_info, float max_distance, int32_t layer_mask)
    IL2CPP_REGISTER_METHOD(
        0x030A6150,
        bool,
        Query_BoxCast,
        app::PhysicsScene physics_scene,
        app::Vector3 center,
        app::Vector3 half_extents,
        app::Vector3 direction,
        app::Quaternion orientation,
        float max_distance,
        app::RaycastHit* out_hit,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x030A6210,
        bool,
        Internal_BoxCast,
        app::PhysicsScene physics_scene,
        app::Vector3 center,
        app::Vector3 half_extents,
        app::Quaternion orientation,
        app::Vector3 direction,
        app::RaycastHit* hit_info,
        float max_distance,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x030A6400,
        bool,
        BoxCast_1,
        app::Vector3 center,
        app::Vector3 half_extents,
        app::Vector3 direction,
        app::Quaternion orientation,
        float max_distance,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x030A6550,
        bool,
        BoxCast_2,
        app::Vector3 center,
        app::Vector3 half_extents,
        app::Vector3 direction,
        app::RaycastHit* hit_info,
        app::Quaternion orientation,
        float max_distance,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x030A6690,
        app::RaycastHit__Array*,
        Internal_RaycastAll,
        app::PhysicsScene physics_scene,
        app::Ray ray,
        float max_distance,
        int32_t mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x030A6720,
        app::RaycastHit__Array*,
        RaycastAll_1,
        app::Vector3 origin,
        app::Vector3 direction,
        float max_distance,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x030A6980,
        app::RaycastHit__Array*,
        RaycastAll_2,
        app::Vector3 origin,
        app::Vector3 direction,
        float max_distance,
        int32_t layer_mask
    )
    IL2CPP_REGISTER_METHOD(0x030A69D0, app::RaycastHit__Array*, RaycastAll_3, app::Vector3 origin, app::Vector3 direction, float max_distance)
    IL2CPP_REGISTER_METHOD(0x030A6A20, app::RaycastHit__Array*, RaycastAll_4, app::Vector3 origin, app::Vector3 direction)
    IL2CPP_REGISTER_METHOD(
        0x030A6A80,
        app::RaycastHit__Array*,
        RaycastAll_5,
        app::Ray ray,
        float max_distance,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(0x030A6AD0, app::RaycastHit__Array*, RaycastAll_6, app::Ray ray, float max_distance, int32_t layer_mask)
    IL2CPP_REGISTER_METHOD(0x030A6B20, app::RaycastHit__Array*, RaycastAll_7, app::Ray ray, float max_distance)
    IL2CPP_REGISTER_METHOD(0x030A6B70, app::RaycastHit__Array*, RaycastAll_8, app::Ray ray)
    IL2CPP_REGISTER_METHOD(
        0x030A6BD0,
        int32_t,
        RaycastNonAlloc_1,
        app::Ray ray,
        app::RaycastHit__Array* results,
        float max_distance,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(0x030A6CB0, int32_t, RaycastNonAlloc_2, app::Ray ray, app::RaycastHit__Array* results, float max_distance, int32_t layer_mask)
    IL2CPP_REGISTER_METHOD(0x030A6D90, int32_t, RaycastNonAlloc_3, app::Ray ray, app::RaycastHit__Array* results, float max_distance)
    IL2CPP_REGISTER_METHOD(0x030A6E70, int32_t, RaycastNonAlloc_4, app::Ray ray, app::RaycastHit__Array* results)
    IL2CPP_REGISTER_METHOD(
        0x030A6F50,
        int32_t,
        RaycastNonAlloc_5,
        app::Vector3 origin,
        app::Vector3 direction,
        app::RaycastHit__Array* results,
        float max_distance,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x030A7040,
        int32_t,
        RaycastNonAlloc_6,
        app::Vector3 origin,
        app::Vector3 direction,
        app::RaycastHit__Array* results,
        float max_distance,
        int32_t layer_mask
    )
    IL2CPP_REGISTER_METHOD(
        0x030A7130,
        int32_t,
        RaycastNonAlloc_7,
        app::Vector3 origin,
        app::Vector3 direction,
        app::RaycastHit__Array* results,
        float max_distance
    )
    IL2CPP_REGISTER_METHOD(0x030A7210, int32_t, RaycastNonAlloc_8, app::Vector3 origin, app::Vector3 direction, app::RaycastHit__Array* results)
    IL2CPP_REGISTER_METHOD(
        0x030A72F0,
        app::RaycastHit__Array*,
        Query_CapsuleCastAll,
        app::PhysicsScene physics_scene,
        app::Vector3 p0,
        app::Vector3 p1,
        float radius,
        app::Vector3 direction,
        float max_distance,
        int32_t mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x030A73A0,
        app::RaycastHit__Array*,
        CapsuleCastAll,
        app::Vector3 point1,
        app::Vector3 point2,
        float radius,
        app::Vector3 direction,
        float max_distance,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x030A7590,
        app::RaycastHit__Array*,
        Query_SphereCastAll,
        app::PhysicsScene physics_scene,
        app::Vector3 origin,
        float radius,
        app::Vector3 direction,
        float max_distance,
        int32_t mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x030A7640,
        app::RaycastHit__Array*,
        SphereCastAll_1,
        app::Vector3 origin,
        float radius,
        app::Vector3 direction,
        float max_distance,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(0x030A7800, app::RaycastHit__Array*, SphereCastAll_2, app::Vector3 origin, float radius, app::Vector3 direction, float max_distance)
    IL2CPP_REGISTER_METHOD(
        0x030A7850,
        app::RaycastHit__Array*,
        SphereCastAll_3,
        app::Ray ray,
        float radius,
        float max_distance,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(0x030A78B0, app::RaycastHit__Array*, SphereCastAll_4, app::Ray ray, float radius, float max_distance)
    IL2CPP_REGISTER_METHOD(
        0x030A7920,
        app::Collider__Array*,
        OverlapCapsule_Internal,
        app::PhysicsScene physics_scene,
        app::Vector3 point0,
        app::Vector3 point1,
        float radius,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x030A79B0,
        app::Collider__Array*,
        OverlapCapsule,
        app::Vector3 point0,
        app::Vector3 point1,
        float radius,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x030A7AD0,
        app::Collider__Array*,
        OverlapSphere_Internal,
        app::PhysicsScene physics_scene,
        app::Vector3 position,
        float radius,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x030A7B60,
        app::Collider__Array*,
        OverlapSphere_1,
        app::Vector3 position,
        float radius,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(0x030A7C50, app::Collider__Array*, OverlapSphere_2, app::Vector3 position, float radius, int32_t layer_mask)
    IL2CPP_REGISTER_METHOD(0x030A7C80, app::Collider__Array*, OverlapSphere_3, app::Vector3 position, float radius)
    IL2CPP_REGISTER_METHOD(0x00495B20, bool, get_autoSimulation, )
    IL2CPP_REGISTER_METHOD(0x030A7CC0, void, set_autoSimulation, bool value)
    IL2CPP_REGISTER_METHOD(0x030A7D10, void, SyncTransforms, )
    IL2CPP_REGISTER_METHOD(0x00495A80, bool, get_autoSyncTransforms, )
    IL2CPP_REGISTER_METHOD(0x030A7D60, void, set_autoSyncTransforms, bool value)
    IL2CPP_REGISTER_METHOD(
        0x030A7DB0,
        bool,
        Query_ComputePenetration,
        app::Collider* collider_a,
        app::Vector3 position_a,
        app::Quaternion rotation_a,
        app::Collider* collider_b,
        app::Vector3 position_b,
        app::Quaternion rotation_b,
        app::Vector3* direction,
        float* distance
    )
    IL2CPP_REGISTER_METHOD(
        0x030A7E70,
        bool,
        ComputePenetration,
        app::Collider* collider_a,
        app::Vector3 position_a,
        app::Quaternion rotation_a,
        app::Collider* collider_b,
        app::Vector3 position_b,
        app::Quaternion rotation_b,
        app::Vector3* direction,
        float* distance
    )
    IL2CPP_REGISTER_METHOD(
        0x030A8030,
        int32_t,
        OverlapSphereNonAlloc_Internal,
        app::PhysicsScene physics_scene,
        app::Vector3 position,
        float radius,
        app::Collider__Array* results,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x030A80C0,
        int32_t,
        OverlapSphereNonAlloc_1,
        app::Vector3 position,
        float radius,
        app::Collider__Array* results,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(0x030A81C0, int32_t, OverlapSphereNonAlloc_2, app::Vector3 position, float radius, app::Collider__Array* results, int32_t layer_mask)
    IL2CPP_REGISTER_METHOD(
        0x030A81F0,
        bool,
        CheckSphere_Internal,
        app::PhysicsScene physics_scene,
        app::Vector3 position,
        float radius,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x030A8280,
        bool,
        CheckSphere_1,
        app::Vector3 position,
        float radius,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(0x030A8370, bool, CheckSphere_2, app::Vector3 position, float radius, int32_t layer_mask)
    IL2CPP_REGISTER_METHOD(
        0x030A83A0,
        int32_t,
        Internal_CapsuleCastNonAlloc,
        app::PhysicsScene physics_scene,
        app::Vector3 p0,
        app::Vector3 p1,
        float radius,
        app::Vector3 direction,
        app::RaycastHit__Array* raycast_hits,
        float max_distance,
        int32_t mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x030A8460,
        int32_t,
        CapsuleCastNonAlloc,
        app::Vector3 point1,
        app::Vector3 point2,
        float radius,
        app::Vector3 direction,
        app::RaycastHit__Array* results,
        float max_distance,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x030A8590,
        int32_t,
        Internal_SphereCastNonAlloc,
        app::PhysicsScene physics_scene,
        app::Vector3 origin,
        float radius,
        app::Vector3 direction,
        app::RaycastHit__Array* raycast_hits,
        float max_distance,
        int32_t mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x030A8640,
        int32_t,
        SphereCastNonAlloc_1,
        app::Vector3 origin,
        float radius,
        app::Vector3 direction,
        app::RaycastHit__Array* results,
        float max_distance,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x030A8740,
        int32_t,
        SphereCastNonAlloc_2,
        app::Vector3 origin,
        float radius,
        app::Vector3 direction,
        app::RaycastHit__Array* results,
        float max_distance,
        int32_t layer_mask
    )
    IL2CPP_REGISTER_METHOD(
        0x030A8860,
        int32_t,
        SphereCastNonAlloc_3,
        app::Ray ray,
        float radius,
        app::RaycastHit__Array* results,
        float max_distance,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x030A8980,
        int32_t,
        SphereCastNonAlloc_4,
        app::Ray ray,
        float radius,
        app::RaycastHit__Array* results,
        float max_distance,
        int32_t layer_mask
    )
    IL2CPP_REGISTER_METHOD(
        0x030A89C0,
        bool,
        CheckCapsule_Internal,
        app::PhysicsScene physics_scene,
        app::Vector3 start,
        app::Vector3 end,
        float radius,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x030A8A50,
        bool,
        CheckCapsule,
        app::Vector3 start,
        app::Vector3 end,
        float radius,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x030A8B70,
        bool,
        CheckBox_Internal,
        app::PhysicsScene physics_scene,
        app::Vector3 center,
        app::Vector3 half_extents,
        app::Quaternion orientation,
        int32_t layermask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x030A8C00,
        bool,
        CheckBox,
        app::Vector3 center,
        app::Vector3 half_extents,
        app::Quaternion orientation,
        int32_t layermask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x030A8D20,
        app::Collider__Array*,
        OverlapBox_Internal,
        app::PhysicsScene physics_scene,
        app::Vector3 center,
        app::Vector3 half_extents,
        app::Quaternion orientation,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x030A8DB0,
        app::Collider__Array*,
        OverlapBox,
        app::Vector3 center,
        app::Vector3 half_extents,
        app::Quaternion orientation,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x030A8ED0,
        int32_t,
        OverlapBoxNonAlloc_Internal,
        app::PhysicsScene physics_scene,
        app::Vector3 center,
        app::Vector3 half_extents,
        app::Collider__Array* results,
        app::Quaternion orientation,
        int32_t mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x030A8F70,
        int32_t,
        OverlapBoxNonAlloc_1,
        app::Vector3 center,
        app::Vector3 half_extents,
        app::Collider__Array* results,
        app::Quaternion orientation,
        int32_t mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x030A90B0,
        int32_t,
        OverlapBoxNonAlloc_2,
        app::Vector3 center,
        app::Vector3 half_extents,
        app::Collider__Array* results,
        app::Quaternion orientation,
        int32_t mask
    )
    IL2CPP_REGISTER_METHOD(
        0x030A91E0,
        int32_t,
        Internal_BoxCastNonAlloc,
        app::PhysicsScene physics_scene,
        app::Vector3 center,
        app::Vector3 half_extents,
        app::Vector3 direction,
        app::RaycastHit__Array* raycast_hits,
        app::Quaternion orientation,
        float max_distance,
        int32_t mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x030A92A0,
        int32_t,
        BoxCastNonAlloc,
        app::Vector3 center,
        app::Vector3 half_extents,
        app::Vector3 direction,
        app::RaycastHit__Array* results,
        app::Quaternion orientation,
        float max_distance,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x030A93E0,
        app::RaycastHit__Array*,
        Internal_BoxCastAll,
        app::PhysicsScene physics_scene,
        app::Vector3 center,
        app::Vector3 half_extents,
        app::Vector3 direction,
        app::Quaternion orientation,
        float max_distance,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x030A9490,
        app::RaycastHit__Array*,
        BoxCastAll,
        app::Vector3 center,
        app::Vector3 half_extents,
        app::Vector3 direction,
        app::Quaternion orientation,
        float max_distance,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x030A9670,
        int32_t,
        OverlapCapsuleNonAlloc_Internal,
        app::PhysicsScene physics_scene,
        app::Vector3 point0,
        app::Vector3 point1,
        float radius,
        app::Collider__Array* results,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x030A9710,
        int32_t,
        OverlapCapsuleNonAlloc,
        app::Vector3 point0,
        app::Vector3 point1,
        float radius,
        app::Collider__Array* results,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(0x030A9840, void, get_gravity_Injected, app::Vector3* ret)
    IL2CPP_REGISTER_METHOD(0x030A9890, void, get_defaultPhysicsScene_Injected, app::PhysicsScene* ret)
    IL2CPP_REGISTER_METHOD(
        0x030A98E0,
        bool,
        Query_CapsuleCast_Injected,
        app::PhysicsScene* physics_scene,
        app::Vector3* point1,
        app::Vector3* point2,
        float radius,
        app::Vector3* direction,
        float max_distance,
        app::RaycastHit* hit_info,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x030A9970,
        bool,
        Query_SphereCast_Injected,
        app::PhysicsScene* physics_scene,
        app::Vector3* origin,
        float radius,
        app::Vector3* direction,
        float max_distance,
        app::RaycastHit* hit_info,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x030A9A00,
        bool,
        Query_BoxCast_Injected,
        app::PhysicsScene* physics_scene,
        app::Vector3* center,
        app::Vector3* half_extents,
        app::Vector3* direction,
        app::Quaternion* orientation,
        float max_distance,
        app::RaycastHit* out_hit,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x030A9A90,
        app::RaycastHit__Array*,
        Internal_RaycastAll_Injected,
        app::PhysicsScene* physics_scene,
        app::Ray* ray,
        float max_distance,
        int32_t mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x030A9B20,
        app::RaycastHit__Array*,
        Query_CapsuleCastAll_Injected,
        app::PhysicsScene* physics_scene,
        app::Vector3* p0,
        app::Vector3* p1,
        float radius,
        app::Vector3* direction,
        float max_distance,
        int32_t mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x030A9BB0,
        app::RaycastHit__Array*,
        Query_SphereCastAll_Injected,
        app::PhysicsScene* physics_scene,
        app::Vector3* origin,
        float radius,
        app::Vector3* direction,
        float max_distance,
        int32_t mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x030A9C40,
        app::Collider__Array*,
        OverlapCapsule_Internal_Injected,
        app::PhysicsScene* physics_scene,
        app::Vector3* point0,
        app::Vector3* point1,
        float radius,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x030A9CD0,
        app::Collider__Array*,
        OverlapSphere_Internal_Injected,
        app::PhysicsScene* physics_scene,
        app::Vector3* position,
        float radius,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x030A9D60,
        bool,
        Query_ComputePenetration_Injected,
        app::Collider* collider_a,
        app::Vector3* position_a,
        app::Quaternion* rotation_a,
        app::Collider* collider_b,
        app::Vector3* position_b,
        app::Quaternion* rotation_b,
        app::Vector3* direction,
        float* distance
    )
    IL2CPP_REGISTER_METHOD(
        0x030A9DF0,
        int32_t,
        OverlapSphereNonAlloc_Internal_Injected,
        app::PhysicsScene* physics_scene,
        app::Vector3* position,
        float radius,
        app::Collider__Array* results,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x030A9E80,
        bool,
        CheckSphere_Internal_Injected,
        app::PhysicsScene* physics_scene,
        app::Vector3* position,
        float radius,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x030A9F10,
        int32_t,
        Internal_CapsuleCastNonAlloc_Injected,
        app::PhysicsScene* physics_scene,
        app::Vector3* p0,
        app::Vector3* p1,
        float radius,
        app::Vector3* direction,
        app::RaycastHit__Array* raycast_hits,
        float max_distance,
        int32_t mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x030A9FA0,
        int32_t,
        Internal_SphereCastNonAlloc_Injected,
        app::PhysicsScene* physics_scene,
        app::Vector3* origin,
        float radius,
        app::Vector3* direction,
        app::RaycastHit__Array* raycast_hits,
        float max_distance,
        int32_t mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x030AA030,
        bool,
        CheckCapsule_Internal_Injected,
        app::PhysicsScene* physics_scene,
        app::Vector3* start,
        app::Vector3* end,
        float radius,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x030AA0C0,
        bool,
        CheckBox_Internal_Injected,
        app::PhysicsScene* physics_scene,
        app::Vector3* center,
        app::Vector3* half_extents,
        app::Quaternion* orientation,
        int32_t layermask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x030AA150,
        app::Collider__Array*,
        OverlapBox_Internal_Injected,
        app::PhysicsScene* physics_scene,
        app::Vector3* center,
        app::Vector3* half_extents,
        app::Quaternion* orientation,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x030AA1E0,
        int32_t,
        OverlapBoxNonAlloc_Internal_Injected,
        app::PhysicsScene* physics_scene,
        app::Vector3* center,
        app::Vector3* half_extents,
        app::Collider__Array* results,
        app::Quaternion* orientation,
        int32_t mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x030AA270,
        int32_t,
        Internal_BoxCastNonAlloc_Injected,
        app::PhysicsScene* physics_scene,
        app::Vector3* center,
        app::Vector3* half_extents,
        app::Vector3* direction,
        app::RaycastHit__Array* raycast_hits,
        app::Quaternion* orientation,
        float max_distance,
        int32_t mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x030AA300,
        app::RaycastHit__Array*,
        Internal_BoxCastAll_Injected,
        app::PhysicsScene* physics_scene,
        app::Vector3* center,
        app::Vector3* half_extents,
        app::Vector3* direction,
        app::Quaternion* orientation,
        float max_distance,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x030AA390,
        int32_t,
        OverlapCapsuleNonAlloc_Internal_Injected,
        app::PhysicsScene* physics_scene,
        app::Vector3* point0,
        app::Vector3* point1,
        float radius,
        app::Collider__Array* results,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
} // namespace app::classes::UnityEngine::Physics
