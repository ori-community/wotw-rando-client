#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Collider2D.h>
#include <Modloader/app/structs/Collider2D__Array.h>
#include <Modloader/app/structs/ColliderDistance2D.h>
#include <Modloader/app/structs/CollisionDetectionMode2D__Enum.h>
#include <Modloader/app/structs/ContactFilter2D.h>
#include <Modloader/app/structs/ContactPoint2D__Array.h>
#include <Modloader/app/structs/ForceMode2D__Enum.h>
#include <Modloader/app/structs/PhysicsMaterial2D.h>
#include <Modloader/app/structs/RaycastHit2D__Array.h>
#include <Modloader/app/structs/Rigidbody2D.h>
#include <Modloader/app/structs/RigidbodyConstraints2D__Enum.h>
#include <Modloader/app/structs/RigidbodyInterpolation2D__Enum.h>
#include <Modloader/app/structs/RigidbodySleepMode2D__Enum.h>
#include <Modloader/app/structs/RigidbodyType2D__Enum.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::UnityEngine::Rigidbody2D {
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::Rigidbody2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03172420, app::Vector2, get_position, app::Rigidbody2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03172490, void, set_position, app::Rigidbody2D* this_ptr, app::Vector2 value)
    IL2CPP_REGISTER_METHOD(0x031724F0, float, get_rotation, app::Rigidbody2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03172540, void, set_rotation, app::Rigidbody2D* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x031725A0, void, MovePosition, app::Rigidbody2D* this_ptr, app::Vector2 position)
    IL2CPP_REGISTER_METHOD(0x03172600, void, MoveRotation, app::Rigidbody2D* this_ptr, float angle)
    IL2CPP_REGISTER_METHOD(0x03172660, app::Vector2, get_velocity, app::Rigidbody2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031726D0, void, set_velocity, app::Rigidbody2D* this_ptr, app::Vector2 value)
    IL2CPP_REGISTER_METHOD(0x03172730, float, get_angularVelocity, app::Rigidbody2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03172780, void, set_angularVelocity, app::Rigidbody2D* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x031727E0, bool, get_useAutoMass, app::Rigidbody2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03172830, void, set_useAutoMass, app::Rigidbody2D* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x03172890, float, get_mass, app::Rigidbody2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031728E0, void, set_mass, app::Rigidbody2D* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x03172940, app::PhysicsMaterial2D*, get_sharedMaterial, app::Rigidbody2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03172990, void, set_sharedMaterial, app::Rigidbody2D* this_ptr, app::PhysicsMaterial2D* value)
    IL2CPP_REGISTER_METHOD(0x031729F0, app::Vector2, get_centerOfMass, app::Rigidbody2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03172A60, void, set_centerOfMass, app::Rigidbody2D* this_ptr, app::Vector2 value)
    IL2CPP_REGISTER_METHOD(0x03172AC0, app::Vector2, get_worldCenterOfMass, app::Rigidbody2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03172B30, float, get_inertia, app::Rigidbody2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03172B80, void, set_inertia, app::Rigidbody2D* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x03172BE0, float, get_drag, app::Rigidbody2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03172C30, void, set_drag, app::Rigidbody2D* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x03172C90, float, get_angularDrag, app::Rigidbody2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03172CE0, void, set_angularDrag, app::Rigidbody2D* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x03172D40, float, get_gravityScale, app::Rigidbody2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03172D90, void, set_gravityScale, app::Rigidbody2D* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x03172DF0, app::RigidbodyType2D__Enum, get_bodyType, app::Rigidbody2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03172E40, void, set_bodyType, app::Rigidbody2D* this_ptr, app::RigidbodyType2D__Enum value)
    IL2CPP_REGISTER_METHOD(0x03172EA0, void, SetDragBehaviour, app::Rigidbody2D* this_ptr, bool dragged)
    IL2CPP_REGISTER_METHOD(0x03172F00, bool, get_useFullKinematicContacts, app::Rigidbody2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03172F50, void, set_useFullKinematicContacts, app::Rigidbody2D* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x03172FB0, bool, get_isKinematic, app::Rigidbody2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03173010, void, set_isKinematic, app::Rigidbody2D* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x03173080, bool, get_fixedAngle, app::Rigidbody2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031730D0, void, set_fixedAngle, app::Rigidbody2D* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x03173130, bool, get_freezeRotation, app::Rigidbody2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03173180, void, set_freezeRotation, app::Rigidbody2D* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x031731E0, app::RigidbodyConstraints2D__Enum, get_constraints, app::Rigidbody2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03173230, void, set_constraints, app::Rigidbody2D* this_ptr, app::RigidbodyConstraints2D__Enum value)
    IL2CPP_REGISTER_METHOD(0x03173290, bool, IsSleeping, app::Rigidbody2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031732E0, bool, IsAwake, app::Rigidbody2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03173330, void, Sleep, app::Rigidbody2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03173380, void, WakeUp, app::Rigidbody2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031733D0, bool, get_simulated, app::Rigidbody2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03173420, void, set_simulated, app::Rigidbody2D* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x03173480, app::RigidbodyInterpolation2D__Enum, get_interpolation, app::Rigidbody2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031734D0, void, set_interpolation, app::Rigidbody2D* this_ptr, app::RigidbodyInterpolation2D__Enum value)
    IL2CPP_REGISTER_METHOD(0x03173530, app::RigidbodySleepMode2D__Enum, get_sleepMode, app::Rigidbody2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03173580, void, set_sleepMode, app::Rigidbody2D* this_ptr, app::RigidbodySleepMode2D__Enum value)
    IL2CPP_REGISTER_METHOD(0x031735E0, app::CollisionDetectionMode2D__Enum, get_collisionDetectionMode, app::Rigidbody2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03173630, void, set_collisionDetectionMode, app::Rigidbody2D* this_ptr, app::CollisionDetectionMode2D__Enum value)
    IL2CPP_REGISTER_METHOD(0x03173690, int32_t, get_attachedColliderCount, app::Rigidbody2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031736E0, bool, IsTouching_1, app::Rigidbody2D* this_ptr, app::Collider2D* collider)
    IL2CPP_REGISTER_METHOD(0x03173740, bool, IsTouching_2, app::Rigidbody2D* this_ptr, app::Collider2D* collider, app::ContactFilter2D contact_filter)
    IL2CPP_REGISTER_METHOD(
        0x031737D0,
        bool,
        IsTouching_OtherColliderWithFilter_Internal,
        app::Rigidbody2D* this_ptr,
        app::Collider2D* collider,
        app::ContactFilter2D contact_filter
    )
    IL2CPP_REGISTER_METHOD(0x03173840, bool, IsTouching_3, app::Rigidbody2D* this_ptr, app::ContactFilter2D contact_filter)
    IL2CPP_REGISTER_METHOD(0x031738B0, bool, IsTouching_AnyColliderWithFilter_Internal, app::Rigidbody2D* this_ptr, app::ContactFilter2D contact_filter)
    IL2CPP_REGISTER_METHOD(0x03173910, bool, IsTouchingLayers_1, app::Rigidbody2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03173970, bool, IsTouchingLayers_2, app::Rigidbody2D* this_ptr, int32_t layer_mask)
    IL2CPP_REGISTER_METHOD(0x031739D0, bool, OverlapPoint, app::Rigidbody2D* this_ptr, app::Vector2 point)
    IL2CPP_REGISTER_METHOD(0x03173A30, app::ColliderDistance2D, Distance, app::Rigidbody2D* this_ptr, app::Collider2D* collider)
    IL2CPP_REGISTER_METHOD(0x03173C60, app::ColliderDistance2D, Distance_Internal, app::Rigidbody2D* this_ptr, app::Collider2D* collider)
    IL2CPP_REGISTER_METHOD(0x03173D00, void, AddForce_1, app::Rigidbody2D* this_ptr, app::Vector2 force)
    IL2CPP_REGISTER_METHOD(0x03173D60, void, AddForce_2, app::Rigidbody2D* this_ptr, app::Vector2 force, app::ForceMode2D__Enum mode)
    IL2CPP_REGISTER_METHOD(0x03173DD0, void, AddRelativeForce_1, app::Rigidbody2D* this_ptr, app::Vector2 relative_force)
    IL2CPP_REGISTER_METHOD(0x03173E30, void, AddRelativeForce_2, app::Rigidbody2D* this_ptr, app::Vector2 relative_force, app::ForceMode2D__Enum mode)
    IL2CPP_REGISTER_METHOD(0x03173EA0, void, AddForceAtPosition_1, app::Rigidbody2D* this_ptr, app::Vector2 force, app::Vector2 position)
    IL2CPP_REGISTER_METHOD(
        0x03173F10,
        void,
        AddForceAtPosition_2,
        app::Rigidbody2D* this_ptr,
        app::Vector2 force,
        app::Vector2 position,
        app::ForceMode2D__Enum mode
    )
    IL2CPP_REGISTER_METHOD(0x03173F90, void, AddTorque_1, app::Rigidbody2D* this_ptr, float torque)
    IL2CPP_REGISTER_METHOD(0x03174000, void, AddTorque_2, app::Rigidbody2D* this_ptr, float torque, app::ForceMode2D__Enum mode)
    IL2CPP_REGISTER_METHOD(0x03174070, app::Vector2, GetPoint, app::Rigidbody2D* this_ptr, app::Vector2 point)
    IL2CPP_REGISTER_METHOD(0x031740E0, app::Vector2, GetRelativePoint, app::Rigidbody2D* this_ptr, app::Vector2 relative_point)
    IL2CPP_REGISTER_METHOD(0x03174150, app::Vector2, GetVector, app::Rigidbody2D* this_ptr, app::Vector2 vector)
    IL2CPP_REGISTER_METHOD(0x031741C0, app::Vector2, GetRelativeVector, app::Rigidbody2D* this_ptr, app::Vector2 relative_vector)
    IL2CPP_REGISTER_METHOD(0x03174230, app::Vector2, GetPointVelocity, app::Rigidbody2D* this_ptr, app::Vector2 point)
    IL2CPP_REGISTER_METHOD(0x031742A0, app::Vector2, GetRelativePointVelocity, app::Rigidbody2D* this_ptr, app::Vector2 relative_point)
    IL2CPP_REGISTER_METHOD(
        0x03174310,
        int32_t,
        OverlapCollider,
        app::Rigidbody2D* this_ptr,
        app::ContactFilter2D contact_filter,
        app::Collider2D__Array* results
    )
    IL2CPP_REGISTER_METHOD(0x03174380, int32_t, GetContacts_1, app::Rigidbody2D* this_ptr, app::ContactPoint2D__Array* contacts)
    IL2CPP_REGISTER_METHOD(
        0x031744A0,
        int32_t,
        GetContacts_2,
        app::Rigidbody2D* this_ptr,
        app::ContactFilter2D contact_filter,
        app::ContactPoint2D__Array* contacts
    )
    IL2CPP_REGISTER_METHOD(0x03174580, int32_t, GetContacts_3, app::Rigidbody2D* this_ptr, app::Collider2D__Array* colliders)
    IL2CPP_REGISTER_METHOD(
        0x031746A0,
        int32_t,
        GetContacts_4,
        app::Rigidbody2D* this_ptr,
        app::ContactFilter2D contact_filter,
        app::Collider2D__Array* colliders
    )
    IL2CPP_REGISTER_METHOD(0x03174780, int32_t, GetAttachedColliders, app::Rigidbody2D* this_ptr, app::Collider2D__Array* results)
    IL2CPP_REGISTER_METHOD(0x031747E0, int32_t, Cast_1, app::Rigidbody2D* this_ptr, app::Vector2 direction, app::RaycastHit2D__Array* results)
    IL2CPP_REGISTER_METHOD(0x03174810, int32_t, Cast_2, app::Rigidbody2D* this_ptr, app::Vector2 direction, app::RaycastHit2D__Array* results, float distance)
    IL2CPP_REGISTER_METHOD(
        0x03174830,
        int32_t,
        Cast_3,
        app::Rigidbody2D* this_ptr,
        app::Vector2 direction,
        app::ContactFilter2D contact_filter,
        app::RaycastHit2D__Array* results
    )
    IL2CPP_REGISTER_METHOD(
        0x031748D0,
        int32_t,
        Cast_4,
        app::Rigidbody2D* this_ptr,
        app::Vector2 direction,
        app::ContactFilter2D contact_filter,
        app::RaycastHit2D__Array* results,
        float distance
    )
    IL2CPP_REGISTER_METHOD(
        0x03174970,
        int32_t,
        Cast_Internal,
        app::Rigidbody2D* this_ptr,
        app::Vector2 direction,
        float distance,
        app::RaycastHit2D__Array* results
    )
    IL2CPP_REGISTER_METHOD(
        0x031749F0,
        int32_t,
        CastFiltered_Internal,
        app::Rigidbody2D* this_ptr,
        app::Vector2 direction,
        float distance,
        app::ContactFilter2D contact_filter,
        app::RaycastHit2D__Array* results
    )
    IL2CPP_REGISTER_METHOD(0x03174A80, void, get_position_Injected, app::Rigidbody2D* this_ptr, app::Vector2* ret)
    IL2CPP_REGISTER_METHOD(0x03174AE0, void, set_position_Injected, app::Rigidbody2D* this_ptr, app::Vector2* value)
    IL2CPP_REGISTER_METHOD(0x03174B40, void, MovePosition_Injected, app::Rigidbody2D* this_ptr, app::Vector2* position)
    IL2CPP_REGISTER_METHOD(0x03174BA0, void, get_velocity_Injected, app::Rigidbody2D* this_ptr, app::Vector2* ret)
    IL2CPP_REGISTER_METHOD(0x03174C00, void, set_velocity_Injected, app::Rigidbody2D* this_ptr, app::Vector2* value)
    IL2CPP_REGISTER_METHOD(0x03174C60, void, get_centerOfMass_Injected, app::Rigidbody2D* this_ptr, app::Vector2* ret)
    IL2CPP_REGISTER_METHOD(0x03174CC0, void, set_centerOfMass_Injected, app::Rigidbody2D* this_ptr, app::Vector2* value)
    IL2CPP_REGISTER_METHOD(0x03174D20, void, get_worldCenterOfMass_Injected, app::Rigidbody2D* this_ptr, app::Vector2* ret)
    IL2CPP_REGISTER_METHOD(
        0x03174D80,
        bool,
        IsTouching_OtherColliderWithFilter_Internal_Injected,
        app::Rigidbody2D* this_ptr,
        app::Collider2D* collider,
        app::ContactFilter2D* contact_filter
    )
    IL2CPP_REGISTER_METHOD(
        0x03174DF0,
        bool,
        IsTouching_AnyColliderWithFilter_Internal_Injected,
        app::Rigidbody2D* this_ptr,
        app::ContactFilter2D* contact_filter
    )
    IL2CPP_REGISTER_METHOD(0x03174E50, bool, OverlapPoint_Injected, app::Rigidbody2D* this_ptr, app::Vector2* point)
    IL2CPP_REGISTER_METHOD(0x03174EB0, void, Distance_Internal_Injected, app::Rigidbody2D* this_ptr, app::Collider2D* collider, app::ColliderDistance2D* ret)
    IL2CPP_REGISTER_METHOD(0x03174F20, void, AddForce_Injected, app::Rigidbody2D* this_ptr, app::Vector2* force, app::ForceMode2D__Enum mode)
    IL2CPP_REGISTER_METHOD(0x03174F90, void, AddRelativeForce_Injected, app::Rigidbody2D* this_ptr, app::Vector2* relative_force, app::ForceMode2D__Enum mode)
    IL2CPP_REGISTER_METHOD(
        0x03175000,
        void,
        AddForceAtPosition_Injected,
        app::Rigidbody2D* this_ptr,
        app::Vector2* force,
        app::Vector2* position,
        app::ForceMode2D__Enum mode
    )
    IL2CPP_REGISTER_METHOD(0x03175080, void, GetPoint_Injected, app::Rigidbody2D* this_ptr, app::Vector2* point, app::Vector2* ret)
    IL2CPP_REGISTER_METHOD(0x031750F0, void, GetRelativePoint_Injected, app::Rigidbody2D* this_ptr, app::Vector2* relative_point, app::Vector2* ret)
    IL2CPP_REGISTER_METHOD(0x03175160, void, GetVector_Injected, app::Rigidbody2D* this_ptr, app::Vector2* vector, app::Vector2* ret)
    IL2CPP_REGISTER_METHOD(0x031751D0, void, GetRelativeVector_Injected, app::Rigidbody2D* this_ptr, app::Vector2* relative_vector, app::Vector2* ret)
    IL2CPP_REGISTER_METHOD(0x03175240, void, GetPointVelocity_Injected, app::Rigidbody2D* this_ptr, app::Vector2* point, app::Vector2* ret)
    IL2CPP_REGISTER_METHOD(0x031752B0, void, GetRelativePointVelocity_Injected, app::Rigidbody2D* this_ptr, app::Vector2* relative_point, app::Vector2* ret)
    IL2CPP_REGISTER_METHOD(
        0x03175320,
        int32_t,
        OverlapCollider_Injected,
        app::Rigidbody2D* this_ptr,
        app::ContactFilter2D* contact_filter,
        app::Collider2D__Array* results
    )
    IL2CPP_REGISTER_METHOD(
        0x03175390,
        int32_t,
        Cast_Internal_Injected,
        app::Rigidbody2D* this_ptr,
        app::Vector2* direction,
        float distance,
        app::RaycastHit2D__Array* results
    )
    IL2CPP_REGISTER_METHOD(
        0x03175410,
        int32_t,
        CastFiltered_Internal_Injected,
        app::Rigidbody2D* this_ptr,
        app::Vector2* direction,
        float distance,
        app::ContactFilter2D* contact_filter,
        app::RaycastHit2D__Array* results
    )
} // namespace app::classes::UnityEngine::Rigidbody2D
