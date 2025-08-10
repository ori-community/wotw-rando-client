#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BoxCollider.h>
#include <Modloader/app/structs/CapsuleCollider.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/Collider__Array.h>
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/QueryTriggerInteraction__Enum.h>
#include <Modloader/app/structs/Ray.h>
#include <Modloader/app/structs/RaycastHit.h>
#include <Modloader/app/structs/RaycastHit__Array.h>
#include <Modloader/app/structs/SphereCollider.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::MoonPhysics {
    IL2CPP_REGISTER_METHOD(0x0145C220, void, IgnoreLayerCollision, int32_t layer1, int32_t layer2, bool ignore)
    IL2CPP_REGISTER_METHOD(0x0145C320, void, IgnoreCollision, app::Collider* collider1, app::Collider* collider2, bool ignore)
    IL2CPP_REGISTER_METHOD(0x0145C3F0, bool, FastSphereCast, app::Ray ray, float radius, app::RaycastHit* hit_info, float distance, app::LayerMask layer_mask)
    IL2CPP_REGISTER_METHOD(
        0x0145C9A0,
        bool,
        BoxCast_1,
        app::BoxCollider* box,
        app::Vector3 direction,
        float max_distance,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x0145CB70,
        bool,
        BoxCast_2,
        app::BoxCollider* box,
        app::Vector3 direction,
        app::RaycastHit* hit_info,
        float max_distance,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x0145CD30,
        app::RaycastHit__Array*,
        BoxCastAll,
        app::BoxCollider* box,
        app::Vector3 direction,
        float max_distance,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x0145CFB0,
        int32_t,
        BoxCastNonAlloc,
        app::BoxCollider* box,
        app::Vector3 direction,
        app::RaycastHit__Array* results,
        float max_distance,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(0x0145D190, bool, CheckBox, app::BoxCollider* box, int32_t layer_mask, app::QueryTriggerInteraction__Enum query_trigger_interaction)
    IL2CPP_REGISTER_METHOD(
        0x0145D350,
        app::Collider__Array*,
        OverlapBox,
        app::BoxCollider* box,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x0145D510,
        int32_t,
        OverlapBoxNonAlloc,
        app::BoxCollider* box,
        app::Collider__Array* results,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x0145D6E0,
        void,
        ToWorldSpaceBox,
        app::BoxCollider* box,
        app::Vector3* center,
        app::Vector3* half_extents,
        app::Quaternion* orientation
    )
    IL2CPP_REGISTER_METHOD(
        0x0145DB50,
        bool,
        SphereCast,
        app::SphereCollider* sphere,
        app::Vector3 direction,
        app::RaycastHit* hit_info,
        float max_distance,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x0145DD00,
        app::RaycastHit__Array*,
        SphereCastAll,
        app::SphereCollider* sphere,
        app::Vector3 direction,
        float max_distance,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x0145DE50,
        int32_t,
        SphereCastNonAlloc,
        app::SphereCollider* sphere,
        app::Vector3 direction,
        app::RaycastHit__Array* results,
        float max_distance,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x0145E000,
        bool,
        CheckSphere,
        app::SphereCollider* sphere,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x0145E110,
        app::Collider__Array*,
        OverlapSphere,
        app::SphereCollider* sphere,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x0145E220,
        int32_t,
        OverlapSphereNonAlloc,
        app::SphereCollider* sphere,
        app::Collider__Array* results,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(0x0145E340, void, ToWorldSpaceSphere, app::SphereCollider* sphere, app::Vector3* center, float* radius)
    IL2CPP_REGISTER_METHOD(
        0x0145E710,
        bool,
        CapsuleCast,
        app::CapsuleCollider* capsule,
        app::Vector3 direction,
        app::RaycastHit* hit_info,
        float max_distance,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x0145E870,
        app::RaycastHit__Array*,
        CapsuleCastAll,
        app::CapsuleCollider* capsule,
        app::Vector3 direction,
        float max_distance,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x0145EAE0,
        int32_t,
        CapsuleCastNonAlloc,
        app::CapsuleCollider* capsule,
        app::Vector3 direction,
        app::RaycastHit__Array* results,
        float max_distance,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x0145ECB0,
        bool,
        CheckCapsule,
        app::CapsuleCollider* capsule,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x0145EE50,
        app::Collider__Array*,
        OverlapCapsule,
        app::CapsuleCollider* capsule,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x0145EFF0,
        int32_t,
        OverlapCapsuleNonAlloc,
        app::CapsuleCollider* capsule,
        app::Collider__Array* results,
        int32_t layer_mask,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(0x0145F140, void, ToWorldSpaceCapsule, app::CapsuleCollider* capsule, app::Vector3* point0, app::Vector3* point1, float* radius)
    IL2CPP_REGISTER_METHOD(0x0145FA50, void, SortClosestToFurthest, app::RaycastHit__Array* hits, int32_t hit_count)
    IL2CPP_REGISTER_METHOD(0x0145FC70, app::Vector3, AbsVec3, app::Vector3 v)
    IL2CPP_REGISTER_METHOD(0x0145FD70, float, MaxVec3, app::Vector3 v)
    IL2CPP_REGISTER_METHOD(0x0145FE30, void, cctor, )
} // namespace app::classes::MoonPhysics
