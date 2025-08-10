#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Entity.h>
#include <Modloader/app/structs/EntityBehaviour.h>
#include <Modloader/app/structs/EntityBehaviourNode.h>
#include <Modloader/app/structs/EntityLocomotionTask.h>
#include <Modloader/app/structs/EntityWeightData_EntityWeight__Enum.h>
#include <Modloader/app/structs/StaticEntityLocomotion.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::Moon::StaticEntityLocomotion {
    IL2CPP_REGISTER_METHOD(0x005B0220, app::Transform*, get_FeetTransform, app::StaticEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E301D0, bool, get_SnapToTheGround, app::StaticEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A17790, bool, IsLookDirectionLocked, app::StaticEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E30290, app::Vector3, get_FeetPosition, app::StaticEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_HasArrivedAtTarget, app::StaticEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E30320, float, get_Gravity, app::StaticEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00510F80, void, set_Gravity, app::StaticEntityLocomotion* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x0061E5E0, app::EntityWeightData_EntityWeight__Enum, get_Weight, app::StaticEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E30330, void, set_Weight, app::StaticEntityLocomotion* this_ptr, app::EntityWeightData_EntityWeight__Enum value)
    IL2CPP_REGISTER_METHOD(0x00E30340, void, OnEntityInitialization, app::StaticEntityLocomotion* this_ptr, app::Entity* entity)
    IL2CPP_REGISTER_METHOD(0x00E304F0, void, ConfigureStateMachine, app::StaticEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0049F2B0, app::EntityLocomotionTask*, get_DefaultFSMState, app::StaticEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E308D0, bool, ShouldTriggerTurn, app::StaticEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E30CA0, void, OnEntityReset, app::StaticEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E30CF0, void, OnFixedUpdate, app::StaticEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E30DC0, void, SnapToGround, app::StaticEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E30F70, app::EntityLocomotionTask*, GetNextBehaviour, app::StaticEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E30FA0, void, ResetLocomotion, app::StaticEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E30FD0, void, SetLookDirectionX_1, app::StaticEntityLocomotion* this_ptr, float x_look_direction, bool instant)
    IL2CPP_REGISTER_METHOD(
        0x00E310E0,
        void,
        SetLookDirectionX_2,
        app::StaticEntityLocomotion* this_ptr,
        float x_look_direction,
        app::EntityBehaviourNode* source,
        bool instant
    )
    IL2CPP_REGISTER_METHOD(
        0x00E311F0,
        void,
        SetLookDirection,
        app::StaticEntityLocomotion* this_ptr,
        app::Vector2 look_direction,
        app::EntityBehaviourNode* source,
        bool instant
    )
    IL2CPP_REGISTER_METHOD(
        0x00E31380,
        void,
        SetLookDirectionTowardsPoint,
        app::StaticEntityLocomotion* this_ptr,
        app::Vector2 point,
        app::EntityBehaviourNode* source,
        bool instant
    )
    IL2CPP_REGISTER_METHOD(0x00968AA0, void, Stop, app::StaticEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E315C0, void, InstantFlip, app::StaticEntityLocomotion* this_ptr, float direction_sign)
    IL2CPP_REGISTER_METHOD(0x00E317D0, void, LockLookDirection, app::StaticEntityLocomotion* this_ptr, float direction_x, app::EntityBehaviour* source)
    IL2CPP_REGISTER_METHOD(0x00E318B0, void, UnlockLookDirection, app::StaticEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E318D0, app::Vector2, get_LookDirection, app::StaticEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E31B60, bool, get_IsFacingLeft, app::StaticEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E31B90, bool, get_IsTurning, app::StaticEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E31C60, void, OnDrawGizmosSelected, app::StaticEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E31E80, void, ctor, app::StaticEntityLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E31EA0, bool, _ConfigureStateMachine_b__29_0, app::StaticEntityLocomotion* this_ptr)
} // namespace app::classes::Moon::StaticEntityLocomotion
