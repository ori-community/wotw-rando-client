#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Entity.h>
#include <Modloader/app/structs/EntityBehaviour.h>
#include <Modloader/app/structs/EntityBehaviourNode.h>
#include <Modloader/app/structs/EntityLocomotionTask.h>
#include <Modloader/app/structs/EntityWeightData_EntityWeight__Enum.h>
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/GroundEntityMovementProcessor.h>
#include <Modloader/app/structs/LocomotionGroundMoveBehaviour.h>
#include <Modloader/app/structs/MovementProcessor.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::Moon::GroundEntityLocomotion {
    IL2CPP_REGISTER_METHOD(0x0049F2B0, app::GroundEntityMovementProcessor*, get_GroundMovement, app::GroundEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0065FBE0, app::LocomotionGroundMoveBehaviour*, get_MovementBehaviour, app::GroundEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0148DA00, app::Transform*, get_FeetTransform, app::GroundEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A640A0, bool, IsLookDirectionLocked, app::GroundEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0148DA20, app::Vector3, get_FeetPosition, app::GroundEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0148DAC0, bool, get_HasArrivedAtTarget, app::GroundEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0148DB40, bool, get_CanReachTarget, app::GroundEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0148DB70, bool, get_IsMovingToTarget, app::GroundEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0148DC40, float, get_Gravity, app::GroundEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0148DC70, void, set_Gravity, app::GroundEntityLocomotion* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x00C1F040, app::EntityWeightData_EntityWeight__Enum, get_Weight, app::GroundEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C1F050, void, set_Weight, app::GroundEntityLocomotion* this_ptr, app::EntityWeightData_EntityWeight__Enum value)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_UsesSeparateTurningBehaviour, app::GroundEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0148DCA0, void, OnDestroy, app::GroundEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0148DCE0, void, Finalize, app::GroundEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0148DD30, void, MoonCleanup, app::GroundEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0148DD60, void, OnEntityInitialization, app::GroundEntityLocomotion* this_ptr, app::Entity* entity)
    IL2CPP_REGISTER_METHOD(0x0148E0D0, void, OnPrewarm, app::GroundEntityLocomotion* this_ptr, app::Entity* entity)
    IL2CPP_REGISTER_METHOD(0x0148E240, void, GetMovementBehaviour, app::GroundEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0148E3A0, void, OnFixedUpdate, app::GroundEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0148E600, bool, ShouldStartFalling, app::GroundEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0148E900, void, ConfigureStateMachine, app::GroundEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0065FBA0, app::EntityLocomotionTask*, get_DefaultFSMState, app::GroundEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0148F050, bool, ShouldTriggerTurn, app::GroundEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0148F470, bool, ShouldTriggerMove, app::GroundEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0148F6A0, app::EntityLocomotionTask*, GetNextBehaviour, app::GroundEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0148FC90, void, OnEntityReset, app::GroundEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0148FDB0, void, ResetLocomotion, app::GroundEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0148FDE0, bool, HasDestination, app::GroundEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0148FE70, bool, CanMoveTowards, app::GroundEntityLocomotion* this_ptr, app::Vector2 direction)
    IL2CPP_REGISTER_METHOD(0x0148FEA0, bool, CanContinueMovingInDirection, app::GroundEntityLocomotion* this_ptr, float direction, bool use_obstacle_mask)
    IL2CPP_REGISTER_METHOD(0x0148FEE0, void, MoveToPoint, app::GroundEntityLocomotion* this_ptr, app::Vector3 point, app::EntityBehaviourNode* source)
    IL2CPP_REGISTER_METHOD(
        0x01490260,
        void,
        MoveInTheDirection,
        app::GroundEntityLocomotion* this_ptr,
        app::Vector2 direction,
        app::EntityBehaviourNode* source
    )
    IL2CPP_REGISTER_METHOD(0x01490400, void, PauseTimelinePlayback, app::GroundEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01490500, void, ResumeTimelinePlayback, app::GroundEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014905F0, void, SetVelocityDirectly, app::GroundEntityLocomotion* this_ptr, app::Vector2 velocity)
    IL2CPP_REGISTER_METHOD(0x01490680, void, SetLocalVelocityDirectly, app::GroundEntityLocomotion* this_ptr, app::Vector2 velocity)
    IL2CPP_REGISTER_METHOD(0x014906E0, void, SetLookDirectionX_1, app::GroundEntityLocomotion* this_ptr, float x_look_direction, bool instant)
    IL2CPP_REGISTER_METHOD(
        0x014907F0,
        void,
        SetLookDirectionX_2,
        app::GroundEntityLocomotion* this_ptr,
        float x_look_direction,
        app::EntityBehaviourNode* source,
        bool instant
    )
    IL2CPP_REGISTER_METHOD(
        0x01490800,
        void,
        SetLookDirection,
        app::GroundEntityLocomotion* this_ptr,
        app::Vector2 look_direction,
        app::EntityBehaviourNode* source,
        bool instant
    )
    IL2CPP_REGISTER_METHOD(
        0x01490930,
        void,
        SetLookDirectionTowardsPoint,
        app::GroundEntityLocomotion* this_ptr,
        app::Vector2 point,
        app::EntityBehaviourNode* source,
        bool instant
    )
    IL2CPP_REGISTER_METHOD(0x01490A40, void, PropagateTargetPoint, app::GroundEntityLocomotion* this_ptr, app::Vector3 point)
    IL2CPP_REGISTER_METHOD(
        0x01490A80,
        app::Vector3,
        GetGroundProjectedTargetPosition,
        app::GroundEntityLocomotion* this_ptr,
        app::Vector3 target_position,
        float offset_y,
        float ray_length
    )
    IL2CPP_REGISTER_METHOD(0x00968AA0, void, Stop, app::GroundEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CB4850, void, InstantFlip, app::GroundEntityLocomotion* this_ptr, float direction_sign)
    IL2CPP_REGISTER_METHOD(0x01490D80, void, LockLookDirection, app::GroundEntityLocomotion* this_ptr, float direction_x, app::EntityBehaviour* source)
    IL2CPP_REGISTER_METHOD(0x01490E60, void, UnlockLookDirection, app::GroundEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01490E80, app::Vector2, get_LookDirection, app::GroundEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01490F90, app::Vector2, get_LookDirectionXYNormalized, app::GroundEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014910A0, bool, get_IsFacingLeft, app::GroundEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014910D0, bool, get_IsTurning, app::GroundEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0049F2B0, app::MovementProcessor*, get_MovementProcessor, app::GroundEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014910E0, void, OnDrawGizmosSelected, app::GroundEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01491570, void, ctor, app::GroundEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014915A0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x01491620, bool, _ConfigureStateMachine_b__47_0, app::GroundEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01491660, bool, _ConfigureStateMachine_b__47_1, app::GroundEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01491690, bool, _ConfigureStateMachine_b__47_2, app::GroundEntityLocomotion* this_ptr)
} // namespace app::classes::Moon::GroundEntityLocomotion
