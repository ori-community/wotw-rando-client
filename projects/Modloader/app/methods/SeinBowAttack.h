#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/BowArrow.h>
#include <Modloader/app/structs/ButtonInputType__Enum.h>
#include <Modloader/app/structs/CharacterPlatformMovement.h>
#include <Modloader/app/structs/ComboInput.h>
#include <Modloader/app/structs/ComboMoveType__Enum.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/Func_1_Boolean_.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GravityPlatformMovementSettings.h>
#include <Modloader/app/structs/HorizontalPlatformMovementSettings.h>
#include <Modloader/app/structs/IBowAttackable.h>
#include <Modloader/app/structs/IComboMove.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/Kickback.h>
#include <Modloader/app/structs/List_1_Moon_ComboSystem_IComboMove_.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/MoveEventType__Enum.h>
#include <Modloader/app/structs/ParticleSystem.h>
#include <Modloader/app/structs/RecordableParsingGroup__Enum.h>
#include <Modloader/app/structs/SeinBowAttack.h>
#include <Modloader/app/structs/SeinBowAttack_State__Enum.h>
#include <Modloader/app/structs/SeinBowPuppet.h>
#include <Modloader/app/structs/SeinController3D_EventId__Enum.h>
#include <Modloader/app/structs/StressTestStatus__Enum.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::SeinBowAttack {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D95480, app::SeinBowPuppet*, get_Puppet, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D95540, float, get_NormalShotAimDurationTotal, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D95560, bool, get_IsAiming, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D95570, bool, get_IsAttacking, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D95570, bool, get_IsStatePerforming, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D95580, bool, get_IsCharging, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::ButtonInputType__Enum, get_ButtonInputType, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A791C0, bool, get_MoveHasFinished, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D95590, app::AbilityType__Enum, get_ComboAbilityType, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::ComboMoveType__Enum, get_ComboMoveType, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D955A0, bool, get_OnAttackButtonPressed, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D95660, bool, get_IsAttackButtonDown, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D95710, bool, get_OnAttackButtonReleased, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D957C0, bool, get_IsRiding, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D95820, bool, get_IsRapidEquipped, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D95860, app::IContext*, get_TimelineContext, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D95950, bool, CanExecute, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D95D30, void, EnterMove, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateMove, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D95F60, void, ExitMove, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D95F60, void, InterruptMove, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D95F70, app::IComboMove*, GetComboMove, app::SeinBowAttack* this_ptr, app::ComboInput* input)
    IL2CPP_REGISTER_METHOD(0x00B29C50, app::List_1_Moon_ComboSystem_IComboMove_*, get_ComboMoves, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B29C60, void, set_ComboMoves, app::SeinBowAttack* this_ptr, app::List_1_Moon_ComboSystem_IComboMove_* value)
    IL2CPP_REGISTER_METHOD(0x00D95FB0, float, get_ProviderCooldown, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D95FC0, void, set_ProviderCooldown, app::SeinBowAttack* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x00D95FD0, float, get_ProviderCooldownTimer, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D95FE0, void, set_ProviderCooldownTimer, app::SeinBowAttack* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x00D95FF0, float, get_MoveCooldown, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D96000, void, set_MoveCooldown, app::SeinBowAttack* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x00D96010, float, get_MoveCooldownTimer, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D96020, void, set_MoveCooldownTimer, app::SeinBowAttack* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x00D96030, bool, get_WasGroundedSinceLastExecution, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D96040, void, set_WasGroundedSinceLastExecution, app::SeinBowAttack* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAnimationEvent, app::SeinBowAttack* this_ptr, app::SeinController3D_EventId__Enum event_id)
    IL2CPP_REGISTER_METHOD(0x00D96050, bool, get_SpriteMirrorLock, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D96060, void, set_SpriteMirrorLock, app::SeinBowAttack* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x005D06C0, app::CharacterPlatformMovement*, get_SeinPlatformMovement, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D47870, app::SeinBowAttack_State__Enum, get_CurrentState, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D96120, float, GetSpeedMultiplier, app::SeinBowAttack* this_ptr, bool is_on_ground)
    IL2CPP_REGISTER_METHOD(0x00D96140, float, GetMinAimAngle, app::SeinBowAttack* this_ptr, bool is_on_ground)
    IL2CPP_REGISTER_METHOD(0x00D96160, float, GetChargeKickbackStrength, app::SeinBowAttack* this_ptr, bool is_on_ground)
    IL2CPP_REGISTER_METHOD(0x00D96180, app::Kickback*, GetChargeKickback, app::SeinBowAttack* this_ptr, bool is_on_ground)
    IL2CPP_REGISTER_METHOD(0x00D961A0, bool, GetControlAfterShot, app::SeinBowAttack* this_ptr, bool is_on_ground)
    IL2CPP_REGISTER_METHOD(0x00D961C0, void, OnSetReferenceToSein, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D96590, void, OnDamageReceived, app::SeinBowAttack* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x00D965C0, void, OnEnable, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D96650, void, OnDisable, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D96710, void, OnAwake, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D96A10, void, OnDestroy, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D95F60, void, OnExit, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D96EA0, void, Start, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D973F0, void, OnResetAirLimits, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D97400, void, UpdateCharacterState, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D974E0, void, UpdateCharacterStateTandem, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D974F0, void, UpdateCharacterStateInternal, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D97DA0, void, UpdateEffectStates, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D98030, void, UpdateEffectState_1, app::SeinBowAttack* this_ptr, app::GameObject* effect, bool play)
    IL2CPP_REGISTER_METHOD(0x00D984D0, void, UpdateEffectState_2, app::SeinBowAttack* this_ptr, app::ParticleSystem* ps, bool play)
    IL2CPP_REGISTER_METHOD(0x00D98630, void, UpdateArrow, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D98A20, void, ChangeState, app::SeinBowAttack* this_ptr, app::SeinBowAttack_State__Enum new_state)
    IL2CPP_REGISTER_METHOD(0x00D98F30, void, EnterIdleState, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D98FC0, void, UpdateIdleState, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D98FD0, void, EnterDrawState, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D998A0, void, StartTimeline, app::SeinBowAttack* this_ptr, app::MoonTimeline* timeline, app::Action* on_timeline_end)
    IL2CPP_REGISTER_METHOD(0x00D99C80, void, StopTimeline, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D99D50, void, UpdateDrawState, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D99FA0, void, ExitDrawState, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D9A160, void, OnDrawAnimationEnded, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D9A250, void, EnterPullChargeState, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D9A7C0, void, UpdatePullChargeState, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D9AB10, void, ExitPullChargeState, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D9AC50, void, OnPullChargeAnimationEnded, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D95560, bool, KeepPlayingAimAnimation, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D9ACD0, void, EnterAimState, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D9AE20, void, UpdateAimState, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D9B470, void, UpdateSettingsDuringAim, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D9BA90, void, ExitAimState, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D9BBA0, void, EnterRecoverState, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D9C000, void, UpdateRecoverState, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D9C080, void, ExitRecoverState, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D9C100, void, OnRecoverAnimationEnded, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D9C120, void, TryAcquireAutoTarget, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D9C180, void, HandleShootingAdditionalArrows, app::SeinBowAttack* this_ptr, app::BowArrow* original_arrow)
    IL2CPP_REGISTER_METHOD(0x00D9C450, void, SpawnAdditionalArrow, app::SeinBowAttack* this_ptr, float damage, float angle, float speed, bool main_arrow)
    IL2CPP_REGISTER_METHOD(
        0x00D9C960,
        void,
        ModifyHorizontalPlatformMovementSettings,
        app::SeinBowAttack* this_ptr,
        app::HorizontalPlatformMovementSettings* settings
    )
    IL2CPP_REGISTER_METHOD(
        0x00D9CBE0,
        void,
        ModifyGravityPlatformMovementSettings,
        app::SeinBowAttack* this_ptr,
        app::GravityPlatformMovementSettings* settings
    )
    IL2CPP_REGISTER_METHOD(0x00D9CDB0, app::IBowAttackable*, GetClosestTarget, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D9D810, void, TrySnapToTarget, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanShowMarker, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D9E310, void, UpdateCurrentAutoTarget, app::SeinBowAttack* this_ptr, app::IBowAttackable* new_current)
    IL2CPP_REGISTER_METHOD(0x00D9E330, void, ShowMarker, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D9E500, void, HideMarker, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D9E5E0, bool, CanBeInterruptedBy, app::SeinBowAttack* this_ptr, app::IComboMove* move)
    IL2CPP_REGISTER_METHOD(0x00D9E770, void, UpdateAim, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D9EA80, void, UpdatePlayerAim, app::SeinBowAttack* this_ptr, bool set_current)
    IL2CPP_REGISTER_METHOD(0x00D9EE60, void, AimAtTarget, app::SeinBowAttack* this_ptr, bool set_current)
    IL2CPP_REGISTER_METHOD(0x00D9F440, void, ReleaseArrow, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DA0020, void, PerformCleanup, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DA0250, void, SuspendGameplay, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DA05D0, void, ResumeGameplay, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00DA0710,
        app::ActiveAnimationHandle,
        PlayAnimation,
        app::SeinBowAttack* this_ptr,
        app::MoonAnimation* animation,
        app::Action* on_stop_playing,
        app::Func_1_Boolean_* condition
    )
    IL2CPP_REGISTER_METHOD(
        0x00DA08E0,
        app::ActiveAnimationHandle,
        PlayBowAnimation,
        app::SeinBowAttack* this_ptr,
        app::MoonAnimation* animation,
        app::Func_1_Boolean_* condition
    )
    IL2CPP_REGISTER_METHOD(0x00DA0A30, void, OnMoveWindowOpen, app::SeinBowAttack* this_ptr, app::MoveEventType__Enum event_type)
    IL2CPP_REGISTER_METHOD(0x00DA0B30, app::String*, get_StressTestName, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DA0BB0, void, StartStressTest, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DA0BC0, void, StressTestUpdate, app::SeinBowAttack* this_ptr, float delta_time)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, EndStressTest, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DA0C20, app::StressTestStatus__Enum, get_StressTestStatus, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DA0C30, void, set_StressTestStatus, app::SeinBowAttack* this_ptr, app::StressTestStatus__Enum value)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanExecuteStressTest, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_StopMovingPlayerWhilePerforming, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420230, app::RecordableParsingGroup__Enum, get_ParsingGroup, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DA0C40, void, ctor, app::SeinBowAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DA14A0, void, cctor, )
} // namespace app::classes::SeinBowAttack
