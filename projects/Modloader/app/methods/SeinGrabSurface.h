#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/CapsuleCollider.h>
#include <Modloader/app/structs/CharacterGravity.h>
#include <Modloader/app/structs/CharacterLeftRightMovement.h>
#include <Modloader/app/structs/CharacterPlatformMovement.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/Func_1_Boolean_.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GrabbableSurface.h>
#include <Modloader/app/structs/GrabbableSurfaceMovingWheel.h>
#include <Modloader/app/structs/GravityPlatformMovementSettings.h>
#include <Modloader/app/structs/HorizontalPlatformMovementSettings.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/SeinGrabSurface.h>
#include <Modloader/app/structs/SeinGrabSurfacePuppet.h>
#include <Modloader/app/structs/SeinGrabSurface_AnimationState__Enum.h>
#include <Modloader/app/structs/SurfaceMaterialType__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SeinGrabSurface {
    IL2CPP_REGISTER_METHOD(0x014BE840, app::SeinGrabSurfacePuppet*, get_Puppet, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014BE900, app::ActiveAnimationHandle, get_ActiveAnimation, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014BE910, void, set_ActiveAnimation, app::SeinGrabSurface* this_ptr, app::ActiveAnimationHandle value)
    IL2CPP_REGISTER_METHOD(0x006C8770, app::GrabbableSurface*, get_TouchedGrabSurface, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014BE960, void, set_TouchedGrabSurface, app::SeinGrabSurface* this_ptr, app::GrabbableSurface* value)
    IL2CPP_REGISTER_METHOD(0x01303770, app::GrabbableSurface*, get_GrabbedGrabSurface, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014BEBA0, void, set_GrabbedGrabSurface, app::SeinGrabSurface* this_ptr, app::GrabbableSurface* value)
    IL2CPP_REGISTER_METHOD(0x014BED10, bool, get_CanTurnPlay, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014BED70, app::Vector3, get_GrabPosition, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006E4240, app::CharacterGravity*, get_CharacterGravity, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005D06F0, app::CharacterLeftRightMovement*, get_CharacterLeftRightMovement, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005D06C0, app::CharacterPlatformMovement*, get_PlatformMovement, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014BEF70, app::CapsuleCollider*, get_OriCollider, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014BEFB0, bool, get_IsStatePerforming, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014BEFC0, bool, get_DelayedWheelJumpCleanUpTriggered, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014BEFD0, bool, get_IsRidingWheel, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014BEFE0, void, set_IsRidingWheel, app::SeinGrabSurface* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x014BEFF0, bool, CanRideWheel, app::SeinGrabSurface* this_ptr, app::GrabbableSurfaceMovingWheel* wheel)
    IL2CPP_REGISTER_METHOD(0x014BF1A0, app::Vector3, get_SurfaceNormal, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014BF2B0, app::Vector3, get_SurfaceNormalSmooth, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014BF3A0, app::Vector3, get_SurfaceDirection, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014BF4B0, app::Vector3, get_SurfacePosition, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014BF5C0, app::Vector3, get_SurfaceNormalFront, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014BF6D0, app::Vector3, get_SurfaceDirectionFront, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014BF7E0, app::Vector3, get_SurfacePositionFront, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014BF8F0, app::Vector3, get_SurfaceNormalBack, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014BFA00, app::Vector3, get_SurfaceDirectionBack, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014BFB10, app::Vector3, get_SurfacePositionBack, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014BFC20, void, UpdateTouchedSurface, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateGrabbedSurface, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_WantToGrab, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014BFF40, bool, get_CanStartGrab, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014C04A0, bool, get_ShouldStopGrab, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014C04F0, bool, get_PlatformMovementIsOnWall, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014C0520, bool, get_PlatformMovementIsOnLeftWall, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014C05B0, bool, get_PlatformMovementIsOnRightWall, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014C0640, bool, get_PlatformMovementIsOnCeiling, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014C06D0, bool, get_PlatformMovementIsOnGround, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014C0750, bool, get_IsOnWall, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014C0980, bool, get_IsOnLeftWall, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014C0A70, bool, get_IsOnRightWall, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014C0BB0, bool, get_IsOnCeiling, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014C0D90, bool, get_IsOnGround, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014C0E80, bool, get_IsMoving, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014C0F40, bool, get_ShouldClimbAnimationPlay, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014C0FA0, bool, get_ShouldGrabWallDownAnimationPlay, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014C0FE0, bool, get_ShouldGrabWallIdleAnimationPlay, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014C1040, bool, get_ShouldGrabGroundIdleAnimationPlay, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014C1070, bool, get_ShouldGrabGroundMovingAnimationPlay, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014BEFB0, bool, get_IsGrabbing, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014C10C0, void, set_IsGrabbing, app::SeinGrabSurface* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x014C1110, bool, get_SpriteMirrorLock, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014C1120, void, set_SpriteMirrorLock, app::SeinGrabSurface* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x014C11E0, float, get_OriAngleForMovingWheel, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014C1290, void, set_OriAngleForMovingWheel, app::SeinGrabSurface* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x014C1430, void, OnEnable, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014C16D0, void, OnDisable, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014C1990, void, OnPreRestoreCheckpoint, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014C19C0, void, OnRestoreCheckpoint, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014BEFB0, bool, ShouldGrabAnimationKeepPlaying, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005E1300, bool, ShouldJumpDownAnimationKeepPlaying, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014C1D30, void, OnSetReferenceToSein, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014C1E10, void, Start, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014C2220, void, OnAwake, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014C2400, void, OnDestroy, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x014C2820,
        void,
        ModifyGravityPlatformMovementSettings,
        app::SeinGrabSurface* this_ptr,
        app::GravityPlatformMovementSettings* settings
    )
    IL2CPP_REGISTER_METHOD(
        0x014C2850,
        void,
        ModifyHorizontalPlatformMovementSettings,
        app::SeinGrabSurface* this_ptr,
        app::HorizontalPlatformMovementSettings* settings
    )
    IL2CPP_REGISTER_METHOD(0x014C29A0, void, OnExit, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014C29D0, void, StartIgnoringColliders, app::SeinGrabSurface* this_ptr, app::GameObject* target)
    IL2CPP_REGISTER_METHOD(0x014C2B60, void, StopIgnoringColliders, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014C2D10, void, InitializeClimbSpeed, app::SeinGrabSurface* this_ptr, app::Vector2 velocity)
    IL2CPP_REGISTER_METHOD(0x014C2F00, void, OnSurfaceTouchStart, app::SeinGrabSurface* this_ptr, app::GrabbableSurface* surface)
    IL2CPP_REGISTER_METHOD(0x0090CE60, void, OnSurfaceTouchEnd, app::SeinGrabSurface* this_ptr, app::GrabbableSurface* surface)
    IL2CPP_REGISTER_METHOD(0x014C3000, void, OnSurfaceGrabStart, app::SeinGrabSurface* this_ptr, app::GrabbableSurface* surface)
    IL2CPP_REGISTER_METHOD(0x014C3220, void, OnSurfaceGrabEnd, app::SeinGrabSurface* this_ptr, app::GrabbableSurface* surface)
    IL2CPP_REGISTER_METHOD(0x014C3250, void, OnGrab, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014C3670, void, OnRelease, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014C3A50, void, EnterWheel, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014C4450, void, UpdateWheel, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014C49F0, void, ShootOutFromWheel, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014C5E10, void, ReleaseWheel, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014C6780, void, CancelWheel, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014C6EE0, void, TriggerDelayedWheelJumpCleanUp, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014C6F00, void, WheelJumpCleanUp, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014C7030, void, CancelDelayedWheelJumpCleanUp, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014C7040, void, HandleWheelJumpCleanUp, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x014C70F0,
        app::ActiveAnimationHandle,
        PlayAnimation,
        app::SeinGrabSurface* this_ptr,
        app::MoonAnimation* animation,
        int32_t layer,
        app::Action* on_stop_playing,
        app::Func_1_Boolean_* condition,
        float speed
    )
    IL2CPP_REGISTER_METHOD(0x014C7200, app::Vector2, get_m_currentClimbVelocity, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014C7320, void, CheckStopGrabbingConditions, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014C7500, void, UpdateGrabbing, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014C7F80, bool, RaycastReleaseTest, app::SeinGrabSurface* this_ptr, app::Vector3 new_pos, app::Vector3 old_pos)
    IL2CPP_REGISTER_METHOD(0x014C81C0, void, ChangeAnimationState, app::SeinGrabSurface* this_ptr, app::SeinGrabSurface_AnimationState__Enum new_state)
    IL2CPP_REGISTER_METHOD(0x014C8AF0, void, UpdateAnimationState, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014C9260, float, CalculateDesiredClimbSpeed, app::SeinGrabSurface* this_ptr, app::Vector2 move_direction)
    IL2CPP_REGISTER_METHOD(0x014C92D0, void, UpdateSound, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014C9490, void, UpdateCurvatureParameter, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014C98C0, void, UpdateGravity, app::SeinGrabSurface* this_ptr, bool force)
    IL2CPP_REGISTER_METHOD(0x014C9B90, void, SetWheel, app::SeinGrabSurface* this_ptr, app::GrabbableSurfaceMovingWheel* moving_wheel)
    IL2CPP_REGISTER_METHOD(0x014C9C50, void, UpdateCharacterState, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014C9F20, void, CalculateSurfaceSlope, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014CA2C0, void, EnterGrabbing, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014CA4D0, void, RequestGrabSurface_1, app::SeinGrabSurface* this_ptr, app::GrabbableSurface* surface)
    IL2CPP_REGISTER_METHOD(0x014CA560, void, RequestGrabSurface_2, app::SeinGrabSurface* this_ptr, app::GrabbableSurface* surface, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x014CA690, void, PerformJump, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014CB040, void, TransitionToWalkOnGround, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014CB1A0, void, OnTakeDamage, app::SeinGrabSurface* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x014CB1F0, void, OnPreDash, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014CB370, bool, CanDash, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014CB550, bool, CanChargeJump, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014CB710, bool, get_IsStandingOnTopOfSurface, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014CB820, void, UpdateVFX, app::SeinGrabSurface* this_ptr, app::SurfaceMaterialType__Enum surface_type)
    IL2CPP_REGISTER_METHOD(0x014CBDE0, void, StopEfffect, app::SeinGrabSurface* this_ptr, app::SurfaceMaterialType__Enum surface_type)
    IL2CPP_REGISTER_METHOD(0x014CBEE0, void, StopAllEfffects, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014CC060, void, ctor, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014BEFB0, bool, _EnterWheel_b__194_0, app::SeinGrabSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005E1300, bool, _ShootOutFromWheel_b__196_0, app::SeinGrabSurface* this_ptr)
} // namespace app::classes::SeinGrabSurface
