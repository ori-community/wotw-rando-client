#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/GlowChargeEffect.h>
#include <Modloader/app/structs/GravityPlatformMovementSettings.h>
#include <Modloader/app/structs/HorizontalPlatformMovementSettings.h>
#include <Modloader/app/structs/IAttackable.h>
#include <Modloader/app/structs/Input_InputButtonProcessor.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SeinGlowSpell.h>
#include <Modloader/app/structs/SeinGlowSpell_GlowLightInfo.h>
#include <Modloader/app/structs/SeinGlowSpell_GlowState__Enum.h>
#include <Modloader/app/structs/SeinGlowSpell_GlowType__Enum.h>
#include <Modloader/app/structs/SeinGlowSpell_QuickGlowSetupInfo.h>
#include <Modloader/app/structs/SeinGlowSpell_QuickGlowTypes__Enum.h>
#include <Modloader/app/structs/StressTestStatus__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SeinGlowSpell {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, app::SeinGlowSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AE6400, bool, get_ShouldStopMovement, app::SeinGlowSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AE6430, app::SeinGlowSpell_QuickGlowSetupInfo*, get_m_currentQuickGlowSetup, app::SeinGlowSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AE6480, bool, get_ButtonIsPressed, app::SeinGlowSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AE6510, bool, get_ButtonOnPressed, app::SeinGlowSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AE65B0, bool, get_ButtonOnReleased, app::SeinGlowSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AE6650, app::Input_InputButtonProcessor*, get_Button, app::SeinGlowSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AE6690, bool, get_IsBinded, app::SeinGlowSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AE6770, bool, get_ShouldDrainEnergy, app::SeinGlowSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AE67A0, void, Start, app::SeinGlowSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AE7270, void, OnDestroy, app::SeinGlowSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AE77E0, void, OnEnter, app::SeinGlowSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AE77F0, void, OnExit, app::SeinGlowSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AE7820, void, OnRestoreCheckpoint, app::SeinGlowSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AE7AE0, bool, get_HasEnoughEnergyForFullGlow, app::SeinGlowSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AE7B30, bool, get_HasEnoughEnergyForQuickGlow, app::SeinGlowSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AE7B80, bool, get_HasEnoughEnergyForQuickGlowDrain, app::SeinGlowSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AE7C30, void, SpendEnergyForFullGLow, app::SeinGlowSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AE7C80, void, SpendEnergyForQuickGLow, app::SeinGlowSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AE7CD0, void, SpendEnergyForQuickGlowDrain, app::SeinGlowSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AE7D80, void, OnSetReferenceToSein, app::SeinGlowSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AE7DC0, bool, get_IsStatePerforming, app::SeinGlowSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AE7DD0, bool, get_CanChangeFacing, app::SeinGlowSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AE7DE0, void, Update, app::SeinGlowSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AE7E50, void, UpdateGlowLight, app::SeinGlowSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AE8110, void, UpdateCharacterState, app::SeinGlowSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AE81F0, void, UpdateInputLockTime, app::SeinGlowSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AE8390, void, UpdateEnergyConsumption, app::SeinGlowSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AE8560, bool, IsQuickGlowTurningOn, app::SeinGlowSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AE86F0, bool, IsQuickGlowOn, app::SeinGlowSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AE8880, bool, IsQuickGlowTurningOff, app::SeinGlowSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AE8A10, void, UpdateFacing, app::SeinGlowSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AE8A50, void, UpdateButton, app::SeinGlowSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AE8AF0, void, UpdateDamageOverTime, app::SeinGlowSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AE8D70, void, UpdateQuickGlowTimeStatistics, app::SeinGlowSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AE8EC0, void, FlushQuickGlowTimerIntoStatistics, app::SeinGlowSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AE8F80, void, ChangeState, app::SeinGlowSpell* this_ptr, app::SeinGlowSpell_GlowState__Enum new_state)
    IL2CPP_REGISTER_METHOD(0x00AE9260, void, UpdateCurrentState, app::SeinGlowSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AE94A0, void, OnEnterResting, app::SeinGlowSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AE9580, void, UpdateResting, app::SeinGlowSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AE9B30, void, OnExitResting, app::SeinGlowSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AE9BA0, void, OnEnterCharging, app::SeinGlowSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AE9EE0, void, SetCurrentChargeEffect, app::SeinGlowSpell* this_ptr, app::GlowChargeEffect* charge_effect)
    IL2CPP_REGISTER_METHOD(0x00AEA260, void, UpdateCharging, app::SeinGlowSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008C8490, void, OnExitCharging, app::SeinGlowSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AEA360, void, OnChargeUnblock, app::SeinGlowSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AEA370, void, OnEnterQuickGlow, app::SeinGlowSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AEA6D0, void, UpdateQuickGlow, app::SeinGlowSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AEA740, void, OnExitQuickGlow, app::SeinGlowSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AEA9C0, void, OnEnterGlowRelease, app::SeinGlowSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateGlowRelease, app::SeinGlowSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AEACC0, void, OnExitGlowRelease, app::SeinGlowSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AEAFA0, void, OnFullResealeUnblock, app::SeinGlowSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AEAFB0, void, PerformFullGlow, app::SeinGlowSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AEB020, void, PerformQuickGlow, app::SeinGlowSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AEB090, void, ApplyFullGlow, app::SeinGlowSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AEB500, void, ApplyQuickGlow, app::SeinGlowSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AEB950, void, AddGlow, app::SeinGlowSpell* this_ptr, app::SeinGlowSpell_GlowLightInfo* info)
    IL2CPP_REGISTER_METHOD(0x00AEBA10, void, StopGlowsOfType, app::SeinGlowSpell* this_ptr, app::SeinGlowSpell_GlowType__Enum type, bool cancel)
    IL2CPP_REGISTER_METHOD(0x00AEBB30, void, StopAllGlows, app::SeinGlowSpell* this_ptr, bool cancel)
    IL2CPP_REGISTER_METHOD(0x00AEBC30, void, DealDamageInRadius, app::SeinGlowSpell* this_ptr, float amount, float radius, float force)
    IL2CPP_REGISTER_METHOD(
        0x00AEC470,
        bool,
        DealDamage,
        app::SeinGlowSpell* this_ptr,
        app::IAttackable* attackable,
        float amount,
        app::Vector3 direction,
        float force,
        app::Damage* damage,
        bool should_instantiate_v_f_x
    )
    IL2CPP_REGISTER_METHOD(0x00AEC7E0, void, DamageTicked, app::SeinGlowSpell* this_ptr, app::DamageResult damage_result)
    IL2CPP_REGISTER_METHOD(0x00AEC960, float, CalculateCooldown, app::SeinGlowSpell* this_ptr, float cooldown)
    IL2CPP_REGISTER_METHOD(0x00AEC970, void, StartRootMotion, app::SeinGlowSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AECB20, void, EndRootMotion, app::SeinGlowSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00AECCD0,
        void,
        PlayTimeline,
        app::SeinGlowSpell* this_ptr,
        app::MoonTimeline* timeline,
        app::Action* on_stoped_playing,
        bool stop_current_timeline
    )
    IL2CPP_REGISTER_METHOD(0x00AECDF0, void, NotifyOutOfEnergy, app::SeinGlowSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00AECE40,
        void,
        ModifyHorizontalPlatformMovementSettings,
        app::SeinGlowSpell* this_ptr,
        app::HorizontalPlatformMovementSettings* settings
    )
    IL2CPP_REGISTER_METHOD(
        0x002FA000,
        void,
        ModifyGravityPlatformMovementSettings,
        app::SeinGlowSpell* this_ptr,
        app::GravityPlatformMovementSettings* settings
    )
    IL2CPP_REGISTER_METHOD(0x00AED090, void, OnRootMotion, app::SeinGlowSpell* this_ptr, app::Vector3 motion)
    IL2CPP_REGISTER_METHOD(0x00AED1C0, void, OnTakeDamage, app::SeinGlowSpell* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x00AED1E0, bool, CanStartQuickGlowOnPress, app::SeinGlowSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AED1F0, app::SeinGlowSpell_QuickGlowTypes__Enum, GetSuitableQuickGlowType, app::SeinGlowSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AED3A0, bool, ShouldStopGlowDueToInputLock, app::SeinGlowSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AED3C0, bool, CanInitiateGlow, app::SeinGlowSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AED5A0, void, OnDrawGizmosSelected, app::SeinGlowSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AED6E0, app::String*, get_StressTestName, app::SeinGlowSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AED760, void, StartStressTest, app::SeinGlowSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, StressTestUpdate, app::SeinGlowSpell* this_ptr, float delta_time)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, EndStressTest, app::SeinGlowSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AED7A0, app::StressTestStatus__Enum, get_StressTestStatus, app::SeinGlowSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AED7B0, void, set_StressTestStatus, app::SeinGlowSpell* this_ptr, app::StressTestStatus__Enum value)
    IL2CPP_REGISTER_METHOD(0x00AE7DD0, bool, get_CanExecuteStressTest, app::SeinGlowSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_StopMovingPlayerWhilePerforming, app::SeinGlowSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AED7C0, void, ctor, app::SeinGlowSpell* this_ptr)
} // namespace app::classes::SeinGlowSpell
