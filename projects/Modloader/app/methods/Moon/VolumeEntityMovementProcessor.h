#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CharacterPlatformMovement.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Entity.h>
#include <Modloader/app/structs/ILocomotionTurningHandler.h>
#include <Modloader/app/structs/MovementSettings.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/VolumeEntityMovementProcessor.h>

namespace app::classes::Moon::VolumeEntityMovementProcessor {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_DrawObstacleHitAvoidanceGizmos, )
    IL2CPP_REGISTER_METHOD(0x0119CE50, bool, get_GravityDisabled, app::VolumeEntityMovementProcessor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0119CE60, bool, get_IsObstacleAvoidanceDisabled, app::VolumeEntityMovementProcessor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0119CE70, void, set_IsObstacleAvoidanceDisabled, app::VolumeEntityMovementProcessor* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0119CE80, float, get_CurrentObstacleAvoidanceStrength, app::VolumeEntityMovementProcessor* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0119CE90,
        void,
        Init,
        app::VolumeEntityMovementProcessor* this_ptr,
        app::Entity* entity,
        app::CharacterPlatformMovement* platform_movement,
        app::ILocomotionTurningHandler* turning_handler
    )
    IL2CPP_REGISTER_METHOD(0x0119D0A0, void, UpdateAngle_1, app::VolumeEntityMovementProcessor* this_ptr, float speed, bool force)
    IL2CPP_REGISTER_METHOD(0x0119D0E0, void, UpdateAngle_2, app::VolumeEntityMovementProcessor* this_ptr, app::Vector2 direction, float speed, bool force)
    IL2CPP_REGISTER_METHOD(
        0x0119D150,
        void,
        UpdateAngle_3,
        app::VolumeEntityMovementProcessor* this_ptr,
        app::Vector2 target_direction,
        float rotation_speed,
        app::Transform* rotated_transform,
        bool force
    )
    IL2CPP_REGISTER_METHOD(0x0119D7C0, void, ChangeMovementSettings, app::VolumeEntityMovementProcessor* this_ptr, app::MovementSettings* new_settings)
    IL2CPP_REGISTER_METHOD(0x0119D810, bool, get_AllowFreeRotation, app::VolumeEntityMovementProcessor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0119D820, void, set_AllowFreeRotation, app::VolumeEntityMovementProcessor* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0119D830, void, TransferRotationToFeet, app::VolumeEntityMovementProcessor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0119D9E0, void, TransferRotationFromFeet, app::VolumeEntityMovementProcessor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0119DB70, void, UpdateCurrentAreaType, app::VolumeEntityMovementProcessor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0119E180, bool, InWater, app::VolumeEntityMovementProcessor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0119E2A0, bool, get_FreeMovement, app::VolumeEntityMovementProcessor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0119E2D0, app::Vector2, ProcessFreeMovementSpeed, app::VolumeEntityMovementProcessor* this_ptr, app::Vector2 speed)
    IL2CPP_REGISTER_METHOD(0x0119E760, void, CalculateSurfaceNormal, app::VolumeEntityMovementProcessor* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0119EFC0,
        void,
        StickToSurface,
        app::VolumeEntityMovementProcessor* this_ptr,
        app::Vector3 down_direction,
        float lift,
        float distance
    )
    IL2CPP_REGISTER_METHOD(
        0x0119F350,
        void,
        UpdateRotation_1,
        app::VolumeEntityMovementProcessor* this_ptr,
        float ground_angle,
        bool force_update,
        float speed_override
    )
    IL2CPP_REGISTER_METHOD(
        0x0119FCF0,
        void,
        UpdateRotation_2,
        app::VolumeEntityMovementProcessor* this_ptr,
        app::Vector2 normal,
        bool force_update,
        float speed_override
    )
    IL2CPP_REGISTER_METHOD(0x0119FDE0, void, RotateSmooth, app::VolumeEntityMovementProcessor* this_ptr, float target_angle, float k)
    IL2CPP_REGISTER_METHOD(
        0x011A0440,
        void,
        RotateToFallingVelocity,
        app::VolumeEntityMovementProcessor* this_ptr,
        app::Vector2 velocity,
        float k,
        float rotation_limit
    )
    IL2CPP_REGISTER_METHOD(0x011A0A50, void, UpdateRotation_3, app::VolumeEntityMovementProcessor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011A0AA0, void, SnapGroundRotation, app::VolumeEntityMovementProcessor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011A0C40, app::Vector2, ProcessGroundedMovementSpeed, app::VolumeEntityMovementProcessor* this_ptr, app::Vector2 speed)
    IL2CPP_REGISTER_METHOD(0x011A11D0, int32_t, GetDistribution, int32_t variance)
    IL2CPP_REGISTER_METHOD(0x011A1270, int32_t, GetDelay, app::VolumeEntityMovementProcessor* this_ptr, int32_t rate, int32_t variance)
    IL2CPP_REGISTER_METHOD(0x011A1330, void, OnFixedUpdate, app::VolumeEntityMovementProcessor* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x011A1960,
        app::Vector2,
        ProcessSpeedWithCollisionAvoidance,
        app::VolumeEntityMovementProcessor* this_ptr,
        app::Vector2 initial_world_velocity
    )
    IL2CPP_REGISTER_METHOD(
        0x011A1EC0,
        void,
        DebugDrawLolipop,
        app::VolumeEntityMovementProcessor* this_ptr,
        app::Vector3 from,
        app::Vector3 to,
        float radius,
        app::Color color
    )
    IL2CPP_REGISTER_METHOD(0x011A2060, void, ctor, app::VolumeEntityMovementProcessor* this_ptr)
} // namespace app::classes::Moon::VolumeEntityMovementProcessor
