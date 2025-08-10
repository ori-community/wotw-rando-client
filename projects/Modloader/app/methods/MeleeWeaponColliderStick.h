#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_2_UnityEngine_Collider_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/Action_4_UnityEngine_Collider_UnityEngine_Vector3_UnityEngine_Vector3_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/Action_4_UnityEngine_Vector3_UnityEngine_Vector3_UnityEngine_Vector3_SurfaceMaterialType_.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Entity.h>
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/MeleeWeaponColliderStick.h>
#include <Modloader/app/structs/MeleeWeaponColliderStick_DebugCircle.h>
#include <Modloader/app/structs/SeinCharacter.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/UpdateType__Enum.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::MeleeWeaponColliderStick {
    IL2CPP_REGISTER_METHOD(
        0x009C8F20,
        void,
        add_OnCollision,
        app::MeleeWeaponColliderStick* this_ptr,
        app::Action_2_UnityEngine_Collider_UnityEngine_Vector3_* value
    )
    IL2CPP_REGISTER_METHOD(
        0x009C9010,
        void,
        remove_OnCollision,
        app::MeleeWeaponColliderStick* this_ptr,
        app::Action_2_UnityEngine_Collider_UnityEngine_Vector3_* value
    )
    IL2CPP_REGISTER_METHOD(
        0x009C9100,
        void,
        add_OnCollisionWithDirection,
        app::MeleeWeaponColliderStick* this_ptr,
        app::Action_4_UnityEngine_Collider_UnityEngine_Vector3_UnityEngine_Vector3_UnityEngine_Vector3_* value
    )
    IL2CPP_REGISTER_METHOD(
        0x009C91F0,
        void,
        remove_OnCollisionWithDirection,
        app::MeleeWeaponColliderStick* this_ptr,
        app::Action_4_UnityEngine_Collider_UnityEngine_Vector3_UnityEngine_Vector3_UnityEngine_Vector3_* value
    )
    IL2CPP_REGISTER_METHOD(
        0x009C92E0,
        void,
        add_OnGroundCollision,
        app::MeleeWeaponColliderStick* this_ptr,
        app::Action_4_UnityEngine_Vector3_UnityEngine_Vector3_UnityEngine_Vector3_SurfaceMaterialType_* value
    )
    IL2CPP_REGISTER_METHOD(
        0x009C93D0,
        void,
        remove_OnGroundCollision,
        app::MeleeWeaponColliderStick* this_ptr,
        app::Action_4_UnityEngine_Vector3_UnityEngine_Vector3_UnityEngine_Vector3_SurfaceMaterialType_* value
    )
    IL2CPP_REGISTER_METHOD(
        0x009C94C0,
        void,
        add_OnRecoilCollision,
        app::MeleeWeaponColliderStick* this_ptr,
        app::Action_2_UnityEngine_Collider_UnityEngine_Vector3_* value
    )
    IL2CPP_REGISTER_METHOD(
        0x009C95B0,
        void,
        remove_OnRecoilCollision,
        app::MeleeWeaponColliderStick* this_ptr,
        app::Action_2_UnityEngine_Collider_UnityEngine_Vector3_* value
    )
    IL2CPP_REGISTER_METHOD(0x009C96A0, int32_t, get_m_debugCircleAmout, app::MeleeWeaponColliderStick* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00989BF0, app::UpdateType__Enum, get_UpdateType, app::MeleeWeaponColliderStick* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009C9740, void, set_UpdateType, app::MeleeWeaponColliderStick* this_ptr, app::UpdateType__Enum value)
    IL2CPP_REGISTER_METHOD(0x009C9750, void, Finalize, app::MeleeWeaponColliderStick* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005065D0, bool, get_Register, app::MeleeWeaponColliderStick* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009C97E0, void, set_Register, app::MeleeWeaponColliderStick* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x009C98D0, void, InitializeStartPosition, app::MeleeWeaponColliderStick* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0061E2F0, bool, get_Enabled, app::MeleeWeaponColliderStick* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009C9D80, void, set_Enabled, app::MeleeWeaponColliderStick* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x009C9EF0, app::Entity*, get_Entity, app::MeleeWeaponColliderStick* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009C9FE0, app::SeinCharacter*, get_Sein, app::MeleeWeaponColliderStick* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009CA0D0, app::GroundEntityLocomotion*, get_OwnerLocomotion, app::MeleeWeaponColliderStick* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009CA200, bool, get_DoGroundChecksAlongWeaponLength, app::MeleeWeaponColliderStick* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009CA210, void, set_DoGroundChecksAlongWeaponLength, app::MeleeWeaponColliderStick* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x009CA220, void, OnUpdate, app::MeleeWeaponColliderStick* this_ptr, float dt)
    IL2CPP_REGISTER_METHOD(
        0x009CB440,
        bool,
        CheckForGroundCollision_1,
        app::MeleeWeaponColliderStick* this_ptr,
        app::Vector3 start_position,
        app::Vector3 end_position,
        app::Vector3 base_position,
        float radius,
        app::Color one,
        app::Color two
    )
    IL2CPP_REGISTER_METHOD(
        0x009CB5D0,
        bool,
        CheckForGroundCollision_2,
        app::MeleeWeaponColliderStick* this_ptr,
        app::Vector3 start_position,
        app::Vector3 end_position,
        float radius,
        app::Color one,
        app::Color two
    )
    IL2CPP_REGISTER_METHOD(0x009CB9C0, app::Transform*, TryGetOwnerTransform, app::MeleeWeaponColliderStick* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x009CBAF0,
        app::MeleeWeaponColliderStick_DebugCircle*,
        GetDebugCircle,
        app::MeleeWeaponColliderStick* this_ptr,
        app::Vector3 position
    )
    IL2CPP_REGISTER_METHOD(0x009CBDF0, void, UpdateDebugDrawing, app::MeleeWeaponColliderStick* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009CC090, void, ClearDebugData, app::MeleeWeaponColliderStick* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009CC400, void, ctor, app::MeleeWeaponColliderStick* this_ptr)
} // namespace app::classes::MeleeWeaponColliderStick
