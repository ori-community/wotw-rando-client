#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CharacterPlatformMovement.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/Func_1_Boolean_.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GravityPlatformMovementSettings.h>
#include <Modloader/app/structs/HorizontalPlatformMovementSettings.h>
#include <Modloader/app/structs/IGrabbableRope.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/SeinGrabRope.h>
#include <Modloader/app/structs/SeinGrabRopePuppet.h>
#include <Modloader/app/structs/SeinGrabRope_State__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SeinGrabRope {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, app::SeinGrabRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014B25B0, bool, get_IsStatePerforming, app::SeinGrabRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014B25B0, bool, get_IsGrabbing, app::SeinGrabRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014B25C0, bool, get_IsSlipLocked, app::SeinGrabRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014B2680, bool, IsGrabbingRope, app::SeinGrabRope* this_ptr, app::IGrabbableRope* rope)
    IL2CPP_REGISTER_METHOD(0x005D06C0, app::CharacterPlatformMovement*, get_PlatformMovement, app::SeinGrabRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014B26A0, app::Vector3, get_SeinSpeed, app::SeinGrabRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014B28A0, float, get_SlipperySpeed, app::SeinGrabRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014B2920, bool, get_m_isFlipped, app::SeinGrabRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014B2930, void, set_m_isFlipped, app::SeinGrabRope* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x014B2940, app::SeinGrabRopePuppet*, get_Puppet, app::SeinGrabRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014B2A00, void, OnDestroy, app::SeinGrabRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014B2F50, void, ModifyGravityPlatformMovementSettings, app::SeinGrabRope* this_ptr, app::GravityPlatformMovementSettings* settings)
    IL2CPP_REGISTER_METHOD(
        0x014B2F80,
        void,
        ModifyHorizontalPlatformMovementSettings,
        app::SeinGrabRope* this_ptr,
        app::HorizontalPlatformMovementSettings* settings
    )
    IL2CPP_REGISTER_METHOD(0x014B2FB0, void, OnExit, app::SeinGrabRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014B2FD0, void, ChangeState, app::SeinGrabRope* this_ptr, app::SeinGrabRope_State__Enum state)
    IL2CPP_REGISTER_METHOD(0x014B3780, float, get_GameTime, app::SeinGrabRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014B3830, void, UpdateCharacterState, app::SeinGrabRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014B3BB0, void, UpdateNormalState, app::SeinGrabRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014B3EF0, bool, CanGrabRope, app::SeinGrabRope* this_ptr, app::IGrabbableRope* rope, app::Vector2 character_movement_dir)
    IL2CPP_REGISTER_METHOD(0x014B4310, void, AttachToRope, app::SeinGrabRope* this_ptr, app::IGrabbableRope* rope)
    IL2CPP_REGISTER_METHOD(0x014B53E0, void, ForceReleaseRope, app::SeinGrabRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014B53F0, void, ReleaseRope, app::SeinGrabRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014B56D0, bool, IsInHandStandZone, app::SeinGrabRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014B57C0, bool, IsInDangleZone, app::SeinGrabRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014B5940, void, PerformSwingJump, app::SeinGrabRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014B5A30, void, UpdateSwingState, app::SeinGrabRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014B6690, float, SwingLoopSoundGetRtpcValue, app::SeinGrabRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014B66F0, bool, ShouldSwingAnimationKeepPlaying, app::SeinGrabRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014B25B0, bool, ShouldAnimationKeepPlaying, app::SeinGrabRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014B6710, bool, ShouldAnimationKeepPlayingIfSlippery, app::SeinGrabRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014B67D0, void, UpdateHorizontalState, app::SeinGrabRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014B7500, void, UpdateHorizontalSlopeParameter, app::SeinGrabRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014B7650, void, UpdateVerticalState, app::SeinGrabRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014B90F0, bool, CanDash, app::SeinGrabRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014B9220, bool, IsFirstFrameAfterSwitchingSidesOrDash, app::SeinGrabRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014B9250, bool, IsFirstFrameAfterGrabingPole, app::SeinGrabRope* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x014B9270,
        void,
        EnterSwitchingSideVertical,
        app::SeinGrabRope* this_ptr,
        app::MoonAnimation* animation,
        app::Func_1_Boolean_* condition
    )
    IL2CPP_REGISTER_METHOD(0x014B9570, void, UpdateSwitchingSideVertical, app::SeinGrabRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014B96F0, void, UpdateDashToVertical, app::SeinGrabRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014B98B0, void, OnSwitchSideAnimationStopped, app::SeinGrabRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014B9BB0, bool, IsLeft, app::SeinGrabRope* this_ptr, app::Vector2 a, app::Vector2 b, app::Vector2 c)
    IL2CPP_REGISTER_METHOD(0x014B9C10, void, UpdateStickToRope_1, app::SeinGrabRope* this_ptr, bool update_handstand_and_dangle_positions)
    IL2CPP_REGISTER_METHOD(
        0x014B9C50,
        void,
        UpdateStickToRope_2,
        app::SeinGrabRope* this_ptr,
        bool update_handstand_and_dangle_positions,
        bool* in_hand_stand_zone,
        bool* in_dangle_zone,
        bool* stop_at_the_top
    )
    IL2CPP_REGISTER_METHOD(0x014BB240, app::Vector3, GetDanglePoint, app::SeinGrabRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014BB3C0, bool, get_WantsToGrab, app::SeinGrabRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014BB460, void, OnJump, app::SeinGrabRope* this_ptr, float strength)
    IL2CPP_REGISTER_METHOD(0x014BB480, void, OnPreDash, app::SeinGrabRope* this_ptr, bool* allow)
    IL2CPP_REGISTER_METHOD(0x014BB4C0, void, OnSetReferenceToSein, app::SeinGrabRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0043BB80, float, get_SpriteAngle, app::SeinGrabRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014BBBA0, bool, PerformJump, app::SeinGrabRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014BC720, void, PerformHandStandJump, app::SeinGrabRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014BCE90, void, PerformJumpUpPole, app::SeinGrabRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014BD100, void, UpdateJumpingUpPole, app::SeinGrabRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014BD320, void, AddForce, app::SeinGrabRope* this_ptr, app::Vector3 force)
    IL2CPP_REGISTER_METHOD(0x014BD3E0, void, AddImpulse, app::SeinGrabRope* this_ptr, app::Vector3 impulse)
    IL2CPP_REGISTER_METHOD(0x014BD4A0, void, PlaySound, app::SeinGrabRope* this_ptr, app::Event_1* sound)
    IL2CPP_REGISTER_METHOD(0x014BD5B0, void, OnDash, app::SeinGrabRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014BD7F0, void, PlaySoundLoop, app::SeinGrabRope* this_ptr, app::Event_1* sound)
    IL2CPP_REGISTER_METHOD(0x014BD900, void, OnEnable, app::SeinGrabRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014BDAB0, void, OnDisable, app::SeinGrabRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014BDC70, void, OnPreRestoreCheckpoint, app::SeinGrabRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014BDC80, void, SetupRTPCS, app::SeinGrabRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014BDE80, void, StopCurrentLoop, app::SeinGrabRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014BDEF0, void, PlayClimbUpLoopSound, app::SeinGrabRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014BDF10, void, StopClimbUpLoopSound, app::SeinGrabRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014BDF30, void, PlaySlideDownLoopSound, app::SeinGrabRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014BDF50, void, StopSlideDownLoopSound, app::SeinGrabRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014BDF70, void, PlaySwingLoopSound, app::SeinGrabRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014BDFD0, void, StopSwingLoopSound, app::SeinGrabRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014BDFF0, void, SpawnSingleShotEffect, app::SeinGrabRope* this_ptr, app::GameObject* vfx_prefab)
    IL2CPP_REGISTER_METHOD(0x014BE1A0, app::GameObject*, GetDashToVerticalVFXPrefab, app::SeinGrabRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014BE250, app::GameObject*, GetSwitchingSideVerticalVFXPrefab, app::SeinGrabRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014BE300, app::GameObject*, GetJumpingUpPoleVFXPrefab, app::SeinGrabRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014BE3B0, app::GameObject*, GetHandStandJumpVFXPrefab, app::SeinGrabRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014BE460, void, ctor, app::SeinGrabRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014BE600, bool, _UpdateSwingState_b__143_0, app::SeinGrabRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014BE610, void, _UpdateVerticalState_b__150_0, app::SeinGrabRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014BE610, void, _UpdateVerticalState_b__150_1, app::SeinGrabRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005E1300, bool, _PerformHandStandJump_b__174_0, app::SeinGrabRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005E1300, bool, _PerformHandStandJump_b__174_1, app::SeinGrabRope* this_ptr)
} // namespace app::classes::SeinGrabRope
