#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AirEntityLocomotion.h>
#include <Modloader/app/structs/AirEntityMovementProcessor.h>
#include <Modloader/app/structs/Entity.h>
#include <Modloader/app/structs/EntityBehaviourNode.h>
#include <Modloader/app/structs/EntityLocomotionTask.h>
#include <Modloader/app/structs/EntityWeightData_EntityWeight__Enum.h>
#include <Modloader/app/structs/LocomotionAirMoveBehaviour.h>
#include <Modloader/app/structs/MovementProcessor.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::Moon::AirEntityLocomotion {
    IL2CPP_REGISTER_METHOD(0x0049F2B0, app::AirEntityMovementProcessor*, get_AirMovement, app::AirEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01334BA0, app::Transform*, get_FeetTransform, app::AirEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01334BC0, app::Vector3, get_FeetPosition, app::AirEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01334C60, bool, get_HasArrivedAtTarget, app::AirEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01334CA0, float, get_Gravity, app::AirEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01334CD0, void, set_Gravity, app::AirEntityLocomotion* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x00974AE0, app::EntityWeightData_EntityWeight__Enum, get_Weight, app::AirEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01199F10, void, set_Weight, app::AirEntityLocomotion* this_ptr, app::EntityWeightData_EntityWeight__Enum value)
    IL2CPP_REGISTER_METHOD(0x01334D00, void, ConfigureStateMachine, app::AirEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00418200, app::EntityLocomotionTask*, get_DefaultFSMState, app::AirEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01335450, bool, ShouldTriggerTurn, app::AirEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01335830, bool, ShouldTriggerMove, app::AirEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0065FBA0, app::LocomotionAirMoveBehaviour*, get_MovementBehaviour, app::AirEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013359E0, bool, IsLookDirectionLocked, app::AirEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01335AB0, void, OnEntityInitialization, app::AirEntityLocomotion* this_ptr, app::Entity* entity)
    IL2CPP_REGISTER_METHOD(0x01335DA0, void, GetMovementBehaviour, app::AirEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01335EA0, void, OnFixedUpdate, app::AirEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01335ED0, app::EntityLocomotionTask*, GetNextBehaviour, app::AirEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01336480, void, ResetLocomotion, app::AirEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00968AA0, void, Stop, app::AirEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013364C0, void, MoveToPoint, app::AirEntityLocomotion* this_ptr, app::Vector3 point, app::EntityBehaviourNode* source)
    IL2CPP_REGISTER_METHOD(0x01336620, void, PropagateTargetPoint, app::AirEntityLocomotion* this_ptr, app::Vector3 point)
    IL2CPP_REGISTER_METHOD(0x01336660, void, MoveInTheDirection, app::AirEntityLocomotion* this_ptr, app::Vector2 direction, app::EntityBehaviourNode* source)
    IL2CPP_REGISTER_METHOD(0x01336800, void, SetLookDirectionX_1, app::AirEntityLocomotion* this_ptr, float x_look_direction, bool instant)
    IL2CPP_REGISTER_METHOD(
        0x01336910,
        void,
        SetLookDirectionX_2,
        app::AirEntityLocomotion* this_ptr,
        float x_look_direction,
        app::EntityBehaviourNode* source,
        bool instant
    )
    IL2CPP_REGISTER_METHOD(
        0x01336A20,
        void,
        SetLookDirection,
        app::AirEntityLocomotion* this_ptr,
        app::Vector2 look_direction,
        app::EntityBehaviourNode* source,
        bool instant
    )
    IL2CPP_REGISTER_METHOD(
        0x01336BB0,
        void,
        SetLookDirectionTowardsPoint,
        app::AirEntityLocomotion* this_ptr,
        app::Vector2 point,
        app::EntityBehaviourNode* source,
        bool instant
    )
    IL2CPP_REGISTER_METHOD(0x01336DF0, void, InstantFlip, app::AirEntityLocomotion* this_ptr, float direction_sign)
    IL2CPP_REGISTER_METHOD(0x01337010, void, LockLookDirection, app::AirEntityLocomotion* this_ptr, float direction_x, app::EntityBehaviourNode* source)
    IL2CPP_REGISTER_METHOD(0x00E2C9D0, void, UnlockLookDirection, app::AirEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013370F0, app::Vector2, get_LookDirection, app::AirEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01337200, app::Vector2, get_LookDirectionXYNormalized, app::AirEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E2CC10, bool, get_IsFacingLeft, app::AirEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0119CDB0, bool, get_IsTurning, app::AirEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0049F2B0, app::MovementProcessor*, get_MovementProcessor, app::AirEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004F1990, void, ctor, app::AirEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01337310, bool, _ConfigureStateMachine_b__19_0, app::AirEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0119CE00, bool, _ConfigureStateMachine_b__19_1, app::AirEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01337350, bool, _ConfigureStateMachine_b__19_2, app::AirEntityLocomotion* this_ptr)
} // namespace app::classes::Moon::AirEntityLocomotion
