#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_Boolean_.h>
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/CharacterCinematic.h>
#include <Modloader/app/structs/GravityPlatformMovementSettings.h>
#include <Modloader/app/structs/HorizontalPlatformMovementSettings.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::CharacterCinematic {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, app::CharacterCinematic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0104AAC0, bool, get_IsStatePerforming, app::CharacterCinematic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsAllowedNonZeroZPosition, app::CharacterCinematic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0104AAD0, void, OnEnter, app::CharacterCinematic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0104AD70, void, OnExit, app::CharacterCinematic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Serialize, app::CharacterCinematic* this_ptr, app::Archive* ar)
    IL2CPP_REGISTER_METHOD(0x0104B050, bool, get_IsUsingCurve, app::CharacterCinematic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0104B080, void, UpdateCharacterState, app::CharacterCinematic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0104B1D0, void, UpdatePositionBasedOnCurves, app::CharacterCinematic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F8F640, bool, get_IsMovingCharacter, app::CharacterCinematic* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0104B8C0,
        void,
        MoveCharacterTo,
        app::CharacterCinematic* this_ptr,
        app::Vector2 position,
        bool face_left_on_finish,
        float max_time,
        app::Action_1_Boolean_* on_arrive_at_point
    )
    IL2CPP_REGISTER_METHOD(0x0104BB00, void, MoveCharacterToPositionUpdate, app::CharacterCinematic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0104C0A0, void, FinishMovingCharacter, app::CharacterCinematic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0104C3E0, void, Stop, app::CharacterCinematic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0104C4F0, app::Vector3, CurveVector, app::CharacterCinematic* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0104C6E0,
        app::ActiveAnimationHandle,
        PerformAnimation_1,
        app::CharacterCinematic* this_ptr,
        app::MoonAnimation* animation,
        bool disable_collider
    )
    IL2CPP_REGISTER_METHOD(0x0104C8C0, void, OnAnimationEnd, app::CharacterCinematic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0104CB70, void, CleanUp, app::CharacterCinematic* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0104CBC0,
        app::ActiveAnimationHandle,
        PerformAnimation_2,
        app::CharacterCinematic* this_ptr,
        app::MoonAnimation* animation,
        app::Vector3 initial_position,
        app::AnimationCurve* curve_x,
        app::AnimationCurve* curve_y,
        app::AnimationCurve* curve_z,
        float interpolation_duration,
        bool disable_collider
    )
    IL2CPP_REGISTER_METHOD(0x0104CF30, void, OnEnable, app::CharacterCinematic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0104D0D0, void, OnDisable, app::CharacterCinematic* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0104D280,
        void,
        OnModifyHorizontalPlatformMovementSettings,
        app::CharacterCinematic* this_ptr,
        app::HorizontalPlatformMovementSettings* settings
    )
    IL2CPP_REGISTER_METHOD(
        0x00A5ACC0,
        void,
        ModifyGravityPlatformMovementSettingsEvent,
        app::CharacterCinematic* this_ptr,
        app::GravityPlatformMovementSettings* settings
    )
    IL2CPP_REGISTER_METHOD(0x0104D2E0, void, OnRootMotionProcess, app::CharacterCinematic* this_ptr, app::Vector3 root_speed)
    IL2CPP_REGISTER_METHOD(0x0104D410, void, ctor, app::CharacterCinematic* this_ptr)
} // namespace app::classes::CharacterCinematic
