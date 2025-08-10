#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/ButtonInputType__Enum.h>
#include <Modloader/app/structs/CharacterPlatformMovement.h>
#include <Modloader/app/structs/ComboInput.h>
#include <Modloader/app/structs/ComboMoveType__Enum.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/DigZone.h>
#include <Modloader/app/structs/GravityPlatformMovementSettings.h>
#include <Modloader/app/structs/HorizontalPlatformMovementSettings.h>
#include <Modloader/app/structs/IComboMove.h>
#include <Modloader/app/structs/List_1_DigZone_.h>
#include <Modloader/app/structs/List_1_Moon_ComboSystem_IComboMove_.h>
#include <Modloader/app/structs/List_1_UnityEngine_MonoBehaviour_.h>
#include <Modloader/app/structs/List_1_WaterZone_.h>
#include <Modloader/app/structs/MonoBehaviour.h>
#include <Modloader/app/structs/MoonControllerColliderHit.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SeinController3D_EventId__Enum.h>
#include <Modloader/app/structs/SeinDashNew.h>
#include <Modloader/app/structs/SeinDashNewPuppet.h>
#include <Modloader/app/structs/SeinDashNew_PreDashDelegateType.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SeinDashNew {
    IL2CPP_REGISTER_METHOD(0x00417920, app::ComboMoveType__Enum, get_ComboMoveType, app::SeinDashNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, app::SeinDashNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0068B8C0, bool, get_IsStatePerforming, app::SeinDashNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0061E2F0, bool, get_WasGroundedSinceLastExecution, app::SeinDashNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0061E2E0, void, set_WasGroundedSinceLastExecution, app::SeinDashNew* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x006F4090, bool, get_IsEnding, app::SeinDashNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006F40A0, void, set_IsEnding, app::SeinDashNew* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::ButtonInputType__Enum, get_ButtonInputType, app::SeinDashNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006F40B0, void, ResetDash, app::SeinDashNew* this_ptr, bool reset_cooldown)
    IL2CPP_REGISTER_METHOD(0x006F40D0, app::CharacterPlatformMovement*, get_PlatformMovement, app::SeinDashNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006F40F0, bool, get_CanDash, app::SeinDashNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006F42E0, bool, get_WantsDash, app::SeinDashNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006F43A0, bool, get_IsDashingTowardsEnenemy, app::SeinDashNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006F43C0, void, add_PreDashDelegate, app::SeinDashNew* this_ptr, app::SeinDashNew_PreDashDelegateType* value)
    IL2CPP_REGISTER_METHOD(0x006F44B0, void, remove_PreDashDelegate, app::SeinDashNew* this_ptr, app::SeinDashNew_PreDashDelegateType* value)
    IL2CPP_REGISTER_METHOD(0x006F45A0, float, get_CoolDown, app::SeinDashNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006F45B0, void, set_CoolDown, app::SeinDashNew* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x006F45A0, float, get_ProviderCooldown, app::SeinDashNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006F45C0, float, get_ProviderCooldownTimer, app::SeinDashNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006F45D0, void, set_ProviderCooldownTimer, app::SeinDashNew* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x006F45E0, app::List_1_DigZone_*, get_NearbyDigZones, app::SeinDashNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006F4860, app::List_1_WaterZone_*, get_NearbyWaterZones, app::SeinDashNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006F4B10, app::DigZone*, FindClosestDiggableBody, app::SeinDashNew* this_ptr, float prediction_time)
    IL2CPP_REGISTER_METHOD(0x006F4D70, app::MonoBehaviour*, FindClosestBody, app::SeinDashNew* this_ptr, app::List_1_UnityEngine_MonoBehaviour_* zones)
    IL2CPP_REGISTER_METHOD(0x006F5240, bool, get_IsDashing, app::SeinDashNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006F5260, bool, get_IsDashingOnGround, app::SeinDashNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006F5350, app::SeinDashNewPuppet*, get_Puppet, app::SeinDashNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006F5410, void, OnSetReferenceToSein, app::SeinDashNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006F5950, void, Start, app::SeinDashNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006F5C50, void, OnGrabSurface, app::SeinDashNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006F5C60, void, OnAwake, app::SeinDashNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006F5D90, void, OnDestroy, app::SeinDashNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006F64C0, void, OnTakeDamage, app::SeinDashNew* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x006F64C0, void, InterruptDash, app::SeinDashNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006F64E0, void, UpdateCharacterState, app::SeinDashNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006F6D40, bool, IsEndTimeline, app::SeinDashNew* this_ptr, app::MoonTimeline* timeline)
    IL2CPP_REGISTER_METHOD(0x006F6F20, bool, IsStartTimeline, app::SeinDashNew* this_ptr, app::MoonTimeline* timeline)
    IL2CPP_REGISTER_METHOD(0x006F7100, void, ShowDashEntryPoint, app::SeinDashNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006F74D0, void, HideDashEntryPoint, app::SeinDashNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006F7640, bool, get_ShouldDigCached, app::SeinDashNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006F7650, void, set_ShouldDigCached, app::SeinDashNew* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x006F76B0, bool, ShouldDig, app::SeinDashNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006F7C40, bool, ShouldSwim, app::SeinDashNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006F7FE0, bool, CanDigInDirection, app::SeinDashNew* this_ptr, app::Vector3 direction)
    IL2CPP_REGISTER_METHOD(0x006F84A0, bool, CanSwimInDirection, app::SeinDashNew* this_ptr, app::Vector3 direction)
    IL2CPP_REGISTER_METHOD(0x006F88D0, bool, FoundDiggableBody, app::SeinDashNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006F8E80, void, FixedUpdate, app::SeinDashNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006F8F40, void, UpdateAllowDashFlag, app::SeinDashNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006F9450, void, TryPerformDash_1, app::SeinDashNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006F94A0, void, TryPerformDash_2, app::SeinDashNew* this_ptr, int32_t dash_direction, bool is_forward_dash)
    IL2CPP_REGISTER_METHOD(0x006F9D00, void, PerformEndDash, app::SeinDashNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006FA0D0, void, UpdateDash, app::SeinDashNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006FA4B0, void, StopDash, app::SeinDashNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006FA780, void, ComputeDashDirectionAndType, app::SeinDashNew* this_ptr, int32_t* dash_direction, bool* is_forward_dash)
    IL2CPP_REGISTER_METHOD(0x006FAB20, void, EnterMove, app::SeinDashNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006FAE90, void, SetShouldStartDigDashing, app::SeinDashNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006FB050, void, SetShouldStartWaterDashing, app::SeinDashNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateMove, app::SeinDashNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006F5C50, void, ExitMove, app::SeinDashNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006F5C50, void, InterruptMove, app::SeinDashNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006FB0A0, bool, get_MoveHasFinished, app::SeinDashNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006FB0B0, bool, get_IsAttackButtonDown, app::SeinDashNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006FB1F0, bool, get_OnAttackButtonPressed, app::SeinDashNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006FB340, bool, get_OnAttackButtonReleased, app::SeinDashNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006FB480, float, get_MoveCooldown, app::SeinDashNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006FB490, void, set_MoveCooldown, app::SeinDashNew* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x006FB4A0, float, get_MoveCooldownTimer, app::SeinDashNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006FB4B0, void, set_MoveCooldownTimer, app::SeinDashNew* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x006FB4C0, bool, CanExecute, app::SeinDashNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006FB4D0, bool, CanBeInterruptedBy, app::SeinDashNew* this_ptr, app::IComboMove* move)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAnimationEvent, app::SeinDashNew* this_ptr, app::SeinController3D_EventId__Enum event_id)
    IL2CPP_REGISTER_METHOD(0x006FB590, void, ModifyGravityPlatformMovementSettings, app::SeinDashNew* this_ptr, app::GravityPlatformMovementSettings* settings)
    IL2CPP_REGISTER_METHOD(0x006FB7D0, app::IComboMove*, GetComboMove, app::SeinDashNew* this_ptr, app::ComboInput* input)
    IL2CPP_REGISTER_METHOD(0x006FB810, app::List_1_Moon_ComboSystem_IComboMove_*, get_ComboMoves, app::SeinDashNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006FB820, void, set_ComboMoves, app::SeinDashNew* this_ptr, app::List_1_Moon_ComboSystem_IComboMove_* value)
    IL2CPP_REGISTER_METHOD(0x006FB830, app::AbilityType__Enum, get_ComboAbilityType, app::SeinDashNew* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x006FB840,
        void,
        ModifyHorizontalPlatformMovementSettings,
        app::SeinDashNew* this_ptr,
        app::HorizontalPlatformMovementSettings* settings
    )
    IL2CPP_REGISTER_METHOD(0x006FB9F0, void, OnStartTimelineStoppedPlaying, app::SeinDashNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006FBAF0, void, OnEndTimelineStoppedPlaying, app::SeinDashNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006FBBD0, void, OnProcessRootMotion, app::SeinDashNew* this_ptr, app::Vector3 root_velocity)
    IL2CPP_REGISTER_METHOD(0x006FBDD0, bool, IsHittingWall, app::SeinDashNew* this_ptr, int32_t dash_direction)
    IL2CPP_REGISTER_METHOD(0x006FBEB0, float, GetRootMotionScale, app::SeinDashNew* this_ptr, float root_motion_distance)
    IL2CPP_REGISTER_METHOD(0x006FC500, void, OnResetAirLimits, app::SeinDashNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006FC520, void, OnMoonControllerCollision, app::SeinDashNew* this_ptr, app::MoonControllerColliderHit hit)
    IL2CPP_REGISTER_METHOD(0x006FC700, void, ctor, app::SeinDashNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006FCDB0, void, cctor, )
} // namespace app::classes::SeinDashNew
