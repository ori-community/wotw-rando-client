#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Timeline::CinematicCharacterAnimator {
    IL2CPP_REGISTER_METHOD(0x0040CCC0, float, get_CachedMoonAnimationDuration, (app::CinematicCharacterAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0040CCD0, void, set_CachedMoonAnimationDuration, (app::CinematicCharacterAnimator * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x005B0220, app::MoonAnimation *, get_CachedMoonAnimation, (app::CinematicCharacterAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A2A740, void, set_CachedMoonAnimation, (app::CinematicCharacterAnimator * this_ptr, app::MoonAnimation * value))
    IL2CPP_REGISTER_METHOD(0x010CACD0, bool, get_ShouldUseCurves, (app::CinematicCharacterAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010CAE30, bool, ShowLerpToGroundDuration, (app::CinematicCharacterAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010CAE40, bool, ShowForceUsingCurves, (app::CinematicCharacterAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FBE50, bool, ShowDisableColliderDurationOffset, (app::CinematicCharacterAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010CAE50, bool, ShowAllowMountingOffset, (app::CinematicCharacterAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010CAE50, bool, IsOriCharacter, (app::CinematicCharacterAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A9AA50, bool, get_PlaceOnGroundOnStart, (app::CinematicCharacterAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010CAE60, bool, get_PlaceOnGroundOnEnd, (app::CinematicCharacterAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010CAE30, bool, get_LerpToGroundAtEnd, (app::CinematicCharacterAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010CAE70, float, get_Duration, (app::CinematicCharacterAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnValidate, (app::CinematicCharacterAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010CB050, void, OnStartPlayback, (app::CinematicCharacterAnimator * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x010CB160, void, OnStopPlayback, (app::CinematicCharacterAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010CB170, void, OnUpdateEntity, (app::CinematicCharacterAnimator * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x010CB460, void, PlaceOriOnGround, (app::CinematicCharacterAnimator * this_ptr, float t))
    IL2CPP_REGISTER_METHOD(0x010CB9C0, void, PrepareForStart, (app::CinematicCharacterAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010CD2C0, void, PrepareForStop, (app::CinematicCharacterAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010CD6B0, void, UpdateCachedAnimation, (app::CinematicCharacterAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010CD7B0, void, SynchronizeData, (app::CinematicCharacterAnimator * this_ptr, app::MoonTimeline * timeline, app::TimelineEntityRecord * record))
    IL2CPP_REGISTER_METHOD(0x010CD950, void, ctor, (app::CinematicCharacterAnimator * this_ptr))
}
