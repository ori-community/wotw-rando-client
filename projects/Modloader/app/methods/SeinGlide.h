#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SeinGlide.h>
#include <Modloader/app/structs/CharacterGravity.h>
#include <Modloader/app/structs/CharacterLeftRightMovement.h>
#include <Modloader/app/structs/PlatformMovement.h>
#include <Modloader/app/structs/GravityPlatformMovementSettings.h>
#include <Modloader/app/structs/HorizontalPlatformMovementSettings.h>
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/SeinGlidePuppet.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/SeinGlide_State__Enum.h>

namespace app::classes::SeinGlide {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (app::SeinGlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006E4240, app::CharacterGravity*, get_CharacterGravity, (app::SeinGlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D06F0, app::CharacterLeftRightMovement*, get_CharacterLeftRightMovement, (app::SeinGlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D06C0, app::PlatformMovement*, get_PlatformMovement, (app::SeinGlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AE26A0, void, Start, (app::SeinGlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AE2DF0, void, OnDestroy, (app::SeinGlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AE3450, void, OnExit, (app::SeinGlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AE3480, void, ModifyGravityPlatformMovementSettings, (app::SeinGlide * this_ptr, app::GravityPlatformMovementSettings* settings))
    IL2CPP_REGISTER_METHODINFO(0x0472FE70, SeinGlide_ModifyGravityPlatformMovementSettings__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00AE3510, void, ModifyHorizontalPlatformMovementSettings, (app::SeinGlide * this_ptr, app::HorizontalPlatformMovementSettings* settings))
    IL2CPP_REGISTER_METHODINFO(0x0474BD90, SeinGlide_ModifyHorizontalPlatformMovementSettings__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00AE3580, app::MoonAnimator*, get_Leaf, (app::SeinGlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AE3610, bool, get_IsStatePerforming, (app::SeinGlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AE3620, bool, get_IsGliding, (app::SeinGlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AE3630, void, UpdateCharacterState, (app::SeinGlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, EnterIdle, (app::SeinGlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ExitIdle, (app::SeinGlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AE3870, void, UpdateIdle, (app::SeinGlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AE38C0, void, CancelGlide, (app::SeinGlide * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047669E8, SeinGlide_CancelGlide__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00AE3B50, void, EnterGlide, (app::SeinGlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AE40B0, void, ExitGlide, (app::SeinGlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AE43E0, void, UpdateGlide, (app::SeinGlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AE47F0, void, UpdateGlideLockTime, (app::SeinGlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AE4910, void, UpdateNeedsRightTriggerReleased, (app::SeinGlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AE3450, void, Stop, (app::SeinGlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AE49E0, bool, get_InWindZone, (app::SeinGlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AE4BD0, bool, get_IsDoubleJumping, (app::SeinGlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AE4D10, bool, get_PreventedByDoubleJump, (app::SeinGlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AE4E60, bool, get_CanGlide, (app::SeinGlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AE5230, bool, get_WantsToGlide, (app::SeinGlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AE5310, void, LockGliding, (app::SeinGlide * this_ptr, float time))
    IL2CPP_REGISTER_METHOD(0x00AE5320, void, OnLeafDeployed, (app::SeinGlide * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04790F48, SeinGlide_OnLeafDeployed__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDrawGizmos, (app::SeinGlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AE5330, void, UpdateAnimations, (app::SeinGlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AE5860, void, HandleFloatZones, (app::SeinGlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005E8360, float, get_GlideOpeningTime, (app::SeinGlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AE3620, bool, get_ShouldGlideAnimationPlay, (app::SeinGlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AE3620, bool, ShouldGlideAnimationKeepPlaying, (app::SeinGlide * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04726650, SeinGlide_ShouldGlideAnimationKeepPlaying__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00AE5CD0, bool, ShouldGlideDeploymentAnimationKeepPlaying, (app::SeinGlide * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04731780, SeinGlide_ShouldGlideDeploymentAnimationKeepPlaying__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00AE5CF0, app::SeinGlidePuppet*, get_Puppet, (app::SeinGlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AE5DB0, void, OnSetReferenceToSein, (app::SeinGlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AE5E80, void, OnProcessRootMotion, (app::SeinGlide * this_ptr, app::Vector3 motion))
    IL2CPP_REGISTER_METHOD(0x00AE5F20, void, OnQuickGlowStarted, (app::SeinGlide * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04739428, SeinGlide_OnQuickGlowStarted__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00AE5F20, void, OnPreChargeJumpAim, (app::SeinGlide * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04745A00, SeinGlide_OnPreChargeJumpAim__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00AE5F60, void, ChangeState, (app::SeinGlide * this_ptr, app::SeinGlide_State__Enum new_state))
    IL2CPP_REGISTER_METHOD(0x00AE5FB0, void, UpdateState, (app::SeinGlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AE6010, bool, get_HasStartedTurning, (app::SeinGlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AE6040, bool, get_HasFinishedTurning, (app::SeinGlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AE6060, bool, get_WantsToFaceLeft, (app::SeinGlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AE6070, void, set_WantsToFaceLeft, (app::SeinGlide * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00AE6080, bool, get_ShouldInterruptTurning, (app::SeinGlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AE6090, bool, get_IsCancellable, (app::SeinGlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AE60B0, void, InterruptTurning, (app::SeinGlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AE60D0, void, Turn, (app::SeinGlide * this_ptr, bool face_left))
    IL2CPP_REGISTER_METHOD(0x00AE6150, void, ctor, (app::SeinGlide * this_ptr))
} // namespace app::classes::SeinGlide
