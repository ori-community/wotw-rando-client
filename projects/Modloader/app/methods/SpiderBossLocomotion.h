#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Entity.h>
#include <Modloader/app/structs/EntityBehaviourNode.h>
#include <Modloader/app/structs/EntityLocomotionTask.h>
#include <Modloader/app/structs/EntityWeightData_EntityWeight__Enum.h>
#include <Modloader/app/structs/SpiderBossLocomotion.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SpiderBossLocomotion {
    IL2CPP_REGISTER_METHOD(0x0049F2B0, app::Transform*, get_FeetTransform, app::SpiderBossLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011B46D0, app::Vector3, get_FeetPosition, app::SpiderBossLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_HasArrivedAtTarget, app::SpiderBossLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011B4760, bool, get_IsMovingToTarget, app::SpiderBossLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0043BB80, float, get_Gravity, app::SpiderBossLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, set_Gravity, app::SpiderBossLocomotion* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x00E5BF60, app::EntityWeightData_EntityWeight__Enum, get_Weight, app::SpiderBossLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011B47F0, void, set_Weight, app::SpiderBossLocomotion* this_ptr, app::EntityWeightData_EntityWeight__Enum value)
    IL2CPP_REGISTER_METHOD(0x011B4800, app::Vector2, get_GravityDirection, app::SpiderBossLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011B4890, app::Vector3, get_AdditiveLocalVelocity, app::SpiderBossLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011B48B0, void, set_AdditiveLocalVelocity, app::SpiderBossLocomotion* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x011B48D0, void, Awake, app::SpiderBossLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011B4910, void, OnEntityInitialization, app::SpiderBossLocomotion* this_ptr, app::Entity* entity)
    IL2CPP_REGISTER_METHOD(0x011B4AC0, void, ConfigureStateMachine, app::SpiderBossLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005B0220, app::EntityLocomotionTask*, get_DefaultFSMState, app::SpiderBossLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011B4B10, void, ResetLocomotion, app::SpiderBossLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00968AA0, void, Stop, app::SpiderBossLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011B4B40, void, OnFixedUpdate, app::SpiderBossLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011B4E00, app::EntityLocomotionTask*, GetNextBehaviour, app::SpiderBossLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x011B5160,
        void,
        SetLookDirection,
        app::SpiderBossLocomotion* this_ptr,
        app::Vector2 look_direction,
        app::EntityBehaviourNode* beh,
        bool instant
    )
    IL2CPP_REGISTER_METHOD(
        0x011B52B0,
        void,
        SetLookDirectionX,
        app::SpiderBossLocomotion* this_ptr,
        float x_look_direction,
        app::EntityBehaviourNode* beh,
        bool instant
    )
    IL2CPP_REGISTER_METHOD(0x011B53B0, void, SetLookDirectionTowardsPoint_1, app::SpiderBossLocomotion* this_ptr, app::Vector2 point, bool instant)
    IL2CPP_REGISTER_METHOD(
        0x011B54D0,
        void,
        SetLookDirectionTowardsPoint_2,
        app::SpiderBossLocomotion* this_ptr,
        app::Vector2 point,
        app::EntityBehaviourNode* source,
        bool instant
    )
    IL2CPP_REGISTER_METHOD(0x007832C0, void, InstantFlip, app::SpiderBossLocomotion* this_ptr, float direction_sign)
    IL2CPP_REGISTER_METHOD(0x011B55F0, app::Vector2, get_LookDirection, app::SpiderBossLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011B5610, void, set_LookDirection, app::SpiderBossLocomotion* this_ptr, app::Vector2 value)
    IL2CPP_REGISTER_METHOD(0x011B5640, bool, get_IsFacingLeft, app::SpiderBossLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011B5650, bool, get_IsTurning, app::SpiderBossLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011B5660, void, ctor, app::SpiderBossLocomotion* this_ptr)
} // namespace app::classes::SpiderBossLocomotion
