#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CollisionDetectionMode__Enum.h>
#include <Modloader/app/structs/ForceMode__Enum.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Quaternion__Array.h>
#include <Modloader/app/structs/QueryTriggerInteraction__Enum.h>
#include <Modloader/app/structs/RaycastHit.h>
#include <Modloader/app/structs/RaycastHit__Array.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/RigidbodyConstraints__Enum.h>
#include <Modloader/app/structs/RigidbodyInterpolation__Enum.h>
#include <Modloader/app/structs/Rigidbody__Array.h>
#include <Modloader/app/structs/Single__Array.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Vector3__Array.h>

namespace app::classes::UnityEngine::Rigidbody {
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::Rigidbody* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030ABAC0, app::Vector3, get_velocity, app::Rigidbody* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030ABB40, void, set_velocity, app::Rigidbody* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x030ABBA0, app::Vector3, get_angularVelocity, app::Rigidbody* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030ABC20, void, set_angularVelocity, app::Rigidbody* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x030ABC80, float, get_drag, app::Rigidbody* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030ABCD0, void, set_drag, app::Rigidbody* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x030ABD30, float, get_angularDrag, app::Rigidbody* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030ABD80, void, set_angularDrag, app::Rigidbody* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x030ABDE0, float, get_mass, app::Rigidbody* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030ABE30, void, set_mass, app::Rigidbody* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x030ABE90, void, SetDensity, app::Rigidbody* this_ptr, float density)
    IL2CPP_REGISTER_METHOD(0x030ABEF0, bool, get_useGravity, app::Rigidbody* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030ABF40, void, set_useGravity, app::Rigidbody* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x030ABFA0, bool, get_disableSimulation, app::Rigidbody* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030ABFF0, void, set_disableSimulation, app::Rigidbody* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x030AC050, float, get_maxDepenetrationVelocity, app::Rigidbody* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030AC0A0, void, set_maxDepenetrationVelocity, app::Rigidbody* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x030AC100, bool, get_isKinematic, app::Rigidbody* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030AC150, void, set_isKinematic, app::Rigidbody* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x030AC1B0, bool, get_freezeRotation, app::Rigidbody* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030AC200, void, set_freezeRotation, app::Rigidbody* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x030AC260, app::RigidbodyConstraints__Enum, get_constraints, app::Rigidbody* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030AC2B0, void, set_constraints, app::Rigidbody* this_ptr, app::RigidbodyConstraints__Enum value)
    IL2CPP_REGISTER_METHOD(0x030AC310, app::CollisionDetectionMode__Enum, get_collisionDetectionMode, app::Rigidbody* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030AC360, void, set_collisionDetectionMode, app::Rigidbody* this_ptr, app::CollisionDetectionMode__Enum value)
    IL2CPP_REGISTER_METHOD(0x030AC3C0, app::Vector3, get_centerOfMass, app::Rigidbody* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030AC440, void, set_centerOfMass, app::Rigidbody* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x030AC4A0, app::Vector3, get_worldCenterOfMass, app::Rigidbody* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030AC520, app::Quaternion, get_inertiaTensorRotation, app::Rigidbody* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030AC5A0, void, set_inertiaTensorRotation, app::Rigidbody* this_ptr, app::Quaternion value)
    IL2CPP_REGISTER_METHOD(0x030AC600, app::Vector3, get_inertiaTensor, app::Rigidbody* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030AC680, void, set_inertiaTensor, app::Rigidbody* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x030AC6E0, bool, get_detectCollisions, app::Rigidbody* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030AC730, void, set_detectCollisions, app::Rigidbody* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x030AC790, app::Vector3, get_position, app::Rigidbody* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030AC810, void, set_position, app::Rigidbody* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x030AC870, app::Quaternion, get_rotation, app::Rigidbody* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030AC8F0, void, set_rotation, app::Rigidbody* this_ptr, app::Quaternion value)
    IL2CPP_REGISTER_METHOD(0x030AC950, app::RigidbodyInterpolation__Enum, get_interpolation, app::Rigidbody* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030AC9A0, void, set_interpolation, app::Rigidbody* this_ptr, app::RigidbodyInterpolation__Enum value)
    IL2CPP_REGISTER_METHOD(0x030ACA00, int32_t, get_solverIterations, app::Rigidbody* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030ACA50, void, set_solverIterations, app::Rigidbody* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x030ACAB0, float, get_sleepThreshold, app::Rigidbody* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030ACB00, void, set_sleepThreshold, app::Rigidbody* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x030ACB60, float, get_maxAngularVelocity, app::Rigidbody* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030ACBB0, void, set_maxAngularVelocity, app::Rigidbody* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x030ACC10, void, MovePosition, app::Rigidbody* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x030ACC70, void, MoveRotation, app::Rigidbody* this_ptr, app::Quaternion rot)
    IL2CPP_REGISTER_METHOD(0x030ACCD0, void, Sleep, app::Rigidbody* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030ACD20, bool, IsSleeping, app::Rigidbody* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030ACD70, void, WakeUp, app::Rigidbody* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030ACDC0, void, ResetCenterOfMass, app::Rigidbody* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030ACE10, void, ResetInertiaTensor, app::Rigidbody* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030ACE60, app::Vector3, GetRelativePointVelocity, app::Rigidbody* this_ptr, app::Vector3 relative_point)
    IL2CPP_REGISTER_METHOD(0x030ACEF0, app::Vector3, GetPointVelocity, app::Rigidbody* this_ptr, app::Vector3 world_point)
    IL2CPP_REGISTER_METHOD(0x030ACF80, int32_t, get_solverVelocityIterations, app::Rigidbody* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030ACFD0, void, set_solverVelocityIterations, app::Rigidbody* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x030AD030, float, get_sleepVelocity, app::Rigidbody* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030AD080, void, set_sleepVelocity, app::Rigidbody* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x030AD0E0, float, get_sleepAngularVelocity, app::Rigidbody* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030AD130, void, set_sleepAngularVelocity, app::Rigidbody* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x030ACBB0, void, SetMaxAngularVelocity, app::Rigidbody* this_ptr, float a)
    IL2CPP_REGISTER_METHOD(0x00B1B670, bool, get_useConeFriction, app::Rigidbody* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, set_useConeFriction, app::Rigidbody* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x030ACA00, int32_t, get_solverIterationCount, app::Rigidbody* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030ACA50, void, set_solverIterationCount, app::Rigidbody* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x030ACF80, int32_t, get_solverVelocityIterationCount, app::Rigidbody* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030ACFD0, void, set_solverVelocityIterationCount, app::Rigidbody* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x030AD190, void, AddForce_1, app::Rigidbody* this_ptr, app::Vector3 force, app::ForceMode__Enum mode)
    IL2CPP_REGISTER_METHOD(0x030AD200, void, AddForce_2, app::Rigidbody* this_ptr, app::Vector3 force)
    IL2CPP_REGISTER_METHOD(0x030AD270, void, AddForce_3, app::Rigidbody* this_ptr, float x, float y, float z, app::ForceMode__Enum mode)
    IL2CPP_REGISTER_METHOD(0x030AD2F0, void, AddForce_4, app::Rigidbody* this_ptr, float x, float y, float z)
    IL2CPP_REGISTER_METHOD(0x030AD370, void, AddRelativeForce_1, app::Rigidbody* this_ptr, app::Vector3 force, app::ForceMode__Enum mode)
    IL2CPP_REGISTER_METHOD(0x030AD3E0, void, AddRelativeForce_2, app::Rigidbody* this_ptr, app::Vector3 force)
    IL2CPP_REGISTER_METHOD(0x030AD450, void, AddRelativeForce_3, app::Rigidbody* this_ptr, float x, float y, float z, app::ForceMode__Enum mode)
    IL2CPP_REGISTER_METHOD(0x030AD4D0, void, AddRelativeForce_4, app::Rigidbody* this_ptr, float x, float y, float z)
    IL2CPP_REGISTER_METHOD(0x030AD550, void, AddTorque_1, app::Rigidbody* this_ptr, app::Vector3 torque, app::ForceMode__Enum mode)
    IL2CPP_REGISTER_METHOD(0x030AD5C0, void, AddTorque_2, app::Rigidbody* this_ptr, app::Vector3 torque)
    IL2CPP_REGISTER_METHOD(0x030AD630, void, AddTorque_3, app::Rigidbody* this_ptr, float x, float y, float z, app::ForceMode__Enum mode)
    IL2CPP_REGISTER_METHOD(0x030AD6B0, void, AddTorque_4, app::Rigidbody* this_ptr, float x, float y, float z)
    IL2CPP_REGISTER_METHOD(0x030AD730, void, AddRelativeTorque_1, app::Rigidbody* this_ptr, app::Vector3 torque, app::ForceMode__Enum mode)
    IL2CPP_REGISTER_METHOD(0x030AD7A0, void, AddRelativeTorque_2, app::Rigidbody* this_ptr, app::Vector3 torque)
    IL2CPP_REGISTER_METHOD(0x030AD810, void, AddRelativeTorque_3, app::Rigidbody* this_ptr, float x, float y, float z, app::ForceMode__Enum mode)
    IL2CPP_REGISTER_METHOD(0x030AD890, void, AddRelativeTorque_4, app::Rigidbody* this_ptr, float x, float y, float z)
    IL2CPP_REGISTER_METHOD(
        0x030AD910,
        void,
        AddForceAtPosition_1,
        app::Rigidbody* this_ptr,
        app::Vector3 force,
        app::Vector3 position,
        app::ForceMode__Enum mode
    )
    IL2CPP_REGISTER_METHOD(0x030AD990, void, AddForceAtPosition_2, app::Rigidbody* this_ptr, app::Vector3 force, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(
        0x030ADA20,
        void,
        AddExplosionForce_1,
        app::Rigidbody* this_ptr,
        float explosion_force,
        app::Vector3 explosion_position,
        float explosion_radius,
        float upwards_modifier,
        app::ForceMode__Enum mode
    )
    IL2CPP_REGISTER_METHOD(
        0x030ADAC0,
        void,
        AddExplosionForce_2,
        app::Rigidbody* this_ptr,
        float explosion_force,
        app::Vector3 explosion_position,
        float explosion_radius,
        float upwards_modifier
    )
    IL2CPP_REGISTER_METHOD(
        0x030ADB60,
        void,
        AddExplosionForce_3,
        app::Rigidbody* this_ptr,
        float explosion_force,
        app::Vector3 explosion_position,
        float explosion_radius
    )
    IL2CPP_REGISTER_METHOD(
        0x030ADC00,
        void,
        Internal_ClosestPointOnBounds,
        app::Rigidbody* this_ptr,
        app::Vector3 point,
        app::Vector3* out_pos,
        float* distance
    )
    IL2CPP_REGISTER_METHOD(0x030ADC80, app::Vector3, ClosestPointOnBounds, app::Rigidbody* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(
        0x030ADDD0,
        app::RaycastHit,
        SweepTest_1,
        app::Rigidbody* this_ptr,
        app::Vector3 direction,
        float max_distance,
        app::QueryTriggerInteraction__Enum query_trigger_interaction,
        bool* has_hit
    )
    IL2CPP_REGISTER_METHOD(
        0x030ADEC0,
        bool,
        SweepTest_2,
        app::Rigidbody* this_ptr,
        app::Vector3 direction,
        app::RaycastHit* hit_info,
        float max_distance,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(0x030AE0A0, bool, SweepTest_3, app::Rigidbody* this_ptr, app::Vector3 direction, app::RaycastHit* hit_info, float max_distance)
    IL2CPP_REGISTER_METHOD(0x030AE0D0, bool, SweepTest_4, app::Rigidbody* this_ptr, app::Vector3 direction, app::RaycastHit* hit_info)
    IL2CPP_REGISTER_METHOD(
        0x030AE110,
        app::RaycastHit__Array*,
        Internal_SweepTestAll,
        app::Rigidbody* this_ptr,
        app::Vector3 direction,
        float max_distance,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(
        0x030AE190,
        app::RaycastHit__Array*,
        SweepTestAll_1,
        app::Rigidbody* this_ptr,
        app::Vector3 direction,
        float max_distance,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
    IL2CPP_REGISTER_METHOD(0x030AE310, app::RaycastHit__Array*, SweepTestAll_2, app::Rigidbody* this_ptr, app::Vector3 direction, float max_distance)
    IL2CPP_REGISTER_METHOD(0x030AE340, app::RaycastHit__Array*, SweepTestAll_3, app::Rigidbody* this_ptr, app::Vector3 direction)
    IL2CPP_REGISTER_METHOD(
        0x030AE380,
        void,
        GetRigidbodyPropertiesBatched,
        app::Rigidbody__Array* rigidbodies,
        int32_t start,
        int32_t count,
        app::Vector3__Array* position,
        app::Quaternion__Array* rotation,
        app::Vector3__Array* velocity,
        app::Vector3__Array* ang_velocity,
        app::Single__Array* euler_z
    )
    IL2CPP_REGISTER_METHOD(
        0x030AE4D0,
        void,
        Internal_GetRigidbodyPropertiesBatched,
        app::Rigidbody__Array* rigidbodies,
        int32_t start,
        int32_t count,
        app::Vector3__Array* position,
        app::Quaternion__Array* rotation,
        app::Vector3__Array* velocity,
        app::Vector3__Array* ang_velocity,
        app::Single__Array* euler_z
    )
    IL2CPP_REGISTER_METHOD(
        0x030AE550,
        void,
        SetRigidbodyVelocityBatched,
        app::Rigidbody__Array* rigidbodies,
        int32_t start,
        int32_t count,
        app::Vector3__Array* velocity
    )
    IL2CPP_REGISTER_METHOD(
        0x030AE600,
        void,
        Internal_SetRigidbodyVelocityBatched,
        app::Rigidbody__Array* rigidbodies,
        int32_t start,
        int32_t count,
        app::Vector3__Array* velocity
    )
    IL2CPP_REGISTER_METHOD(
        0x030AE680,
        void,
        AddForceAndTorqueBatched,
        app::Rigidbody__Array* rigidbodies,
        int32_t start,
        int32_t count,
        app::Vector3__Array* forces,
        app::Vector3__Array* torques,
        app::ForceMode__Enum force_mode,
        app::ForceMode__Enum torque_mode
    )
    IL2CPP_REGISTER_METHOD(
        0x030AE780,
        void,
        Internal_AddForceAndTorqueBatched,
        app::Rigidbody__Array* rigidbodies,
        int32_t start,
        int32_t count,
        app::Vector3__Array* force,
        app::Vector3__Array* torque,
        app::ForceMode__Enum force_mode,
        app::ForceMode__Enum torque_mode
    )
    IL2CPP_REGISTER_METHOD(
        0x030AE800,
        void,
        AddForcesBatched,
        app::Rigidbody__Array* rigidbodies,
        int32_t start,
        int32_t count,
        app::Vector3__Array* forces,
        app::ForceMode__Enum mode
    )
    IL2CPP_REGISTER_METHOD(
        0x030AE8C0,
        void,
        Internal_AddForceBatched,
        app::Rigidbody__Array* rigidbodies,
        int32_t start,
        int32_t count,
        app::Vector3__Array* force,
        app::ForceMode__Enum mode
    )
    IL2CPP_REGISTER_METHOD(0x030AE940, void, get_velocity_Injected, app::Rigidbody* this_ptr, app::Vector3* ret)
    IL2CPP_REGISTER_METHOD(0x030AE9A0, void, set_velocity_Injected, app::Rigidbody* this_ptr, app::Vector3* value)
    IL2CPP_REGISTER_METHOD(0x030AEA00, void, get_angularVelocity_Injected, app::Rigidbody* this_ptr, app::Vector3* ret)
    IL2CPP_REGISTER_METHOD(0x030AEA60, void, set_angularVelocity_Injected, app::Rigidbody* this_ptr, app::Vector3* value)
    IL2CPP_REGISTER_METHOD(0x030AEAC0, void, get_centerOfMass_Injected, app::Rigidbody* this_ptr, app::Vector3* ret)
    IL2CPP_REGISTER_METHOD(0x030AEB20, void, set_centerOfMass_Injected, app::Rigidbody* this_ptr, app::Vector3* value)
    IL2CPP_REGISTER_METHOD(0x030AEB80, void, get_worldCenterOfMass_Injected, app::Rigidbody* this_ptr, app::Vector3* ret)
    IL2CPP_REGISTER_METHOD(0x030AEBE0, void, get_inertiaTensorRotation_Injected, app::Rigidbody* this_ptr, app::Quaternion* ret)
    IL2CPP_REGISTER_METHOD(0x030AEC40, void, set_inertiaTensorRotation_Injected, app::Rigidbody* this_ptr, app::Quaternion* value)
    IL2CPP_REGISTER_METHOD(0x030AECA0, void, get_inertiaTensor_Injected, app::Rigidbody* this_ptr, app::Vector3* ret)
    IL2CPP_REGISTER_METHOD(0x030AED00, void, set_inertiaTensor_Injected, app::Rigidbody* this_ptr, app::Vector3* value)
    IL2CPP_REGISTER_METHOD(0x030AED60, void, get_position_Injected, app::Rigidbody* this_ptr, app::Vector3* ret)
    IL2CPP_REGISTER_METHOD(0x030AEDC0, void, set_position_Injected, app::Rigidbody* this_ptr, app::Vector3* value)
    IL2CPP_REGISTER_METHOD(0x030AEE20, void, get_rotation_Injected, app::Rigidbody* this_ptr, app::Quaternion* ret)
    IL2CPP_REGISTER_METHOD(0x030AEE80, void, set_rotation_Injected, app::Rigidbody* this_ptr, app::Quaternion* value)
    IL2CPP_REGISTER_METHOD(0x030AEEE0, void, MovePosition_Injected, app::Rigidbody* this_ptr, app::Vector3* position)
    IL2CPP_REGISTER_METHOD(0x030AEF40, void, MoveRotation_Injected, app::Rigidbody* this_ptr, app::Quaternion* rot)
    IL2CPP_REGISTER_METHOD(0x030AEFA0, void, GetRelativePointVelocity_Injected, app::Rigidbody* this_ptr, app::Vector3* relative_point, app::Vector3* ret)
    IL2CPP_REGISTER_METHOD(0x030AF010, void, GetPointVelocity_Injected, app::Rigidbody* this_ptr, app::Vector3* world_point, app::Vector3* ret)
    IL2CPP_REGISTER_METHOD(0x030AF080, void, AddForce_Injected, app::Rigidbody* this_ptr, app::Vector3* force, app::ForceMode__Enum mode)
    IL2CPP_REGISTER_METHOD(0x030AF0F0, void, AddRelativeForce_Injected, app::Rigidbody* this_ptr, app::Vector3* force, app::ForceMode__Enum mode)
    IL2CPP_REGISTER_METHOD(0x030AF160, void, AddTorque_Injected, app::Rigidbody* this_ptr, app::Vector3* torque, app::ForceMode__Enum mode)
    IL2CPP_REGISTER_METHOD(0x030AF1D0, void, AddRelativeTorque_Injected, app::Rigidbody* this_ptr, app::Vector3* torque, app::ForceMode__Enum mode)
    IL2CPP_REGISTER_METHOD(
        0x030AF240,
        void,
        AddForceAtPosition_Injected,
        app::Rigidbody* this_ptr,
        app::Vector3* force,
        app::Vector3* position,
        app::ForceMode__Enum mode
    )
    IL2CPP_REGISTER_METHOD(
        0x030AF2C0,
        void,
        AddExplosionForce_Injected,
        app::Rigidbody* this_ptr,
        float explosion_force,
        app::Vector3* explosion_position,
        float explosion_radius,
        float upwards_modifier,
        app::ForceMode__Enum mode
    )
    IL2CPP_REGISTER_METHOD(
        0x030AF350,
        void,
        Internal_ClosestPointOnBounds_Injected,
        app::Rigidbody* this_ptr,
        app::Vector3* point,
        app::Vector3* out_pos,
        float* distance
    )
    IL2CPP_REGISTER_METHOD(
        0x030AF3D0,
        void,
        SweepTest_Injected,
        app::Rigidbody* this_ptr,
        app::Vector3* direction,
        float max_distance,
        app::QueryTriggerInteraction__Enum query_trigger_interaction,
        bool* has_hit,
        app::RaycastHit* ret
    )
    IL2CPP_REGISTER_METHOD(
        0x030AF460,
        app::RaycastHit__Array*,
        Internal_SweepTestAll_Injected,
        app::Rigidbody* this_ptr,
        app::Vector3* direction,
        float max_distance,
        app::QueryTriggerInteraction__Enum query_trigger_interaction
    )
} // namespace app::classes::UnityEngine::Rigidbody
