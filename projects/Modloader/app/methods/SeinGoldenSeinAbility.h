#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinGoldenSeinAbility.h>
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/GlowChargeEffect.h>
#include <Modloader/app/structs/GoldenSein.h>
#include <Modloader/app/structs/GravityPlatformMovementSettings.h>
#include <Modloader/app/structs/HorizontalPlatformMovementSettings.h>
#include <Modloader/app/structs/IAttackable.h>
#include <Modloader/app/structs/Input_InputButtonProcessor.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SeinGoldenSeinAbility_State__Enum.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SeinGoldenSeinAbility {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, (app::SeinGoldenSeinAbility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AEE110, app::Input_InputButtonProcessor*, get_Button, (app::SeinGoldenSeinAbility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00720040, app::GoldenSein*, get_GoldenSeinInstance, (app::SeinGoldenSeinAbility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AEE150, void, AddAndSpawnGoldenSein, ())
    IL2CPP_REGISTER_METHOD(0x00AEE2D0, void, SpawnGoldenSein, (app::SeinGoldenSeinAbility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AEE680, void, OnSetReferenceToSein, (app::SeinGoldenSeinAbility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AEE6C0, void, Start, (app::SeinGoldenSeinAbility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AEED30, void, OnDestroy, (app::SeinGoldenSeinAbility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AEF430, void, OnRestoreCheckpoint, (app::SeinGoldenSeinAbility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AEF430, void, OnCharacterDeath, (app::SeinGoldenSeinAbility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AEF440, bool, get_HasEnoughEnergyForFullGlow, (app::SeinGoldenSeinAbility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AEF480, void, SpendEnergyForFullGLow, (app::SeinGoldenSeinAbility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AEF4C0, bool, get_IsStatePerforming, (app::SeinGoldenSeinAbility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AEF4D0, void, UpdateCharacterState, (app::SeinGoldenSeinAbility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AEF810, void, UpdateFacing, (app::SeinGoldenSeinAbility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AEF860, void, UpdateButton, (app::SeinGoldenSeinAbility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AEF930, void, DestroySeinInstance, (app::SeinGoldenSeinAbility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AEFA20, void, ChangeState, (app::SeinGoldenSeinAbility * this_ptr, app::SeinGoldenSeinAbility_State__Enum new_state))
    IL2CPP_REGISTER_METHOD(0x00AEFBF0, void, UpdateCurrentState, (app::SeinGoldenSeinAbility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AEFC70, void, StartRootMotion, (app::SeinGoldenSeinAbility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AEFE20, void, EndRootMotion, (app::SeinGoldenSeinAbility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AEFFD0, void, PlayTimeline, (app::SeinGoldenSeinAbility * this_ptr, app::MoonTimeline* timeline, app::Action* on_stoped_playing, bool stop_current_timeline))
    IL2CPP_REGISTER_METHOD(0x00AF00F0, void, NotifyOutOfEnergy, (app::SeinGoldenSeinAbility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AF0140, void, ModifyHorizontalPlatformMovementSettings, (app::SeinGoldenSeinAbility * this_ptr, app::HorizontalPlatformMovementSettings* settings))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ModifyGravityPlatformMovementSettings, (app::SeinGoldenSeinAbility * this_ptr, app::GravityPlatformMovementSettings* settings))
    IL2CPP_REGISTER_METHOD(0x00AF0360, void, OnRootMotion, (app::SeinGoldenSeinAbility * this_ptr, app::Vector3 motion))
    IL2CPP_REGISTER_METHOD(0x00AF0480, void, OnTakeDamage, (app::SeinGoldenSeinAbility * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHOD(0x00AF04A0, void, OnEnterResting, (app::SeinGoldenSeinAbility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AF0580, void, UpdateResting, (app::SeinGoldenSeinAbility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AF07F0, void, OnExitResting, (app::SeinGoldenSeinAbility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AF0860, void, OnEnterCharging, (app::SeinGoldenSeinAbility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AF0CA0, void, SetCurrentChargeEffect, (app::SeinGoldenSeinAbility * this_ptr, app::GlowChargeEffect* charge_effect))
    IL2CPP_REGISTER_METHOD(0x00AF1020, void, UpdateCharging, (app::SeinGoldenSeinAbility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AF1080, void, OnExitCharging, (app::SeinGoldenSeinAbility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AF10B0, void, OnChargeUnblock, (app::SeinGoldenSeinAbility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AF10C0, void, OnEnterGlowRelease, (app::SeinGoldenSeinAbility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateGlowRelease, (app::SeinGoldenSeinAbility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AF1460, void, OnExitGlowRelease, (app::SeinGoldenSeinAbility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AEF430, void, OnFullResealeUnblock, (app::SeinGoldenSeinAbility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AF1740, void, PerformFullGlow, (app::SeinGoldenSeinAbility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AF17C0, bool, CanInitiateGlow, (app::SeinGoldenSeinAbility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AF18D0, void, ApplyFullGlow, (app::SeinGoldenSeinAbility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AF1900, void, DealDamageInRadius, (app::SeinGoldenSeinAbility * this_ptr, float amount, float radius, float force))
    IL2CPP_REGISTER_METHOD(0x00AF1EE0, void, DealDamage, (app::SeinGoldenSeinAbility * this_ptr, app::IAttackable* attackable, float amount, app::Vector3 direction, float force, app::Damage* damage))
    IL2CPP_REGISTER_METHOD(0x00AF2250, void, OnDrawGizmosSelected, (app::SeinGoldenSeinAbility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AF2390, void, ChargeStarted, (app::SeinGoldenSeinAbility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AF23E0, void, ChargeInterrupted, (app::SeinGoldenSeinAbility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AF25A0, void, ctor, (app::SeinGoldenSeinAbility * this_ptr))
} // namespace app::classes::SeinGoldenSeinAbility
