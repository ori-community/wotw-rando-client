#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SkeetoAirEntityMovementProcessor.h>
#include <Modloader/app/structs/SkeetoLocomotion.h>
#include <Modloader/app/structs/MovementProcessor.h>
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/EntityWeightData_EntityWeight__Enum.h>
#include <Modloader/app/structs/EntityLocomotionTask.h>
#include <Modloader/app/structs/SkeetoAirMoveBehaviour.h>
#include <Modloader/app/structs/Entity.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/EntityBehaviourNode.h>

namespace app::classes::Moon::SkeetoLocomotion {
    IL2CPP_REGISTER_METHOD(0x00418200, app::SkeetoAirEntityMovementProcessor*, get_SkeetoMovementProcessor, (app::SkeetoLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E2A650, bool, get_IsTurning, (app::SkeetoLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00418200, app::MovementProcessor*, get_MovementProcessor, (app::SkeetoLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E2A6E0, app::LayerMask, get_GroundMask, (app::SkeetoLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E2A700, app::Transform*, get_FeetTransform, (app::SkeetoLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E2A720, app::Vector3, get_FeetPosition, (app::SkeetoLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E2A7C0, app::Vector3, get_UpDirection, (app::SkeetoLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E2A8A0, void, set_UpDirection, (app::SkeetoLocomotion * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x00E2A980, bool, get_HasArrivedAtTarget, (app::SkeetoLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E2A9C0, float, get_Gravity, (app::SkeetoLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E2A9F0, void, set_Gravity, (app::SkeetoLocomotion * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x0083E8C0, app::EntityWeightData_EntityWeight__Enum, get_Weight, (app::SkeetoLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0075A3F0, void, set_Weight, (app::SkeetoLocomotion * this_ptr, app::EntityWeightData_EntityWeight__Enum value))
    IL2CPP_REGISTER_METHOD(0x00E2AA20, bool, get_ApplyNoise, (app::SkeetoLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E2AA40, void, set_ApplyNoise, (app::SkeetoLocomotion * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00E2AA60, void, ConfigureStateMachine, (app::SkeetoLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005B0220, app::EntityLocomotionTask*, get_DefaultFSMState, (app::SkeetoLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E2AD80, bool, ShouldTriggerMove, (app::SkeetoLocomotion * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04703228, SkeetoLocomotion_ShouldTriggerMove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00E2AF40, bool, ShouldTriggerIdle, (app::SkeetoLocomotion * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04712C18, SkeetoLocomotion_ShouldTriggerIdle__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0065FBE0, app::SkeetoAirMoveBehaviour*, get_MovementBehaviour, (app::SkeetoLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E2AF80, bool, get_ShouldReset, (app::SkeetoLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AE6060, bool, IsLookDirectionLocked, (app::SkeetoLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E2AFA0, bool, HasRegisteredLookDirection, (app::SkeetoLocomotion * this_ptr, float* registered_look_direction))
    IL2CPP_REGISTER_METHOD(0x00E2B070, void, OnEntityInitialization, (app::SkeetoLocomotion * this_ptr, app::Entity* entity))
    IL2CPP_REGISTER_METHOD(0x00E2B390, void, ResetRotation, (app::SkeetoLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E2B530, void, OnEntityReset, (app::SkeetoLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E2B580, void, GetMovementBehaviour, (app::SkeetoLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E2B620, void, OnFixedUpdate, (app::SkeetoLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E2BA00, app::EntityLocomotionTask*, GetNextBehaviour, (app::SkeetoLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E2BBC0, void, ResetLocomotion, (app::SkeetoLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00968AA0, void, Stop, (app::SkeetoLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E2BC00, void, PauseMovementTimelines, (app::SkeetoLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E2BC80, void, ResumeMovementTimelines, (app::SkeetoLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E2BD00, void, SetObstacleHitAvoidance, (app::SkeetoLocomotion * this_ptr, bool on))
    IL2CPP_REGISTER_METHOD(0x00E2BD40, void, OverrideMaxSpeed, (app::SkeetoLocomotion * this_ptr, float max_speed))
    IL2CPP_REGISTER_METHOD(0x00E2BD70, void, ResetMaxSpeed, (app::SkeetoLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E2BDA0, void, SetAccelerationMultiplier, (app::SkeetoLocomotion * this_ptr, float multiplier))
    IL2CPP_REGISTER_METHOD(0x00E2BDD0, void, ResetAccelerationMultiplier, (app::SkeetoLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E2BE00, void, SetTargetVelocity, (app::SkeetoLocomotion * this_ptr, app::Vector2 target_velocity))
    IL2CPP_REGISTER_METHOD(0x00E2BE40, void, SetVelocityDirectly, (app::SkeetoLocomotion * this_ptr, app::Vector2 velocity))
    IL2CPP_REGISTER_METHOD(0x00C1F250, app::Vector2, GetCurrentVelocity, (app::SkeetoLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E2BEA0, app::Vector2, GetTargetVelocity, (app::SkeetoLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E2BED0, void, MoveToPoint, (app::SkeetoLocomotion * this_ptr, app::Vector3 point, app::EntityBehaviourNode* source))
    IL2CPP_REGISTER_METHOD(0x00E2C030, void, PropagateTargetPoint, (app::SkeetoLocomotion * this_ptr, app::Vector3 point))
    IL2CPP_REGISTER_METHOD(0x00E2C070, void, MoveInTheDirection, (app::SkeetoLocomotion * this_ptr, app::Vector2 direction, app::EntityBehaviourNode* source))
    IL2CPP_REGISTER_METHOD(0x00E2C210, void, SetLookDirectionX_1, (app::SkeetoLocomotion * this_ptr, float x_look_direction, bool instant))
    IL2CPP_REGISTER_METHOD(0x00E2C320, void, SetLookDirectionX_2, (app::SkeetoLocomotion * this_ptr, float x_look_direction, app::EntityBehaviourNode* source, bool instant))
    IL2CPP_REGISTER_METHOD(0x00E2C430, void, SetLookDirection, (app::SkeetoLocomotion * this_ptr, app::Vector2 look_direction, app::EntityBehaviourNode* source, bool instant))
    IL2CPP_REGISTER_METHOD(0x00E2C5C0, void, SetLookDirectionTowardsPoint, (app::SkeetoLocomotion * this_ptr, app::Vector2 point, app::EntityBehaviourNode* source, bool instant))
    IL2CPP_REGISTER_METHOD(0x00E2C6D0, void, InstantFlip, (app::SkeetoLocomotion * this_ptr, float direction_sign))
    IL2CPP_REGISTER_METHOD(0x00E2C8F0, void, LockLookDirection, (app::SkeetoLocomotion * this_ptr, float direction_x))
    IL2CPP_REGISTER_METHOD(0x00E2C9D0, void, UnlockLookDirection, (app::SkeetoLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E2C9F0, app::Vector2, get_LookDirection, (app::SkeetoLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E2CB00, app::Vector2, get_LookDirectionXYNormalized, (app::SkeetoLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E2CC10, bool, get_IsFacingLeft, (app::SkeetoLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E2CC40, void, ctor, (app::SkeetoLocomotion * this_ptr))
} // namespace app::classes::Moon::SkeetoLocomotion
