#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/CharacterGravity.h>
#include <Modloader/app/structs/CharacterLeftRightMovement.h>
#include <Modloader/app/structs/CharacterPlatformMovement.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/DigZone.h>
#include <Modloader/app/structs/EffectSpawn.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/GravityPlatformMovementSettings.h>
#include <Modloader/app/structs/HorizontalPlatformMovementSettings.h>
#include <Modloader/app/structs/MoonControllerColliderHit.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/SeinDamageReceiverPuppet.h>
#include <Modloader/app/structs/SeinDigging.h>
#include <Modloader/app/structs/SeinSwimming.h>
#include <Modloader/app/structs/SeinSwimmingPuppet.h>
#include <Modloader/app/structs/SeinSwimming_State__Enum.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/WaterZone.h>

namespace app::classes::SeinSwimming {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A83B70, bool, get_IsUpsideDown, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A83D30, bool, ShouldHandleKickback, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A83E60, bool, IsDashingInWater, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A83F80, bool, get_IsDrowning, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A83F90, app::SeinSwimmingPuppet*, get_Puppet, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00875720, bool, get_OriUnderWaterWwiseStateValue, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A84050, void, set_OriUnderWaterWwiseStateValue, app::SeinSwimming* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00A84250, float, get_BoostMaxSpeed, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A842E0, bool, get_IsGlowPerforming, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A84420, void, set_SwimAngle, app::SeinSwimming* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x00A84540, float, get_SwimAngle, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A84550, float, get_KickbackForce, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A84580, float, get_DigLeftStickDeadZone, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A84680, app::WaterZone*, get_PreviousWater, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A84690, app::WaterZone*, get_CurrentWater, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A846A0, void, set_CurrentWater, app::SeinSwimming* this_ptr, app::WaterZone* value)
    IL2CPP_REGISTER_METHOD(0x00A848B0, bool, get_IsInsideWater, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A84960, app::SeinDigging*, get_DigAbility, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A849A0, bool, get_IsDigging, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009CD4A0, float, GetDashDamage, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A3B10, float, get_RemainingBreath, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A84AF0, void, set_RemainingBreath, app::SeinSwimming* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x00A84B00, bool, get_JustBashed, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A84C50, bool, get_IsDashing, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A84C60, bool, get_IsSurfaceDashing, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A84C70, bool, get_IsDashingIntoWater, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A84C80, bool, get_CanTurnPlay, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A84CC0, bool, get_CanWaterDash, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A84CF0, bool, get_CanIntoWaterDash, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A84CC0, bool, get_CanSurfaceDash, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A84E70, bool, HasAbility, app::SeinSwimming* this_ptr, app::AbilityType__Enum ability)
    IL2CPP_REGISTER_METHOD(0x00A84F30, bool, get_IsSeinGrabAllowed, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A84F50, float, get_AngleDeltaLimit, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A84F70, bool, get_HasUnlimitedBreathingUnderwater, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006F40D0, app::CharacterPlatformMovement*, get_PlatformMovement, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005D06F0, app::CharacterLeftRightMovement*, get_LeftRightMovement, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006E4240, app::CharacterGravity*, get_Gravity, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A84FD0, bool, get_IsStatePerforming, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A84FD0, bool, get_IsSwimming, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A84FF0, float, get_WaterSurfacePositionY, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A85020, app::Rect, get_WaterSurfaceBound, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A85120, void, OnSetReferenceToSein, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A85200, bool, get_IsUnderwater, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A85220, bool, get_IsDashExiting, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A85230, bool, get_IsSwimmingPostDash, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A85260, bool, get_IsSwimmingPostSurfaceDash, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A85280, bool, get_IsSurfaceSwimming, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00706210, bool, get_IsSwimmingUnderwater, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A852A0, void, SetShouldStartDashing, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A852B0, bool, get_SpriteMirrorLock, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A852C0, void, set_SpriteMirrorLock, app::SeinSwimming* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00A85380, void, HideBreathingUI, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A85410, void, ShowBreathingUI, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A854A0, void, OnAwake, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A85670, void, RestoreBreath, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00A85680,
        void,
        HandleDamageAnimationAndKickback,
        app::SeinSwimming* this_ptr,
        app::Damage* damage,
        bool kickback_enabled,
        float* hurt_timeremaining,
        app::ActiveAnimationHandle* active_animation,
        app::SeinDamageReceiverPuppet* puppet
    )
    IL2CPP_REGISTER_METHOD(0x00A85C00, float, get_WaterDamage, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A85E70, void, UpdateWaterDyingConditions, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A86170, void, UpdateDashParticleEffects, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A86EF0, bool, NeedsBreath, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A87020, void, SetCurvatureParameter, app::SeinSwimming* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x00A87090, void, UpdateSwimAngleAnimationParameter, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A87190, void, UpdateTimeInsideWater, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A872A0, void, UpdateDistanceSwam, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A87550, void, TryFlushDistanceSwam, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A87650, void, UpdateBreathingUI, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A87700, void, UpadateInsideWaterCurrent, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A87B10, void, UpdateDrowning, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A88100, void, UpdateImpureWater, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A88440, void, UpdateDamagingWater, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A88560, void, UpdateDamagingWaterPoisonCloud, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A88850, void, Start, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A890A0, void, OnDestroy, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A89AE0, void, Serialize, app::SeinSwimming* this_ptr, app::Archive* ar)
    IL2CPP_REGISTER_METHOD(0x00A89C20, void, OnRestoreCheckpoint, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A89C50, void, DestroySwimDashEffect, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00A89D40,
        void,
        ModifyHorizontalPlatformMovementSettings,
        app::SeinSwimming* this_ptr,
        app::HorizontalPlatformMovementSettings* settings
    )
    IL2CPP_REGISTER_METHOD(0x00A89E50, void, ModifyGravityPlatformMovementSettings, app::SeinSwimming* this_ptr, app::GravityPlatformMovementSettings* settings)
    IL2CPP_REGISTER_METHOD(0x00A89EB0, void, OnEnter, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A89FE0, void, OnExit, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A8A010, void, UpdateCharacterState, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A8A4B0, void, CacheFacing, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A8A520, void, ChangeState, app::SeinSwimming* this_ptr, app::SeinSwimming_State__Enum state)
    IL2CPP_REGISTER_METHOD(0x00A8A8E0, void, UpdateSoundUnderWaterState, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A8AAE0, void, GetOutOfWater, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, InstantiateWaterSplashEffect, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A8AE40, void, SwimUnderwater, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A8B6D0, float, WrapAngle, app::SeinSwimming* this_ptr, float angle)
    IL2CPP_REGISTER_METHOD(0x00A8B7E0, app::WaterZone*, ComputeCurrentWaterZone, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A8B9B0, void, HandleEnteringWater, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A8BF30, void, UpdateOutOfWaterState, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A8C180, void, DealDamage, app::SeinSwimming* this_ptr, app::WaterZone* water_zone)
    IL2CPP_REGISTER_METHOD(0x00A8C4F0, void, SwimOnSurface, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006EF310, void, OnDisable, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A8CC10, void, UpdateSwimmingOnSurfaceState, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A8DBC0, void, HorizontalFlip, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A8DE40, void, VerticalFlip, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A8E0B0, void, HorizontalVerticalFlip, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A8E2F0, void, OnBashBegin, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A8E540, void, OnBashPerformed, app::SeinSwimming* this_ptr, app::Vector2 vel)
    IL2CPP_REGISTER_METHOD(0x00A8E590, void, OnBash, app::SeinSwimming* this_ptr, float angle)
    IL2CPP_REGISTER_METHOD(0x00A8E650, void, StartDashing, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A8E8C0, void, EndDash, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A8E8D0, void, OnEnterSwimMovingUnderwater, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitSwimMovingUnderwater, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A8EC70, void, OnEnterSwimmingOnSurface, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitSwimmingOnSurface, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnterSwimIdleUnderwater, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitSwimIdleUnderwater, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A8EF80, void, OnEnterOutOfWater, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitOutOfWater, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A8EFE0, void, OnEnterDashing, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A8F3A0, void, OnExitDashing, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A8F3C0, void, OnMoonControllerCollision, app::SeinSwimming* this_ptr, app::MoonControllerColliderHit hit)
    IL2CPP_REGISTER_METHOD(0x00A8FF00, void, WallImpact, app::SeinSwimming* this_ptr, app::Vector3 impact_point, app::Vector3 normal)
    IL2CPP_REGISTER_METHOD(0x00A904B0, void, SurfaceWallImpact, app::SeinSwimming* this_ptr, app::Vector3 impact_point, app::Vector3 normal)
    IL2CPP_REGISTER_METHOD(0x00A90A60, void, UpdateDashingState, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A91550, void, ClearDashDamage, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A916A0, void, UpdateDashDamage, app::SeinSwimming* this_ptr, app::Vector3 direction)
    IL2CPP_REGISTER_METHOD(0x00A92000, void, OnEnterDashingOutOfWater, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A92CB0, float, GetWaterCurrentForceMultiplier, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A92DE0, void, OnRootMotionForWallImpact, app::SeinSwimming* this_ptr, app::Vector3 root)
    IL2CPP_REGISTER_METHOD(0x00A92EE0, void, OnWallImpactAnimationEnded, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A930A0, void, OnRootMotionForExitSand, app::SeinSwimming* this_ptr, app::Vector3 root)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitDashingOutOfWater, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A93220, void, OnDrillZoneReleaseEvent, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A93260, void, UpdateDashingOutOfWaterState, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A935F0, void, PushAngleToCharacter, app::SeinSwimming* this_ptr, app::Vector3 direction)
    IL2CPP_REGISTER_METHOD(0x00A93700, void, PlaySound_1, app::SeinSwimming* this_ptr, app::SoundProvider* provider)
    IL2CPP_REGISTER_METHOD(0x00A938A0, void, PlaySound_2, app::SeinSwimming* this_ptr, app::Event_1* sound_event)
    IL2CPP_REGISTER_METHOD(0x00A93A20, void, UpdateSwimMovingUnderwaterState, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A95090, void, UpdateSwimIdleUnderwaterState, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A95A10, bool, HandleLeavingWater, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A96060, void, StopBoosting, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A96080, void, OnEnterWallImpact, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A96690, void, OnExitWallImpact, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A968E0, void, UpdateWallImpactState, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A96CB0, void, OnWallImpactCancellationWindowStarted, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A96DE0, void, OnWallImpactCancellationWindowEnded, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A96DF0, void, OnWallImpactTimelineEnded, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A97020, void, OnEnterSurfaceWallImpact, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A97630, void, OnExitSurfaceWallImpact, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A97880, void, UpdateSurfaceWallImpactState, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A97C40, void, OnSurfaceWallImpactCancellationWindowStarted, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A97C50, void, OnSurfaceWallImpactCancellationWindowEnded, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A97C60, void, OnSurfaceWallImpactTimelineEnded, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A97C70, void, OnRootMotionForSurfaceWallImpact, app::SeinSwimming* this_ptr, app::Vector3 root)
    IL2CPP_REGISTER_METHOD(0x00A97D70, void, OnEnterSurfaceDash, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A98460, void, OnExitSurfaceDash, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A984D0, void, UpdateSurfaceDashState, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006FBDD0, bool, IsHittingWall, app::SeinSwimming* this_ptr, int32_t dash_direction)
    IL2CPP_REGISTER_METHOD(0x00A98FB0, void, OnEnterDashIntoWater, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitDashIntoWater, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A99360, void, UpdateDashIntoWaterState, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A9A170, void, OnSurfaceDashStartAnimationEnded, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSurfaceDashEndAnimationEnded, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A9A380, bool, CanJump, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00A9A3A0,
        app::Vector2,
        ComputeIntersectionWithWaterSurface,
        app::SeinSwimming* this_ptr,
        app::Vector3 p0,
        app::Vector3 p1,
        app::WaterZone* zone
    )
    IL2CPP_REGISTER_METHOD(0x00A9A590, void, SurfaceSwimJump, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A9A990, float, ComputeDashIntoWaterMaxDistance, app::SeinSwimming* this_ptr, app::Vector2 input_axis)
    IL2CPP_REGISTER_METHOD(0x00706210, bool, ShouldSwimUnderwaterAnimationPlay, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A9AA40, bool, ShouldIdleUnderwaterAnimationPlay, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A9AA50, bool, ShouldSwimSurfaceAnimationPlay, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A9AA60, bool, ShouldJumpOutOfWaterAnimationIdleKeepPlaying, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A9AC10, bool, ShouldJumpOutOfWaterAnimationMovingKeepPlaying, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A9ADC0, bool, CanGlow, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A9ADE0, void, OnQuickGlowStarted, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A9AF50, void, SetShouldStartDigDashing, app::SeinSwimming* this_ptr, app::DigZone* zone, app::Vector3 adjusted_dig_direction)
    IL2CPP_REGISTER_METHOD(0x00A9B2E0, void, OnEnterDigging, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitDigging, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A9B2F0, void, UpdateDiggingState, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A9B300, void, OnDigGotOutoOfZone, app::SeinSwimming* this_ptr, bool should_dash)
    IL2CPP_REGISTER_METHOD(0x00A9B420, void, OnEnterDrowning, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A9B500, void, OnExitDrowning, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A9B580, void, UpdateDrowningState, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnterBashing, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitBashing, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A9BCF0, void, UpdateBashingState, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A9BDD0, void, OnDrawGizmosSelected, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A9BE70, void, ctor, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A9C400, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x00A84C50, bool, _StartDashing_b__300_0, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A9C480, app::EffectSpawn, _UpdateDashDamage_b__317_0, app::SeinSwimming* this_ptr, app::DamageResult result)
    IL2CPP_REGISTER_METHOD(0x0070CE70, bool, _OnEnterDashingOutOfWater_b__318_0, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A84C60, bool, _OnEnterSurfaceDash_b__346_0, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A84C70, bool, _OnEnterDashIntoWater_b__350_0, app::SeinSwimming* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A84C60, bool, _OnSurfaceDashStartAnimationEnded_b__353_0, app::SeinSwimming* this_ptr)
} // namespace app::classes::SeinSwimming
