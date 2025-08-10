#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CharacterPlatformMovement.h>
#include <Modloader/app/structs/Entity.h>
#include <Modloader/app/structs/EntityWeightData_EntityWeight__Enum.h>
#include <Modloader/app/structs/GroundEntityMovementProcessor.h>
#include <Modloader/app/structs/ILocomotionTurningHandler.h>
#include <Modloader/app/structs/RaycastCommand.h>
#include <Modloader/app/structs/RaycastHit.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::GroundEntityMovementProcessor {
    IL2CPP_REGISTER_METHOD(0x0108DD00, bool, get_StickToSurfaces, app::GroundEntityMovementProcessor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004FBAD0, void, set_StickToSurfaces, app::GroundEntityMovementProcessor* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0108DE10, bool, get_GravityDisabled, app::GroundEntityMovementProcessor* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0108DE20,
        void,
        Init,
        app::GroundEntityMovementProcessor* this_ptr,
        app::Entity* owner,
        app::CharacterPlatformMovement* platform_movement,
        app::EntityWeightData_EntityWeight__Enum weight,
        app::ILocomotionTurningHandler* turning_handler
    )
    IL2CPP_REGISTER_METHOD(
        0x0108E010,
        bool,
        DoRaycast,
        app::GroundEntityMovementProcessor* this_ptr,
        app::RaycastCommand cmd,
        app::RaycastHit* hit,
        int32_t* request_id
    )
    IL2CPP_REGISTER_METHOD(0x0108E140, void, CalculateSurfaceNormal, app::GroundEntityMovementProcessor* this_ptr, int32_t* request_id)
    IL2CPP_REGISTER_METHOD(0x0108EA60, void, OnFixedUpdate, app::GroundEntityMovementProcessor* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0108F1D0,
        bool,
        StickToSurface,
        app::GroundEntityMovementProcessor* this_ptr,
        app::Vector3 down_direction,
        float lift,
        float distance
    )
    IL2CPP_REGISTER_METHOD(0x0108F590, void, UnstickFromSurface, app::GroundEntityMovementProcessor* this_ptr, float lift, float distance)
    IL2CPP_REGISTER_METHOD(0x0108F9C0, bool, CanMoveTowards, app::GroundEntityMovementProcessor* this_ptr, app::Vector2 direction)
    IL2CPP_REGISTER_METHOD(0x0108FC30, void, EnableGravity, app::GroundEntityMovementProcessor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0108FC40, void, DisableGravity, app::GroundEntityMovementProcessor* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0108FC50,
        bool,
        IsStandingOnLedge_1,
        app::GroundEntityMovementProcessor* this_ptr,
        float ledge_detection_distance,
        float ledge_ray_distance,
        int32_t* request_id
    )
    IL2CPP_REGISTER_METHOD(
        0x0108FCE0,
        bool,
        IsStandingOnLedgeOrNearKillSurface_1,
        app::GroundEntityMovementProcessor* this_ptr,
        float ledge_detection_distance,
        float ledge_ray_distance,
        int32_t* req_id
    )
    IL2CPP_REGISTER_METHOD(
        0x0108FD70,
        bool,
        IsStandingOnLedge_2,
        app::GroundEntityMovementProcessor* this_ptr,
        app::Vector3 feet_position,
        float ledge_detection_distance,
        float ledge_ray_distance,
        int32_t* request_id
    )
    IL2CPP_REGISTER_METHOD(
        0x0108FFC0,
        bool,
        IsStandingOnLedgeOrNearKillSurface_2,
        app::GroundEntityMovementProcessor* this_ptr,
        app::Vector3 feet_position,
        float ledge_detection_distance,
        float ledge_ray_distance,
        int32_t* req_id
    )
    IL2CPP_REGISTER_METHOD(
        0x01090210,
        bool,
        IsStandingBackToLedge_1,
        app::GroundEntityMovementProcessor* this_ptr,
        float ledge_detection_distance,
        float ledge_ray_distance,
        int32_t* request_id
    )
    IL2CPP_REGISTER_METHOD(
        0x010902A0,
        bool,
        IsStandingBackToLedge_2,
        app::GroundEntityMovementProcessor* this_ptr,
        app::Vector3 feet_position,
        float ledge_detection_distance,
        float ledge_ray_distance,
        int32_t* request_id
    )
    IL2CPP_REGISTER_METHOD(
        0x010904F0,
        bool,
        LedgeUnderPoint_1,
        app::GroundEntityMovementProcessor* this_ptr,
        app::Vector3 point,
        float ledge_ray_distance,
        int32_t* request_id
    )
    IL2CPP_REGISTER_METHOD(
        0x010908B0,
        bool,
        LedgeOrKillSurfaceUnderPoint,
        app::GroundEntityMovementProcessor* this_ptr,
        app::Vector3 point,
        float ledge_ray_distance,
        int32_t* request_id
    )
    IL2CPP_REGISTER_METHOD(0x01090E30, bool, WallInFrontOfPoint_1, app::GroundEntityMovementProcessor* this_ptr, app::Vector3 point, int32_t* req_id)
    IL2CPP_REGISTER_METHOD(
        0x01090E70,
        bool,
        WallInFrontOfPoint_2,
        app::GroundEntityMovementProcessor* this_ptr,
        app::Vector3 point,
        float ray_distance,
        int32_t* req_id
    )
    IL2CPP_REGISTER_METHOD(
        0x01091090,
        app::RaycastHit,
        WallHitInFrontOfPoint_1,
        app::GroundEntityMovementProcessor* this_ptr,
        app::Vector3 point,
        int32_t* req_id
    )
    IL2CPP_REGISTER_METHOD(
        0x01091100,
        app::RaycastHit,
        WallHitInFrontOfPoint_2,
        app::GroundEntityMovementProcessor* this_ptr,
        app::Vector3 point,
        float ray_distance,
        int32_t* req_id
    )
    IL2CPP_REGISTER_METHOD(0x01091350, bool, WallBackToThePoint_1, app::GroundEntityMovementProcessor* this_ptr, app::Vector3 point, int32_t* req_id)
    IL2CPP_REGISTER_METHOD(
        0x01091390,
        bool,
        WallBackToThePoint_2,
        app::GroundEntityMovementProcessor* this_ptr,
        app::Vector3 point,
        float ray_distance,
        int32_t* req_id
    )
    IL2CPP_REGISTER_METHOD(0x010915B0, bool, CanContinueMovingForward, app::GroundEntityMovementProcessor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01091630, bool, CanContinueMovingBack, app::GroundEntityMovementProcessor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010916B0, bool, CanContinueMovingInDirection_1, app::GroundEntityMovementProcessor* this_ptr, float direction_sign)
    IL2CPP_REGISTER_METHOD(
        0x01091780,
        bool,
        CanContinueMovingInDirection_2,
        app::GroundEntityMovementProcessor* this_ptr,
        float direction_sign,
        bool use_obstacle_mask,
        int32_t* request_id_forward,
        int32_t* request_id_backward
    )
    IL2CPP_REGISTER_METHOD(
        0x01091890,
        bool,
        CanContinueMovingInDirection_3,
        app::GroundEntityMovementProcessor* this_ptr,
        int32_t* request_id,
        app::Vector3 point,
        float ledge_detection_distance,
        float ledge_ray_distance,
        float direction_sign,
        bool use_obstacle_mask
    )
    IL2CPP_REGISTER_METHOD(0x01092190, bool, IsStandingOnLedge_3, app::GroundEntityMovementProcessor* this_ptr, int32_t* request_id)
    IL2CPP_REGISTER_METHOD(0x01092200, bool, IsStandingOnLedgeOrNearKillSurface_3, app::GroundEntityMovementProcessor* this_ptr, int32_t* req_ids)
    IL2CPP_REGISTER_METHOD(0x01092270, bool, IsStandingOnLedge_4, app::GroundEntityMovementProcessor* this_ptr, app::Vector3 feet_position, int32_t* request_id)
    IL2CPP_REGISTER_METHOD(0x010922B0, bool, IsStandingBackToLedge_3, app::GroundEntityMovementProcessor* this_ptr, int32_t* request_id)
    IL2CPP_REGISTER_METHOD(
        0x01092270,
        bool,
        IsStandingBackToLedge_4,
        app::GroundEntityMovementProcessor* this_ptr,
        app::Vector3 feet_position,
        int32_t* request_id
    )
    IL2CPP_REGISTER_METHOD(0x01092320, bool, WillBeNearLedge, app::GroundEntityMovementProcessor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01092500, void, AdjustFeetPosition, app::GroundEntityMovementProcessor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01092780, bool, LedgeUnderPoint_2, app::GroundEntityMovementProcessor* this_ptr, app::Vector3 point, int32_t* request_id)
    IL2CPP_REGISTER_METHOD(
        0x010927C0,
        void,
        UpdateRotation_1,
        app::GroundEntityMovementProcessor* this_ptr,
        float ground_angle,
        bool force_update,
        float speed_override
    )
    IL2CPP_REGISTER_METHOD(
        0x01093140,
        void,
        UpdateRotation_2,
        app::GroundEntityMovementProcessor* this_ptr,
        app::Vector2 normal,
        bool force_update,
        float speed_override
    )
    IL2CPP_REGISTER_METHOD(0x01093230, void, RotateSmooth, app::GroundEntityMovementProcessor* this_ptr, float target_angle, float k)
    IL2CPP_REGISTER_METHOD(
        0x01093880,
        void,
        RotateToFallingVelocity,
        app::GroundEntityMovementProcessor* this_ptr,
        app::Vector2 velocity,
        float k,
        float rotation_limit
    )
    IL2CPP_REGISTER_METHOD(0x01093E80, void, UpdateRotation_3, app::GroundEntityMovementProcessor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01093ED0, void, SnapGroundRotation, app::GroundEntityMovementProcessor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01094060, void, ctor, app::GroundEntityMovementProcessor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01094150, void, cctor, )
} // namespace app::classes::GroundEntityMovementProcessor
