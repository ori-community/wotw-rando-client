#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_KwolokBossLocomotion_StayAtRangeSettings_.h>
#include <Modloader/app/structs/Entity.h>
#include <Modloader/app/structs/EntityLocomotionTask.h>
#include <Modloader/app/structs/EntityWeightData_EntityWeight__Enum.h>
#include <Modloader/app/structs/KwolokBossLocomotion.h>
#include <Modloader/app/structs/KwolokBossLocomotion_LocomotionMode__Enum.h>
#include <Modloader/app/structs/KwolokBossLocomotion_ModifyAccelerationDelegate.h>
#include <Modloader/app/structs/KwolokBossLocomotion_ModifyBodyHeightDelegate.h>
#include <Modloader/app/structs/KwolokBossLocomotion_ModifyMaxMovementSpeedDelegate.h>
#include <Modloader/app/structs/KwolokBossLocomotion_MoveRequest.h>
#include <Modloader/app/structs/KwolokBossLocomotion_OverrideTurnMultiplier.h>
#include <Modloader/app/structs/List_1_KwolokBossLocomotion_StepSoundInfo_.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::KwolokBossLocomotion {
    IL2CPP_REGISTER_METHOD(0x005B0220, app::Transform*, get_FeetTransform, app::KwolokBossLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012E28E0, app::Vector3, get_FeetPosition, app::KwolokBossLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CBCC50, bool, get_HasArrivedAtTarget, app::KwolokBossLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00689CC0, float, get_Gravity, app::KwolokBossLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012E2900, void, set_Gravity, app::KwolokBossLocomotion* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x00974AE0, app::EntityWeightData_EntityWeight__Enum, get_Weight, app::KwolokBossLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01199F10, void, set_Weight, app::KwolokBossLocomotion* this_ptr, app::EntityWeightData_EntityWeight__Enum value)
    IL2CPP_REGISTER_METHOD(0x0065FBA0, app::EntityLocomotionTask*, get_DefaultFSMState, app::KwolokBossLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ConfigureStateMachine, app::KwolokBossLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::EntityLocomotionTask*, GetNextBehaviour, app::KwolokBossLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Stop, app::KwolokBossLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D2CDF0, bool, get_IKLock, app::KwolokBossLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012E2910, void, set_IKLock, app::KwolokBossLocomotion* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x012E2A00, float, get_MaxMovementSpeed, app::KwolokBossLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x012E2A40,
        void,
        add_ModifyMaxMovementSpeed,
        app::KwolokBossLocomotion* this_ptr,
        app::KwolokBossLocomotion_ModifyMaxMovementSpeedDelegate* value
    )
    IL2CPP_REGISTER_METHOD(
        0x012E2B30,
        void,
        remove_ModifyMaxMovementSpeed,
        app::KwolokBossLocomotion* this_ptr,
        app::KwolokBossLocomotion_ModifyMaxMovementSpeedDelegate* value
    )
    IL2CPP_REGISTER_METHOD(
        0x012E2C20,
        void,
        add_ModifyAcceleration,
        app::KwolokBossLocomotion* this_ptr,
        app::KwolokBossLocomotion_ModifyAccelerationDelegate* value
    )
    IL2CPP_REGISTER_METHOD(
        0x012E2D10,
        void,
        remove_ModifyAcceleration,
        app::KwolokBossLocomotion* this_ptr,
        app::KwolokBossLocomotion_ModifyAccelerationDelegate* value
    )
    IL2CPP_REGISTER_METHOD(
        0x012E2E00,
        void,
        add_ModifyBodyHeight,
        app::KwolokBossLocomotion* this_ptr,
        app::KwolokBossLocomotion_ModifyBodyHeightDelegate* value
    )
    IL2CPP_REGISTER_METHOD(
        0x012E2EF0,
        void,
        remove_ModifyBodyHeight,
        app::KwolokBossLocomotion* this_ptr,
        app::KwolokBossLocomotion_ModifyBodyHeightDelegate* value
    )
    IL2CPP_REGISTER_METHOD(
        0x012E2FE0,
        void,
        add_ModifyStayAtRangeSettingsEvent,
        app::KwolokBossLocomotion* this_ptr,
        app::Action_1_KwolokBossLocomotion_StayAtRangeSettings_* value
    )
    IL2CPP_REGISTER_METHOD(
        0x012E30D0,
        void,
        remove_ModifyStayAtRangeSettingsEvent,
        app::KwolokBossLocomotion* this_ptr,
        app::Action_1_KwolokBossLocomotion_StayAtRangeSettings_* value
    )
    IL2CPP_REGISTER_METHOD(
        0x012E31C0,
        void,
        add_OnOverrideTurnMultiplier,
        app::KwolokBossLocomotion* this_ptr,
        app::KwolokBossLocomotion_OverrideTurnMultiplier* value
    )
    IL2CPP_REGISTER_METHOD(
        0x012E32B0,
        void,
        remove_OnOverrideTurnMultiplier,
        app::KwolokBossLocomotion* this_ptr,
        app::KwolokBossLocomotion_OverrideTurnMultiplier* value
    )
    IL2CPP_REGISTER_METHOD(0x012E33A0, float, get_PositionNormalizedValue, app::KwolokBossLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012E33B0, app::Vector3, get_DirectionToTargetFromStinkSpirit, app::KwolokBossLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012E3570, app::Vector3, get_DirectionToTargetFromKwolok, app::KwolokBossLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012E3730, bool, get_IsBetweenRangeMoveLimits, app::KwolokBossLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012E3760, void, OnEntityInitialization, app::KwolokBossLocomotion* this_ptr, app::Entity* entity)
    IL2CPP_REGISTER_METHOD(0x012E3810, void, OnEntityReset, app::KwolokBossLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012E3980, void, AssureWalkAnimationPlaying, app::KwolokBossLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012E3A50, void, SetWalkAnimationNormalizedTime, app::KwolokBossLocomotion* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x012E3AA0, void, OnDisable, app::KwolokBossLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012E3AC0, void, OnFixedUpdate, app::KwolokBossLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012E3E70, void, AssureIdlePlaying, app::KwolokBossLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012E3ED0, void, UpdateMovement, app::KwolokBossLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012E3F60, void, UpdateSpeed, app::KwolokBossLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012E44D0, void, UpdateLegMovement, app::KwolokBossLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012E46E0, void, UpdateSounds, app::KwolokBossLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012E4A20, bool, IsWalkLoopSoundPlaying, app::KwolokBossLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012E4AA0, void, StartWalkLoopSound, app::KwolokBossLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012E4BF0, void, StopWalkLoopSound, app::KwolokBossLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x012E4C60,
        void,
        UpdateStepSoundList,
        app::KwolokBossLocomotion* this_ptr,
        app::List_1_KwolokBossLocomotion_StepSoundInfo_* list,
        float required_direction
    )
    IL2CPP_REGISTER_METHOD(0x012E4F60, void, InitializeWalkAnimation, app::KwolokBossLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnLegMovementStarted, app::KwolokBossLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnLegMovementStopped, app::KwolokBossLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012E5050, app::Vector2, GetMovementLimits, app::KwolokBossLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012E50F0, bool, IsAtMovementLimit, app::KwolokBossLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012E5200, void, ChangeLocomotionMode, app::KwolokBossLocomotion* this_ptr, app::KwolokBossLocomotion_LocomotionMode__Enum new_mode)
    IL2CPP_REGISTER_METHOD(0x012E5360, void, UpdateLocomotionMode, app::KwolokBossLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012E53D0, void, ExitLocomotionModeFollow, app::KwolokBossLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012E54A0, void, ExitLocomotionModeMoveRequest, app::KwolokBossLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012E54D0, void, EnterLocomotionModeRange, app::KwolokBossLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012E54F0, void, UpdateLocomotionModeIdle, app::KwolokBossLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012E5520, void, UpdateLocomotionModeFollow, app::KwolokBossLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012E5720, void, UpdateLocomotionModeMoveRequest, app::KwolokBossLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012E59B0, void, UpdateLocomotionModeRange, app::KwolokBossLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012E5DF0, void, ResetCooldownTimers, app::KwolokBossLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012E5E00, void, UpdateCooldownTimers, app::KwolokBossLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012E5F00, bool, CanFollow, app::KwolokBossLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012E60D0, bool, CanStayAtRange, app::KwolokBossLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012E62B0, void, UpdateLookAngle, app::KwolokBossLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012E6310, void, UpdateBodyHeight, app::KwolokBossLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012E66E0, void, UpdateFeetHeight, app::KwolokBossLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012E6800, void, UpdateIK, app::KwolokBossLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012E6880, void, OnLockIK, app::KwolokBossLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012E68F0, void, OnReleaseIK, app::KwolokBossLocomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012E6950, bool, AddMoveRequest, app::KwolokBossLocomotion* this_ptr, app::KwolokBossLocomotion_MoveRequest* request)
    IL2CPP_REGISTER_METHOD(0x012E69B0, bool, RemoveMoveRequest, app::KwolokBossLocomotion* this_ptr, app::KwolokBossLocomotion_MoveRequest* request)
    IL2CPP_REGISTER_METHOD(0x012E6A00, void, ctor, app::KwolokBossLocomotion* this_ptr)
} // namespace app::classes::KwolokBossLocomotion
