#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/ButtonInputType__Enum.h>
#include <Modloader/app/structs/ComboMoveType__Enum.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/GravityPlatformMovementSettings.h>
#include <Modloader/app/structs/HorizontalPlatformMovementSettings.h>
#include <Modloader/app/structs/IComboMove.h>
#include <Modloader/app/structs/IComboMove__Array.h>
#include <Modloader/app/structs/KuDash.h>
#include <Modloader/app/structs/KuDashPuppet.h>
#include <Modloader/app/structs/KuDash_PreDashDelegateType.h>
#include <Modloader/app/structs/MoonControllerColliderHit.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::KuDash {
    IL2CPP_REGISTER_METHOD(0x00417920, app::ComboMoveType__Enum, get_ComboMoveType, app::KuDash* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CAE830, bool, get_IsStatePerforming, app::KuDash* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FCE30, bool, get_WasGroundedSinceLastExecution, app::KuDash* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FCE40, void, set_WasGroundedSinceLastExecution, app::KuDash* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x003FF790, bool, get_IsEnding, app::KuDash* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FF7A0, void, set_IsEnding, app::KuDash* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::ButtonInputType__Enum, get_ButtonInputType, app::KuDash* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012304C0, void, ResetDash, app::KuDash* this_ptr, bool reset_cooldown)
    IL2CPP_REGISTER_METHOD(0x012304E0, bool, get_CanDash, app::KuDash* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01230520, bool, get_WantsDash, app::KuDash* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012305E0, bool, get_IsDashingTowardsEnenemy, app::KuDash* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01230600, void, add_PreDashDelegate, app::KuDash* this_ptr, app::KuDash_PreDashDelegateType* value)
    IL2CPP_REGISTER_METHOD(0x012306F0, void, remove_PreDashDelegate, app::KuDash* this_ptr, app::KuDash_PreDashDelegateType* value)
    IL2CPP_REGISTER_METHOD(0x003FDAA0, float, get_CoolDown, app::KuDash* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A47A00, void, set_CoolDown, app::KuDash* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x003FDAA0, float, get_ProviderCooldown, app::KuDash* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012307E0, bool, get_IsDashing, app::KuDash* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01230800, bool, get_IsDashingOnGround, app::KuDash* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0065FBC0, app::KuDashPuppet*, get_Puppet, app::KuDash* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012308F0, void, OnSetReferenceToKu, app::KuDash* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01230DE0, void, Start, app::KuDash* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAwake, app::KuDash* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01230F90, void, OnDestroy, app::KuDash* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01231440, void, OnTakeDamage, app::KuDash* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x01231440, void, InterruptDash, app::KuDash* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01231460, void, UpdateState, app::KuDash* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012316B0, void, FixedUpdate, app::KuDash* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01231770, void, UpdateAllowDashFlag, app::KuDash* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01231980, void, TryPerformDash_1, app::KuDash* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012319D0, void, TryPerformDash_2, app::KuDash* this_ptr, int32_t dash_direction, bool is_forward_dash)
    IL2CPP_REGISTER_METHOD(0x01232070, void, PerformEndDash, app::KuDash* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01232460, void, UpdateDash, app::KuDash* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01232670, void, StopDash, app::KuDash* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012328E0, void, ComputeDashDirectionAndType, app::KuDash* this_ptr, int32_t* dash_direction, bool* is_forward_dash)
    IL2CPP_REGISTER_METHOD(0x01232AB0, void, EnterMove, app::KuDash* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateMove, app::KuDash* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01232BC0, void, ExitMove, app::KuDash* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01232BC0, void, InterruptMove, app::KuDash* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01232BD0, bool, get_MoveHasFinished, app::KuDash* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01232BE0, bool, get_IsAttackButtonDown, app::KuDash* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01232D20, bool, get_OnAttackButtonPressed, app::KuDash* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01232E70, bool, get_OnAttackButtonReleased, app::KuDash* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E30320, float, get_MoveCooldown, app::KuDash* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00510F80, void, set_MoveCooldown, app::KuDash* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x012025B0, float, get_MoveCooldownTimer, app::KuDash* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01232FB0, void, set_MoveCooldownTimer, app::KuDash* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x012304E0, bool, CanExecute, app::KuDash* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01232FC0, bool, CanBeInterruptedBy, app::KuDash* this_ptr, app::IComboMove* move)
    IL2CPP_REGISTER_METHOD(0x01233080, void, ModifyGravityPlatformMovementSettings, app::KuDash* this_ptr, app::GravityPlatformMovementSettings* settings)
    IL2CPP_REGISTER_METHOD(0x00A64220, app::IComboMove__Array*, get_ComboMoves, app::KuDash* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00510100, void, set_ComboMoves, app::KuDash* this_ptr, app::IComboMove__Array* value)
    IL2CPP_REGISTER_METHOD(0x006FB830, app::AbilityType__Enum, get_ComboAbilityType, app::KuDash* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012332B0, void, ModifyHorizontalPlatformMovementSettings, app::KuDash* this_ptr, app::HorizontalPlatformMovementSettings* settings)
    IL2CPP_REGISTER_METHOD(0x01233460, void, OnStartTimelineStoppedPlaying, app::KuDash* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01232BC0, void, OnEndTimelineStoppedPlaying, app::KuDash* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01233540, void, OnProcessRootMotion, app::KuDash* this_ptr, app::Vector3 root_velocity)
    IL2CPP_REGISTER_METHOD(0x01233760, bool, IsHittingWall, app::KuDash* this_ptr, int32_t dash_direction)
    IL2CPP_REGISTER_METHOD(0x01233840, float, GetRootMotionScale, app::KuDash* this_ptr, float root_motion_distance)
    IL2CPP_REGISTER_METHOD(0x01233E90, void, OnResetAirLimits, app::KuDash* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01233EB0, void, OnMoonControllerCollision, app::KuDash* this_ptr, app::MoonControllerColliderHit hit)
    IL2CPP_REGISTER_METHOD(0x01234080, void, ctor, app::KuDash* this_ptr)
} // namespace app::classes::KuDash
