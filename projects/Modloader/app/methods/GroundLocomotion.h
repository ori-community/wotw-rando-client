#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EntityBehaviour.h>
#include <Modloader/app/structs/EntityBehaviourNode.h>
#include <Modloader/app/structs/EntityLocomotionTask.h>
#include <Modloader/app/structs/EntityWeightData_EntityWeight__Enum.h>
#include <Modloader/app/structs/Func_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/GroundLocomotion.h>
#include <Modloader/app/structs/LocomotionGoal.h>
#include <Modloader/app/structs/MovementProcessor.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::GroundLocomotion {
    IL2CPP_REGISTER_METHOD(0x01094300, float, get_AgentLocationOffsetY, app::GroundLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01094480, app::Vector2, get_LookDirection, app::GroundLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01094580, float, get_LookDirectionX, app::GroundLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01094660, bool, get_IsFacingLeft, app::GroundLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01094670, bool, get_IsTurning, app::GroundLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01094680, void, set_IsTurning, app::GroundLocomotion* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01094690, bool, get_GravityDisabled, app::GroundLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010946A0, void, EnableGravity, app::GroundLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010946B0, void, DisableGravity, app::GroundLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00418200, app::Transform*, get_FeetTransform, app::GroundLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010946C0, app::Vector3, get_FeetPosition, app::GroundLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01094710, bool, get_HasArrivedAtTarget, app::GroundLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01094760, bool, get_IsMovingToTarget, app::GroundLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0070BAE0, float, get_Gravity, app::GroundLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010947B0, void, set_Gravity, app::GroundLocomotion* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x010947C0, void, Awake, app::GroundLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01094990, void, ConfigureStateMachine, app::GroundLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010949E0, app::EntityLocomotionTask*, get_DefaultFSMState, app::GroundLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::MovementProcessor*, get_MovementProcessor, app::GroundLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01094A30, app::EntityWeightData_EntityWeight__Enum, get_Weight, app::GroundLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01094A80, void, set_Weight, app::GroundLocomotion* this_ptr, app::EntityWeightData_EntityWeight__Enum value)
    IL2CPP_REGISTER_METHOD(0x01094AD0, void, FixedUpdate, app::GroundLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01094AF0, void, OnFixedUpdate, app::GroundLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01095320, app::EntityLocomotionTask*, GetNextBehaviour, app::GroundLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01095370, void, Stop, app::GroundLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010953C0, void, SetVelocityOverride, app::GroundLocomotion* this_ptr, app::Vector2 velocity)
    IL2CPP_REGISTER_METHOD(0x010953F0, void, AddToVelocityOverride, app::GroundLocomotion* this_ptr, app::Vector2 velocity)
    IL2CPP_REGISTER_METHOD(0x010954D0, void, AddVelocityOverrideX, app::GroundLocomotion* this_ptr, float velocity_x)
    IL2CPP_REGISTER_METHOD(0x010954F0, void, AddVelocityOverrideY, app::GroundLocomotion* this_ptr, float velocity_y)
    IL2CPP_REGISTER_METHOD(0x01095510, void, AddLookDirection, app::GroundLocomotion* this_ptr, app::Vector2 look_direction)
    IL2CPP_REGISTER_METHOD(
        0x01095540,
        void,
        SetLookDirectionX_1,
        app::GroundLocomotion* this_ptr,
        float x_look_direction,
        app::EntityBehaviour* source,
        bool instant
    )
    IL2CPP_REGISTER_METHOD(
        0x01095560,
        void,
        SetLookDirectionTowardsPoint_1,
        app::GroundLocomotion* this_ptr,
        app::Vector2 point,
        app::EntityBehaviour* source,
        bool instant
    )
    IL2CPP_REGISTER_METHOD(
        0x010957E0,
        void,
        SetLookDirection_1,
        app::GroundLocomotion* this_ptr,
        app::Vector2 direction,
        app::EntityBehaviour* source,
        bool instant
    )
    IL2CPP_REGISTER_METHOD(
        0x01095810,
        void,
        SetLookDirectionTowardsPoint_2,
        app::GroundLocomotion* this_ptr,
        app::Vector2 point,
        app::EntityBehaviourNode* source,
        bool instant
    )
    IL2CPP_REGISTER_METHOD(
        0x01095540,
        void,
        SetLookDirectionX_2,
        app::GroundLocomotion* this_ptr,
        float x_look_direction,
        app::EntityBehaviourNode* source,
        bool instant
    )
    IL2CPP_REGISTER_METHOD(
        0x010957E0,
        void,
        SetLookDirection_2,
        app::GroundLocomotion* this_ptr,
        app::Vector2 direction,
        app::EntityBehaviourNode* source,
        bool instant
    )
    IL2CPP_REGISTER_METHOD(0x01095A90, void, AdjustFeetPosition, app::GroundLocomotion* this_ptr, float angle)
    IL2CPP_REGISTER_METHOD(0x01095E90, void, UpdateRotation, app::GroundLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01096270, void, UpdateLookDirection, app::GroundLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01096450, void, RotateToFallingVelocity, app::GroundLocomotion* this_ptr, app::Vector2 velocity, float k, float rotation_limit)
    IL2CPP_REGISTER_METHOD(0x010966B0, void, Flip, app::GroundLocomotion* this_ptr, float direction_sign)
    IL2CPP_REGISTER_METHOD(0x010968A0, app::LocomotionGoal*, Chase, app::GroundLocomotion* this_ptr, app::Func_1_UnityEngine_Vector3_* get_position)
    IL2CPP_REGISTER_METHOD(0x010968F0, app::LocomotionGoal*, MoveTo, app::GroundLocomotion* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x01096940, void, OnDrawGizmos, app::GroundLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01096CA0, void, RotateSmooth, app::GroundLocomotion* this_ptr, float target_angle, float k)
    IL2CPP_REGISTER_METHOD(0x01096ED0, void, ctor, app::GroundLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01096F20, bool, _OnFixedUpdate_b__57_0, app::GroundLocomotion* this_ptr)
} // namespace app::classes::GroundLocomotion
