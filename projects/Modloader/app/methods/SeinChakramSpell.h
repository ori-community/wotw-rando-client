#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SeinChakramSpell.h>
#include <Modloader/app/structs/CharacterPlatformMovement.h>
#include <Modloader/app/structs/GravityPlatformMovementSettings.h>
#include <Modloader/app/structs/HorizontalPlatformMovementSettings.h>
#include <Modloader/app/structs/SeinController3D_EventId__Enum.h>
#include <Modloader/app/structs/SeinChakramSpell_State__Enum.h>
#include <Modloader/app/structs/IBowAttackable.h>
#include <Modloader/app/structs/ComboMoveType__Enum.h>
#include <Modloader/app/structs/ButtonInputType__Enum.h>
#include <Modloader/app/structs/IComboMove.h>
#include <Modloader/app/structs/ComboInput.h>
#include <Modloader/app/structs/List_1_Moon_ComboSystem_IComboMove_.h>
#include <Modloader/app/structs/AbilityType__Enum.h>

namespace app::classes::SeinChakramSpell {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, (app::SeinChakramSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D06C0, app::CharacterPlatformMovement*, get_PlatformMovement, (app::SeinChakramSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DA7C20, bool, get_ButtonDown, (app::SeinChakramSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DA7D60, void, OnSetReferenceToSein, (app::SeinChakramSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DA7E00, void, OnDestroy, (app::SeinChakramSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DA7FF0, void, OnExit, (app::SeinChakramSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DA8000, void, Start, (app::SeinChakramSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DA83A0, void, ModifyGravityPlatformMovementSettings, (app::SeinChakramSpell * this_ptr, app::GravityPlatformMovementSettings* gravity_settings))
    IL2CPP_REGISTER_METHOD(0x00DA83F0, void, ModifyHorizontalPlatformMovementSettings, (app::SeinChakramSpell * this_ptr, app::HorizontalPlatformMovementSettings* movement_settings))
    IL2CPP_REGISTER_METHOD(0x00DA8490, float, get_MoveCooldown, (app::SeinChakramSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006FB480, float, get_MoveCooldownTimer, (app::SeinChakramSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006FB490, void, set_MoveCooldownTimer, (app::SeinChakramSpell * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00DA84A0, bool, get_WasGroundedSinceLastExecution, (app::SeinChakramSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DA84B0, void, set_WasGroundedSinceLastExecution, (app::SeinChakramSpell * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAnimationEvent, (app::SeinChakramSpell * this_ptr, app::SeinController3D_EventId__Enum event_id))
    IL2CPP_REGISTER_METHOD(0x00DA84C0, bool, get_IsStatePerforming, (app::SeinChakramSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DA84D0, void, ChakramDestroyed, (app::SeinChakramSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DA84F0, void, ChakramCaught, (app::SeinChakramSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DA8AB0, void, SpawnChakramCaughtEffect, (app::SeinChakramSpell * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04726FE8, SeinChakramSpell_SpawnChakramCaughtEffect__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00DA8AE0, void, ForceStopThrowAnimation, (app::SeinChakramSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DA8AF0, bool, PlayCatchAnimation, (app::SeinChakramSpell * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047579E0, SeinChakramSpell_PlayCatchAnimation__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00DA8B50, bool, PlayAirCatchAnimation, (app::SeinChakramSpell * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04743A08, SeinChakramSpell_PlayAirCatchAnimation__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00DA8CF0, bool, PlayAirThrowAnimation, (app::SeinChakramSpell * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04788390, SeinChakramSpell_PlayAirThrowAnimation__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00DA8DD0, void, UpdateCharacterState, (app::SeinChakramSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DA9150, void, TryBeginSpell, (app::SeinChakramSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DA7FF0, void, CancelSpell, (app::SeinChakramSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DA9C80, void, UpdateNormalState, (app::SeinChakramSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DA9CF0, bool, KeepPlayingAnimation, (app::SeinChakramSpell * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04795180, SeinChakramSpell_KeepPlayingAnimation__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00DA9DC0, void, EnterPreCharge, (app::SeinChakramSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DAA060, void, UpdatePreChargeState, (app::SeinChakramSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DAA0A0, void, UpdatePreAirShotState, (app::SeinChakramSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DAA200, void, UpdateAirShot, (app::SeinChakramSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DAA410, void, UpdateFullyChargedState, (app::SeinChakramSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DAA480, void, UpdatePostShot, (app::SeinChakramSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DAA510, void, ChangeState, (app::SeinChakramSpell * this_ptr, app::SeinChakramSpell_State__Enum new_state))
    IL2CPP_REGISTER_METHOD(0x00DAA7B0, void, InstantiateProjectile, (app::SeinChakramSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DAAAF0, bool, TestScatterShotShard, (app::SeinChakramSpell * this_ptr, int32_t* count, float* interval, bool* split_damage))
    IL2CPP_REGISTER_METHOD(0x00DAAB10, void, ReleaseProjectile, (app::SeinChakramSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DAACE0, bool, get_SpriteMirrorLock, (app::SeinChakramSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DAACF0, void, set_SpriteMirrorLock, (app::SeinChakramSpell * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00DAADB0, void, ReleaseProjectileSingle, (app::SeinChakramSpell * this_ptr, float angle_offset))
    IL2CPP_REGISTER_METHOD(0x00DAB300, float, GetCooldown, (app::SeinChakramSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DAB320, void, TryAcquireAutoTarget, (app::SeinChakramSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DAB380, void, UpdateCurrentAutoTarget, (app::SeinChakramSpell * this_ptr, app::IBowAttackable* new_current))
    IL2CPP_REGISTER_METHOD(0x00DAB3A0, void, AimAtTarget, (app::SeinChakramSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DAB750, app::IBowAttackable*, GetClosestTarget, (app::SeinChakramSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DAC1B0, float, AutoAimMaxDistance, (app::SeinChakramSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DAC2A0, bool, get_MoveHasFinished, (app::SeinChakramSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::ComboMoveType__Enum, get_ComboMoveType, (app::SeinChakramSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::ButtonInputType__Enum, get_ButtonInputType, (app::SeinChakramSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DAC2B0, bool, get_IsAttackButtonDown, (app::SeinChakramSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DAC3F0, bool, get_OnAttackButtonPressed, (app::SeinChakramSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DAC530, bool, get_OnAttackButtonReleased, (app::SeinChakramSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DAC660, bool, CanExecute, (app::SeinChakramSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DAC6B0, void, EnterMove, (app::SeinChakramSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateMove, (app::SeinChakramSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DA7FF0, void, ExitMove, (app::SeinChakramSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DA7FF0, void, InterruptMove, (app::SeinChakramSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DAC6C0, app::IComboMove*, GetComboMove, (app::SeinChakramSpell * this_ptr, app::ComboInput* input))
    IL2CPP_REGISTER_METHOD(0x006FB810, app::List_1_Moon_ComboSystem_IComboMove_*, get_ComboMoves, (app::SeinChakramSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DAC730, app::AbilityType__Enum, get_ComboAbilityType, (app::SeinChakramSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DAB300, float, get_CoolDown, (app::SeinChakramSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DAB300, float, get_ProviderCooldown, (app::SeinChakramSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A79410, float, get_ProviderCooldownTimer, (app::SeinChakramSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A79420, void, set_ProviderCooldownTimer, (app::SeinChakramSpell * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00DAC740, void, ctor, (app::SeinChakramSpell * this_ptr))
} // namespace app::classes::SeinChakramSpell
