#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_2_UnityEngine_Vector3_UnityEngine_Collider_.h>
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/CapsuleCollider.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/GrabbableSurface.h>
#include <Modloader/app/structs/IMoonTypeResolver.h>
#include <Modloader/app/structs/List_1_UnityEngine_Collider_.h>
#include <Modloader/app/structs/MovingPlatformsController.h>
#include <Modloader/app/structs/PlatformMovement.h>
#include <Modloader/app/structs/Ray.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/SurfaceMaterialType__Enum.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::PlatformMovement {
    IL2CPP_REGISTER_METHOD(0x011654C0, void, RefreshCapsulePropertiesCache, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01165690, app::CapsuleCollider*, get_CapsuleCollider, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01165770, void, set_CapsuleCollider, app::PlatformMovement* this_ptr, app::CapsuleCollider* value)
    IL2CPP_REGISTER_METHOD(0x002FBCE0, app::CapsuleCollider*, GetCapsuleColliderFullAccess, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01165780, float, GetCapsuleColliderRadius, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01165890, float, GetCapsuleColliderHeight, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011659A0, app::Bounds, GetCapsuleColliderBounds, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01165A40, void, SetCapsuleColliderEnabled, app::PlatformMovement* this_ptr, bool e)
    IL2CPP_REGISTER_METHOD(0x01165AC0, void, AddToCapsuleColliderRadiusAndHeight, app::PlatformMovement* this_ptr, float r, float h)
    IL2CPP_REGISTER_METHOD(0x01165CF0, void, AddToCapsuleColliderRadius, app::PlatformMovement* this_ptr, float r)
    IL2CPP_REGISTER_METHOD(0x01165E50, void, AddToCapsuleColliderHeight, app::PlatformMovement* this_ptr, float h)
    IL2CPP_REGISTER_METHOD(0x01165FB0, app::Vector3, get_GroundBinormal, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01166100, app::Vector3, get_CeilingBinormal, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01166250, app::Vector3, get_WallLeftBinormal, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011663A0, app::Vector3, get_WallRightBinormal, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011664F0, bool, get_IsOnCeiling, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01166540, bool, get_IsOnGroundOrCeiling, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011665A0, bool, get_InOnAnySurface, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01166610, bool, get_IsInAir, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01166630, bool, get_IsFalling, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01166680, float, get_AbsoluteLocalSpeedX, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01166730, float, get_AbsoluteLocalSpeedY, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011667E0, app::Vector2, get_PhysicsSpeed, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01166950, app::Vector3, get_GravityDirection, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01166A80, app::Vector3, get_GravityBinormal, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01166BE0, float, get_CeilingAngle, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01166CB0, float, get_WallRightAngle, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01166D80, float, get_WallLeftAngle, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01166E60, float, get_PositionX, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01166E90, void, set_PositionX, app::PlatformMovement* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x01166F20, float, get_PositionY, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01166F50, void, set_PositionY, app::PlatformMovement* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x01166FD0, app::Vector2, get_Position2D, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011670E0, void, set_Position2D, app::PlatformMovement* this_ptr, app::Vector2 value)
    IL2CPP_REGISTER_METHOD(
        0x01167210,
        void,
        LocalOffsetToSpheresOfCapsuleColliderFast,
        app::PlatformMovement* this_ptr,
        app::Vector3* top,
        app::Vector3* bottom
    )
    IL2CPP_REGISTER_METHOD(0x01167540, app::Vector3, get_LocalOffsetToBottomSphereOfCapsuleCollider, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011679A0, app::Vector3, get_LocalOffsetToTopSphereOfCapsuleCollider, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01167E00, app::Vector3, get_LocalOffsetToBottomSphereOfCapsuleColliderCorrect, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01168280, app::Vector3, get_LocalOffsetToTopSphereOfCapsuleColliderCorrect, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011686D0, app::Vector3, get_WorldOffsetToBottomSphereOfCapsuleCollider, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011687E0, app::Vector3, get_WorldOffsetToTopSphereOfCapsuleCollider, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011688F0, app::Vector3, get_WorldOffsetToBottomSphereOfCapsuleColliderCorrect, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01168A00, app::Vector3, get_WorldOffsetToTopSphereOfCapsuleColliderCorrect, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD20, app::MovingPlatformsController*, get_MovingPlatforms, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01168B10, float, get_OnGroundSpeedTreshold, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01168B20, bool, get_IsOnGround, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsGroundHurting, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01168B90, bool, get_JustStartedFalling, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01168BD0, bool, get_HasWallLeft, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01168C20, bool, get_HasWallRight, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01168C70, bool, get_IsOnWall, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005035C0, app::SurfaceMaterialType__Enum, get_GroundSurfaceMaterialType, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01168D00, app::GrabbableSurface*, GetCurrentGrabbableSurface, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01168E20,
        bool,
        IsTouchingGrabbableSurfaceInternal,
        app::PlatformMovement* this_ptr,
        app::List_1_UnityEngine_Collider_* colliders,
        app::GrabbableSurface** surface
    )
    IL2CPP_REGISTER_METHOD(0x01169050, void, PruneRecentObjectSurfaces, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01169420, bool, get_MovingHorizontally, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011694E0, bool, get_Jumping, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01169510, void, ClampSpeed, app::PlatformMovement* this_ptr, float min, float max)
    IL2CPP_REGISTER_METHOD(0x01169700, app::Vector2, get_LocalSpeed, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011697C0, void, set_LocalSpeed, app::PlatformMovement* this_ptr, app::Vector2 value)
    IL2CPP_REGISTER_METHOD(0x003FD4D0, float, get_LocalSpeedX, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01169880, void, set_LocalSpeedX, app::PlatformMovement* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x00A479E0, float, get_LocalSpeedY, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01169890, void, set_LocalSpeedY, app::PlatformMovement* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x011698A0, app::Vector2, get_WorldSpeed, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011698E0, void, set_WorldSpeed, app::PlatformMovement* this_ptr, app::Vector2 value)
    IL2CPP_REGISTER_METHOD(0x01169920, float, get_WorldSpeedX_DEPRECATED, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01169970, void, set_WorldSpeedX_DEPRECATED, app::PlatformMovement* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x011699C0, float, get_WorldSpeedY_DEPRECATED, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01169A10, void, set_WorldSpeedY_DEPRECATED, app::PlatformMovement* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x01169920, float, get_WorldSpeedX, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01169A60, void, set_WorldSpeedX, app::PlatformMovement* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x011699C0, float, get_WorldSpeedY, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01169AC0, void, set_WorldSpeedY, app::PlatformMovement* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x003FDD20, float, get_GravityAngle, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FDD30, void, set_GravityAngle, app::PlatformMovement* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x01169B20, float, get_GroundAngle, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01169BF0, app::Vector3, get_PrevPosition, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01169C10, app::Rigidbody*, get_Rigidbody, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005C7620, app::Vector3, get_Position, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01169CE0, void, set_Position, app::PlatformMovement* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsAllowedNonZeroZPosition, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01169F30, void, OverridePositionNextSave, app::PlatformMovement* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x01169FF0, app::Vector3, GetSavePositionAndClearOverride, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0116A240, app::Vector3, get_HeadPosition, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0116A370, void, set_HeadPosition, app::PlatformMovement* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x0116A4A0, app::Vector3, get_HeadPositionCorrect, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0116A5D0, void, set_HeadPositionCorrect, app::PlatformMovement* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x0116A700, app::Vector3, get_FeetPosition, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0116A830, void, set_FeetPosition, app::PlatformMovement* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x0116A960, app::Vector3, get_FeetPositionCorrect, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0116AA90, void, set_FeetPositionCorrect, app::PlatformMovement* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x0083E8C0, app::SuspendableMask__Enum, get_Mask, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0075A3F0, void, set_Mask, app::PlatformMovement* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x0116ABC0, app::Vector2, WorldToLocal, app::PlatformMovement* this_ptr, app::Vector2 world)
    IL2CPP_REGISTER_METHOD(0x0116ABF0, app::Vector2, LocalToWorld, app::PlatformMovement* this_ptr, app::Vector2 local)
    IL2CPP_REGISTER_METHOD(0x0116AC10, app::Vector3, get_LastOnGroundPosition, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0116AC30, void, set_LastOnGroundPosition, app::PlatformMovement* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x010189B0, float, get_LastOnGroundTime, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0116AC50, void, set_LastOnGroundTime, app::PlatformMovement* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x0116AC60, void, Awake, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAwake, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0116AD80, void, Prewarm, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0116ADB0, void, OnPrewarm, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0116AE40, void, CacheNonSerializedComponents, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0116AE70, void, OnCacheNonSerializedComponents, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0116AFE0, void, OnDestroy, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0116B080, void, OnDisable, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0116B0D0, void, SetPositionOnTransform, app::PlatformMovement* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x0116B210, void, OnCollisionGround, app::PlatformMovement* this_ptr, app::Vector2 local_normal, app::Collider* collided_with)
    IL2CPP_REGISTER_METHOD(0x0116B520, void, DetectGroundSurfaceType, app::PlatformMovement* this_ptr, app::Collider* collider)
    IL2CPP_REGISTER_METHOD(0x0116B640, void, OnCollisionWallLeft, app::PlatformMovement* this_ptr, app::Vector2 local_normal, app::Collider* collided_with)
    IL2CPP_REGISTER_METHOD(0x0116B830, void, OnCollisionWallRight, app::PlatformMovement* this_ptr, app::Vector2 local_normal, app::Collider* collided_with)
    IL2CPP_REGISTER_METHOD(0x0116BA20, void, OnCollisionCeiling, app::PlatformMovement* this_ptr, app::Vector2 local_normal, app::Collider* collided_with)
    IL2CPP_REGISTER_METHOD(0x0116BC20, void, UpdateCollisionStates, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0116BDF0,
        void,
        add_OnCollisionGroundEvent,
        app::PlatformMovement* this_ptr,
        app::Action_2_UnityEngine_Vector3_UnityEngine_Collider_* value
    )
    IL2CPP_REGISTER_METHOD(
        0x0116BEE0,
        void,
        remove_OnCollisionGroundEvent,
        app::PlatformMovement* this_ptr,
        app::Action_2_UnityEngine_Vector3_UnityEngine_Collider_* value
    )
    IL2CPP_REGISTER_METHOD(
        0x0116BFD0,
        void,
        add_OnCollisionCeilingEvent,
        app::PlatformMovement* this_ptr,
        app::Action_2_UnityEngine_Vector3_UnityEngine_Collider_* value
    )
    IL2CPP_REGISTER_METHOD(
        0x0116C0C0,
        void,
        remove_OnCollisionCeilingEvent,
        app::PlatformMovement* this_ptr,
        app::Action_2_UnityEngine_Vector3_UnityEngine_Collider_* value
    )
    IL2CPP_REGISTER_METHOD(
        0x0116C1B0,
        void,
        add_OnCollisionWallLeftEvent,
        app::PlatformMovement* this_ptr,
        app::Action_2_UnityEngine_Vector3_UnityEngine_Collider_* value
    )
    IL2CPP_REGISTER_METHOD(
        0x0116C2A0,
        void,
        remove_OnCollisionWallLeftEvent,
        app::PlatformMovement* this_ptr,
        app::Action_2_UnityEngine_Vector3_UnityEngine_Collider_* value
    )
    IL2CPP_REGISTER_METHOD(
        0x0116C390,
        void,
        add_OnCollisionWallRightEvent,
        app::PlatformMovement* this_ptr,
        app::Action_2_UnityEngine_Vector3_UnityEngine_Collider_* value
    )
    IL2CPP_REGISTER_METHOD(
        0x0116C480,
        void,
        remove_OnCollisionWallRightEvent,
        app::PlatformMovement* this_ptr,
        app::Action_2_UnityEngine_Vector3_UnityEngine_Collider_* value
    )
    IL2CPP_REGISTER_METHOD(
        0x0116C570,
        void,
        add_OnLandOnGroundEvent,
        app::PlatformMovement* this_ptr,
        app::Action_2_UnityEngine_Vector3_UnityEngine_Collider_* value
    )
    IL2CPP_REGISTER_METHOD(
        0x0116C660,
        void,
        remove_OnLandOnGroundEvent,
        app::PlatformMovement* this_ptr,
        app::Action_2_UnityEngine_Vector3_UnityEngine_Collider_* value
    )
    IL2CPP_REGISTER_METHOD(
        0x0116C750,
        void,
        add_OnLandOnWallLeftEvent,
        app::PlatformMovement* this_ptr,
        app::Action_2_UnityEngine_Vector3_UnityEngine_Collider_* value
    )
    IL2CPP_REGISTER_METHOD(
        0x0116C840,
        void,
        remove_OnLandOnWallLeftEvent,
        app::PlatformMovement* this_ptr,
        app::Action_2_UnityEngine_Vector3_UnityEngine_Collider_* value
    )
    IL2CPP_REGISTER_METHOD(
        0x0116C930,
        void,
        add_OnLandOnWallRightEvent,
        app::PlatformMovement* this_ptr,
        app::Action_2_UnityEngine_Vector3_UnityEngine_Collider_* value
    )
    IL2CPP_REGISTER_METHOD(
        0x0116CA20,
        void,
        remove_OnLandOnWallRightEvent,
        app::PlatformMovement* this_ptr,
        app::Action_2_UnityEngine_Vector3_UnityEngine_Collider_* value
    )
    IL2CPP_REGISTER_METHOD(
        0x0116CB10,
        void,
        add_OnLandOnCeilingEvent,
        app::PlatformMovement* this_ptr,
        app::Action_2_UnityEngine_Vector3_UnityEngine_Collider_* value
    )
    IL2CPP_REGISTER_METHOD(
        0x0116CC00,
        void,
        remove_OnLandOnCeilingEvent,
        app::PlatformMovement* this_ptr,
        app::Action_2_UnityEngine_Vector3_UnityEngine_Collider_* value
    )
    IL2CPP_REGISTER_METHOD(0x0116CCF0, app::Ray, get_GoThroughPlatformTestingRayLeft, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0116D080, app::Ray, get_GoThroughPlatformTestingRayRight, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0116D410, void, GoThroughPlatformTestingRayLeftRight, app::PlatformMovement* this_ptr, app::Ray* left, app::Ray* right)
    IL2CPP_REGISTER_METHOD(0x0116D9C0, app::Collider*, get_GoThroughPlatformTesterCollider, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0061BAF0, float, get_GoThroughPlatformTestingRayRadius, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0116D9D0, app::Vector3, get_RaySidewaysOffset, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0116DB40, void, ctor, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0116ED10, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_1, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_2, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_3, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_4, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_5, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_6, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_7, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_8, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_9, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_10, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_11, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_12, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_13, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_14, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_15, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_16, app::PlatformMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_17, app::PlatformMovement* this_ptr)
} // namespace app::classes::PlatformMovement
