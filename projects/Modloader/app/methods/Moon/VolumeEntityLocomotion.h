#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/VolumeEntityMovementProcessor.h>
#include <Modloader/app/structs/VolumeEntityLocomotion.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/EntityWeightData_EntityWeight__Enum.h>
#include <Modloader/app/structs/EntityLocomotionTask.h>
#include <Modloader/app/structs/Entity.h>
#include <Modloader/app/structs/EntityBehaviourNode.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/EntityTask.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/MovementProcessor.h>

namespace app::classes::Moon::VolumeEntityLocomotion {
    IL2CPP_REGISTER_METHOD(0x0049F2B0, app::VolumeEntityMovementProcessor*, get_VolumeMovement, (app::VolumeEntityLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01199DC0, app::Transform*, get_FeetTransform, (app::VolumeEntityLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01199DF0, app::Vector3, get_FeetPosition, (app::VolumeEntityLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01199EA0, bool, get_HasArrivedAtTarget, (app::VolumeEntityLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01199ED0, float, get_Gravity, (app::VolumeEntityLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01199EF0, void, set_Gravity, (app::VolumeEntityLocomotion * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00974AE0, app::EntityWeightData_EntityWeight__Enum, get_Weight, (app::VolumeEntityLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01199F10, void, set_Weight, (app::VolumeEntityLocomotion * this_ptr, app::EntityWeightData_EntityWeight__Enum value))
    IL2CPP_REGISTER_METHOD(0x01199F20, void, ConfigureStateMachine, (app::VolumeEntityLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00418200, app::EntityLocomotionTask*, get_DefaultFSMState, (app::VolumeEntityLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0119A670, bool, ShouldTriggerTurn, (app::VolumeEntityLocomotion * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047666C0, VolumeEntityLocomotion_ShouldTriggerTurn__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0119AA60, bool, ShouldTriggerMove, (app::VolumeEntityLocomotion * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04746E88, VolumeEntityLocomotion_ShouldTriggerMove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00974AC0, bool, IsLookDirectionLocked, (app::VolumeEntityLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0119AC10, void, OnEntityInitialization, (app::VolumeEntityLocomotion * this_ptr, app::Entity* entity))
    IL2CPP_REGISTER_METHOD(0x0119B210, void, GetMovementBehaviour, (app::VolumeEntityLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0119B2B0, void, OnFixedUpdate, (app::VolumeEntityLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0119B2E0, app::EntityLocomotionTask*, GetNextBehaviour, (app::VolumeEntityLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0119B890, void, ResetLocomotion, (app::VolumeEntityLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00968AA0, void, Stop, (app::VolumeEntityLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0119B8D0, void, MoveToPoint, (app::VolumeEntityLocomotion * this_ptr, app::Vector3 point, app::EntityBehaviourNode* source))
    IL2CPP_REGISTER_METHOD(0x0119BA40, void, PropagateTargetPoint, (app::VolumeEntityLocomotion * this_ptr, app::Vector3 point))
    IL2CPP_REGISTER_METHOD(0x0119BA90, void, MoveInTheDirection, (app::VolumeEntityLocomotion * this_ptr, app::Vector2 direction, app::EntityBehaviourNode* source))
    IL2CPP_REGISTER_METHOD(0x0119BC30, void, SetLookDirectionX_1, (app::VolumeEntityLocomotion * this_ptr, float x_look_direction, bool instant))
    IL2CPP_REGISTER_METHOD(0x0119BD40, void, SetLookDirectionX_2, (app::VolumeEntityLocomotion * this_ptr, float x_look_direction, app::EntityBehaviourNode* source, bool instant))
    IL2CPP_REGISTER_METHOD(0x0119BE50, void, SetLookDirection, (app::VolumeEntityLocomotion * this_ptr, app::Vector2 look_direction, app::EntityBehaviourNode* source, bool instant))
    IL2CPP_REGISTER_METHOD(0x0119BFE0, void, SetLookDirectionTowardsPoint, (app::VolumeEntityLocomotion * this_ptr, app::Vector2 point, app::EntityBehaviourNode* source, bool instant))
    IL2CPP_REGISTER_METHOD(0x0119C0F0, void, TurnStart, (app::VolumeEntityLocomotion * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473B768, VolumeEntityLocomotion_TurnStart__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0119C210, void, Turning, (app::VolumeEntityLocomotion * this_ptr, float t))
    IL2CPP_REGISTER_METHODINFO(0x04720110, VolumeEntityLocomotion_Turning__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0119C300, void, TurningFinished, (app::VolumeEntityLocomotion * this_ptr, app::EntityTask* task, app::BehaviourStatus__Enum status))
    IL2CPP_REGISTER_METHODINFO(0x0477DA48, VolumeEntityLocomotion_TurningFinished__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0119C6A0, void, InstantFlip, (app::VolumeEntityLocomotion * this_ptr, float direction_sign))
    IL2CPP_REGISTER_METHOD(0x0119C930, void, LockLookDirection, (app::VolumeEntityLocomotion * this_ptr, float direction_x, app::EntityBehaviourNode* source))
    IL2CPP_REGISTER_METHOD(0x0119CA10, void, UnlockLookDirection, (app::VolumeEntityLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0119CA30, app::Vector2, get_LookDirection, (app::VolumeEntityLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0119CC70, app::Vector2, get_LookDirectionXYNormalized, (app::VolumeEntityLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0119CD80, bool, get_IsFacingLeft, (app::VolumeEntityLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0119CDB0, bool, get_IsTurning, (app::VolumeEntityLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0049F2B0, app::MovementProcessor*, get_MovementProcessor, (app::VolumeEntityLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F1990, void, ctor, (app::VolumeEntityLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0119CDC0, bool, _ConfigureStateMachine_b__21_0, (app::VolumeEntityLocomotion * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471AFC0, VolumeEntityLocomotion__ConfigureStateMachine_b__21_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0119CE00, bool, _ConfigureStateMachine_b__21_1, (app::VolumeEntityLocomotion * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475A170, VolumeEntityLocomotion__ConfigureStateMachine_b__21_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0119CE30, bool, _ConfigureStateMachine_b__21_2, (app::VolumeEntityLocomotion * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473A6E8, VolumeEntityLocomotion__ConfigureStateMachine_b__21_2__MethodInfo)
} // namespace app::classes::Moon::VolumeEntityLocomotion
