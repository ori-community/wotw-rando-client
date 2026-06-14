#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Entity.h>
#include <Modloader/app/structs/EntityBehaviourNode.h>
#include <Modloader/app/structs/EntityLocomotionTask.h>
#include <Modloader/app/structs/EntityWeightData_EntityWeight__Enum.h>
#include <Modloader/app/structs/Func_1_SandWormSandDigLocomotionBehaviour_SpeedEntry_.h>
#include <Modloader/app/structs/SandWormLocomotion.h>
#include <Modloader/app/structs/SandWormLocomotion_SpeedSetting__Enum.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SandWormLocomotion {
    IL2CPP_REGISTER_METHOD(0x00C1ECF0, float, get_LastAvoidancePower, app::SandWormLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006A63A0, app::Transform*, get_FeetTransform, app::SandWormLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C1ED20, app::Vector3, get_FeetPosition, app::SandWormLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C1EDB0, app::Vector3, get_UpDirection, app::SandWormLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C1EE70, void, set_UpDirection, app::SandWormLocomotion* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x006D6510, app::SandWormLocomotion_SpeedSetting__Enum, get_CurrentSpeedSettings, app::SandWormLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C1EF30, void, set_CurrentSpeedSettings, app::SandWormLocomotion* this_ptr, app::SandWormLocomotion_SpeedSetting__Enum value)
    IL2CPP_REGISTER_METHOD(0x00C1EF40, bool, get_IsFollowingTarget, app::SandWormLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C1EFF0, bool, get_HasArrivedAtTarget, app::SandWormLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C1F000, float, get_Gravity, app::SandWormLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C1F010, void, set_Gravity, app::SandWormLocomotion* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x00C1F020, app::EntityWeightData_EntityWeight__Enum, get_Weight, app::SandWormLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C1F030, void, set_Weight, app::SandWormLocomotion* this_ptr, app::EntityWeightData_EntityWeight__Enum value)
    IL2CPP_REGISTER_METHOD(0x00C1F040, app::SuspendableMask__Enum, get_Mask, app::SandWormLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C1F050, void, set_Mask, app::SandWormLocomotion* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x00C1F060, bool, get_IsSuspended, app::SandWormLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C1F070, void, set_IsSuspended, app::SandWormLocomotion* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00C1F080, bool, get_IsAvoidingObstacles, app::SandWormLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C1F090, void, set_IsAvoidingObstacles, app::SandWormLocomotion* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00B84400, bool, get_IsHeadInHabitat, app::SandWormLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C1F0A0, void, MoveToPoint, app::SandWormLocomotion* this_ptr, app::Vector3 point, app::EntityBehaviourNode* source)
    IL2CPP_REGISTER_METHOD(0x00C1F090, void, SetObstacleAvoidance, app::SandWormLocomotion* this_ptr, bool avoid)
    IL2CPP_REGISTER_METHOD(0x00C1F180, void, StartFollowingTarget, app::SandWormLocomotion* this_ptr, app::Transform* follow_target)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SetTargetVelocity, app::SandWormLocomotion* this_ptr, app::Vector2 target_velocity)
    IL2CPP_REGISTER_METHOD(0x00C1F220, void, SetVelocityDirectly, app::SandWormLocomotion* this_ptr, app::Vector2 velocity)
    IL2CPP_REGISTER_METHOD(0x00C1F250, app::Vector2, GetCurrentVelocity, app::SandWormLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C1F280, void, SetSpeedSettings, app::SandWormLocomotion* this_ptr, app::SandWormLocomotion_SpeedSetting__Enum setting)
    IL2CPP_REGISTER_METHOD(
        0x00C1F2B0,
        void,
        SetSpeedSettingsOverride,
        app::SandWormLocomotion* this_ptr,
        app::Func_1_SandWormSandDigLocomotionBehaviour_SpeedEntry_* sand_dig_speed_settings_override
    )
    IL2CPP_REGISTER_METHOD(0x00C1F2E0, void, ConfigureStateMachine, app::SandWormLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0071F210, app::EntityLocomotionTask*, get_DefaultFSMState, app::SandWormLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C1F330, void, OnEntityInitialization, app::SandWormLocomotion* this_ptr, app::Entity* entity)
    IL2CPP_REGISTER_METHOD(0x00C1F430, void, OnEntityReset, app::SandWormLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C1F4E0, app::EntityLocomotionTask*, GetNextBehaviour, app::SandWormLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C1F580, void, OnFixedUpdate, app::SandWormLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Stop, app::SandWormLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSandDigUpdate, app::SandWormLocomotion* this_ptr, float d_time)
    IL2CPP_REGISTER_METHOD(0x00C1F870, void, OnEnterSand, app::SandWormLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C1FB00, void, OnExitSand, app::SandWormLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C1FD50, void, ctor, app::SandWormLocomotion* this_ptr)
} // namespace app::classes::SandWormLocomotion
