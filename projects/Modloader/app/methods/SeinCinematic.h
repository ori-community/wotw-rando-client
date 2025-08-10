#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_Boolean_.h>
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/GravityPlatformMovementSettings.h>
#include <Modloader/app/structs/HorizontalPlatformMovementSettings.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/SeinCinematic.h>
#include <Modloader/app/structs/SeinCinematic_MoveOriToPositionMode__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SeinCinematic {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, app::SeinCinematic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A578F0, bool, get_IsStatePerforming, app::SeinCinematic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsAllowedNonZeroZPosition, app::SeinCinematic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005DA240, bool, get_IsMovingOri, app::SeinCinematic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A57930, float, get_MoveRate, app::SeinCinematic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A57950, float, get_MoveAnimationBlendParameter, app::SeinCinematic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A57970, bool, get_IsUsingCurve, app::SeinCinematic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A579A0, void, OnEnter, app::SeinCinematic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A57C70, void, OnExit, app::SeinCinematic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A57F30, void, UpdateCharacterState, app::SeinCinematic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A58170, void, UpdatePositionBasedOnCurves, app::SeinCinematic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A586F0, app::Vector3, CurveVector, app::SeinCinematic* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00A58850,
        app::ActiveAnimationHandle,
        PerformAnimation_1,
        app::SeinCinematic* this_ptr,
        app::MoonAnimation* animation,
        bool disable_collider,
        bool use_perspective_rotation,
        float disable_collider_duration_offset,
        bool dismount,
        app::EventTriggerAnimator* mount_trigger
    )
    IL2CPP_REGISTER_METHOD(0x00A59200, void, RemountKuCallback, app::SeinCinematic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A593B0, void, ForceMount, app::SeinCinematic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A594C0, void, Remount, app::SeinCinematic* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00A59630,
        app::ActiveAnimationHandle,
        PerformAnimation_2,
        app::SeinCinematic* this_ptr,
        app::MoonAnimation* animation,
        app::Vector3 initial_position,
        app::AnimationCurve* curve_x,
        app::AnimationCurve* curve_y,
        app::AnimationCurve* curve_z,
        float interpolation_duration,
        bool disable_collider,
        bool use_perspective_adjustment,
        float disable_collider_duration_offset,
        bool dismount,
        app::EventTriggerAnimator* mount_trigger
    )
    IL2CPP_REGISTER_METHOD(0x00A598C0, void, ScheduleInitialPositionOffsetUpdate, app::SeinCinematic* this_ptr, app::Vector3 initial_position)
    IL2CPP_REGISTER_METHOD(0x00A598E0, void, ResetPerspectiveAdjustment, app::SeinCinematic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A59AC0, void, OnAnimationEnd, app::SeinCinematic* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00A59C70,
        void,
        MoveOriTo,
        app::SeinCinematic* this_ptr,
        app::Vector2 position,
        app::SeinCinematic_MoveOriToPositionMode__Enum move_mode,
        bool face_left_on_finish,
        float max_time,
        app::Action_1_Boolean_* on_arrive_at_point
    )
    IL2CPP_REGISTER_METHOD(0x00A59EE0, void, MoveOriToPositionUpdate, app::SeinCinematic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A5A430, void, FinishMovingOri, app::SeinCinematic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A5A5D0, void, Stop, app::SeinCinematic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A5A630, void, Cancel, app::SeinCinematic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A5A830, void, OnSetReferenceToSein, app::SeinCinematic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A5AAA0, void, OnDestroy, app::SeinCinematic* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00A5AC60,
        void,
        OnModifyHorizontalPlatformMovementSettings,
        app::SeinCinematic* this_ptr,
        app::HorizontalPlatformMovementSettings* settings
    )
    IL2CPP_REGISTER_METHOD(
        0x00A5ACC0,
        void,
        ModifyGravityPlatformMovementSettingsEvent,
        app::SeinCinematic* this_ptr,
        app::GravityPlatformMovementSettings* settings
    )
    IL2CPP_REGISTER_METHOD(0x00A5AD00, void, OnRootMotionProcess, app::SeinCinematic* this_ptr, app::Vector3 root_speed)
    IL2CPP_REGISTER_METHOD(0x005C9550, void, ctor, app::SeinCinematic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A5AE80, void, cctor, )
} // namespace app::classes::SeinCinematic
