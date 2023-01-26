#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinWallJump.h>
#include <Modloader/app/structs/Action_1_UnityEngine_Vector2_.h>
#include <Modloader/app/structs/CharacterLeftRightMovement.h>
#include <Modloader/app/structs/CharacterPlatformMovement.h>
#include <Modloader/app/structs/CharacterSpriteMirror.h>
#include <Modloader/app/structs/Func_1_Boolean_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/MoonAnimation__Array.h>
#include <Modloader/app/structs/SeinDoubleJump.h>
#include <Modloader/app/structs/SeinWallJumpPuppet.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::SeinWallJump {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (app::SeinWallJump * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AAB460, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x00805AA0, int32_t, get_GroundMask, ())
    IL2CPP_REGISTER_METHOD(0x005D06C0, app::CharacterPlatformMovement*, get_PlatformMovement, (app::SeinWallJump * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A7EB40, app::SeinDoubleJump*, get_DoubleJump, (app::SeinWallJump * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D06F0, app::CharacterLeftRightMovement*, get_LeftRightMovement, (app::SeinWallJump * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D0720, app::CharacterSpriteMirror*, get_CharacterSpriteMirror, (app::SeinWallJump * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AAB500, app::SeinWallJumpPuppet*, get_Puppet, (app::SeinWallJump * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AAB5C0, bool, get_CanPerformWallJump, (app::SeinWallJump * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AAB770, void, OnSetReferenceToSein, (app::SeinWallJump * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AAB840, void, OnEnter, (app::SeinWallJump * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AAB860, bool, ShouldWallJumpRight, (app::SeinWallJump * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AAB910, bool, ShouldWallJumpLeft, (app::SeinWallJump * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AAB9C0, void, PerformWallJump_1, (app::SeinWallJump * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AABC30, void, PerformWallJumpLeft, (app::SeinWallJump * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AABC40, void, PerformWallJumpRight, (app::SeinWallJump * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AABC50, void, OnDash, (app::SeinWallJump * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AABD00, void, StopNoDecelerationCoroutine, (app::SeinWallJump * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AABD70, void, StartNoDecelerationCoroutine, (app::SeinWallJump * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AABF30, void, PerformWallJump_2, (app::SeinWallJump * this_ptr, bool to_left))
    IL2CPP_REGISTER_METHOD(0x00AADB40, float, GetJumpAwayGenericTime0, (app::SeinWallJump * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AADB90, float, GetJumpAwayGenericTime1, (app::SeinWallJump * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AADBE0, void, PerformJumpAway0FlipTransition, (app::SeinWallJump * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AADC70, void, PerformJumpAway1FlipTransition, (app::SeinWallJump * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AADD00, void, PerformJumpFlipTransition, (app::SeinWallJump * this_ptr, app::MoonAnimation__Array* flip_early_anims, int32_t jump_index, float early_flip_time))
    IL2CPP_REGISTER_METHOD(0x00AADF70, bool, IsPlayingFlipAnim, (app::SeinWallJump * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AADF90, app::IEnumerator*, HandleChangeDirectionWhileJumpingInwards, (app::SeinWallJump * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AAE0E0, bool, IsRunningChangeDirectionWhileJumpingCouroutine, (app::SeinWallJump * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AAE0F0, app::IEnumerator*, RoutineToReenableAirDeceleration, (app::SeinWallJump * this_ptr, float delay))
    IL2CPP_REGISTER_METHOD(0x00AAE250, void, OnAnimationEnd, (app::SeinWallJump * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAnimationStart, (app::SeinWallJump * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AAE2B0, void, EnableGenericFlipTransition, (app::SeinWallJump * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AAE310, app::Func_1_Boolean_*, ShouldKeepPlayingWallJumpTowardsAnimation, (app::SeinWallJump * this_ptr, bool to_left))
    IL2CPP_REGISTER_METHOD(0x00AAE530, app::Func_1_Boolean_*, ShouldKeepPlayingWallJumpAwayAnimation, (app::SeinWallJump * this_ptr, bool to_left))
    IL2CPP_REGISTER_METHOD(0x00AAE750, app::Func_1_Boolean_*, ShouldKeepPlayingWallJumpRegularAnimation, (app::SeinWallJump * this_ptr, bool to_left))
    IL2CPP_REGISTER_METHOD(0x00AAE970, bool, get_OnWall, (app::SeinWallJump * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AAEB60, bool, ShouldKeepPlayingWallJumpLeftTowardsAnimation, (app::SeinWallJump * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AAECC0, bool, ShouldKeepPlayingWallJumpLeftAwayAnimation, (app::SeinWallJump * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AAECC0, bool, ShouldKeepPlayingWallJumpLeftRegularAnimation, (app::SeinWallJump * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AAEDB0, void, OnAwake, (app::SeinWallJump * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AAEF50, void, Start, (app::SeinWallJump * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AAF130, void, OnDestroy, (app::SeinWallJump * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AAF430, bool, ShouldKeepPlayingWallJumpRightTowardsAnimation, (app::SeinWallJump * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AAF4F0, bool, ShouldKeepPlayingWallJumpRightAwayAnimation, (app::SeinWallJump * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AAF4F0, bool, ShouldKeepPlayingWallJumpRightRegularAnimation, (app::SeinWallJump * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AAF560, void, ApplyImpulseToWall, (app::SeinWallJump * this_ptr, app::Vector2 speed))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateCharacterState, (app::SeinWallJump * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AAFB70, void, FixedUpdate, (app::SeinWallJump * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AAFCB0, void, ResetInwardsJumpAssist, (app::SeinWallJump * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AAFCC0, void, CancelInwardsJumpAssist, (app::SeinWallJump * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AAFCE0, bool, CanPerformAssistedWallJump, (app::SeinWallJump * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AB0120, void, add_OnWallJumpEvent, (app::SeinWallJump * this_ptr, app::Action_1_UnityEngine_Vector2_* value))
    IL2CPP_REGISTER_METHOD(0x00AB0210, void, remove_OnWallJumpEvent, (app::SeinWallJump * this_ptr, app::Action_1_UnityEngine_Vector2_* value))
    IL2CPP_REGISTER_METHOD(0x00AB0300, void, OnRestoreCheckpoint, (app::SeinWallJump * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AB0310, void, ctor, (app::SeinWallJump * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AB0550, void, cctor, ())
} // namespace app::classes::SeinWallJump
