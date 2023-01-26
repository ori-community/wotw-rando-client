#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinBlazeSpell.h>
#include <Modloader/app/structs/DamageWeight__Enum.h>
#include <Modloader/app/structs/GlowChargeEffect.h>
#include <Modloader/app/structs/HorizontalPlatformMovementSettings.h>
#include <Modloader/app/structs/Input_InputButtonProcessor.h>
#include <Modloader/app/structs/SeinBlazeSpell_BlazeSetupInfo.h>
#include <Modloader/app/structs/SeinBlazeSpell_BlazeTypes__Enum.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SeinBlazeSpell {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, (app::SeinBlazeSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D8F640, app::SeinBlazeSpell_BlazeSetupInfo*, get_m_currentBlazeSetup, (app::SeinBlazeSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D8F690, bool, CanStartQuickBlazeOnPress, (app::SeinBlazeSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D8F700, bool, IsFullBlazeUnlocked, (app::SeinBlazeSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D8F7F0, bool, IsBlazeCasting, (app::SeinBlazeSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D8F860, void, Start, (app::SeinBlazeSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D8FFB0, void, OnEnable, (app::SeinBlazeSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AE77E0, void, OnEnter, (app::SeinBlazeSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D8FFC0, void, OnExit, (app::SeinBlazeSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D90000, void, InitStateMachine, (app::SeinBlazeSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D91420, bool, get_ButtonIsPressed, (app::SeinBlazeSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D914B0, bool, get_ButtonOnPressed, (app::SeinBlazeSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D91550, app::Input_InputButtonProcessor*, get_Button, (app::SeinBlazeSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D91590, bool, get_IsBinded, (app::SeinBlazeSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D91670, void, OnSetReferenceToSein, (app::SeinBlazeSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D916B0, bool, get_IsStatePerforming, (app::SeinBlazeSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D916F0, void, OnDestroy, (app::SeinBlazeSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D91B20, void, UpdateCharacterState, (app::SeinBlazeSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D91DB0, void, UpdateInput, (app::SeinBlazeSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D92030, void, OnBlazeTriggered, (app::SeinBlazeSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D92100, void, OnQuickBlazeRelease, (app::SeinBlazeSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D92150, void, OnFullBlazeRelease, (app::SeinBlazeSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D921A0, void, ModifyHorizontalPlatformMovementSettings, (app::SeinBlazeSpell * this_ptr, app::HorizontalPlatformMovementSettings* settings))
    IL2CPP_REGISTER_METHOD(0x00D92250, void, ResetBlaze, (app::SeinBlazeSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D92250, void, OnRestoreCheckpoint, (app::SeinBlazeSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D92250, void, OnCharacterDeath, (app::SeinBlazeSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D922A0, void, StartRootMotion, (app::SeinBlazeSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D92450, void, EndRootMotion, (app::SeinBlazeSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D92600, void, OnRootMotion, (app::SeinBlazeSpell * this_ptr, app::Vector3 motion))
    IL2CPP_REGISTER_METHOD(0x00D92720, app::SeinBlazeSpell_BlazeTypes__Enum, GetSuitableBlazeType, (app::SeinBlazeSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D92780, void, OnEnterBlazeReady, (app::SeinBlazeSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D927A0, void, OnUpdateBlazeReady, (app::SeinBlazeSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D927F0, void, OnEnterBlazeQuick, (app::SeinBlazeSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D92BB0, void, OnUpdateBlazeQuick, (app::SeinBlazeSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D92C50, void, OnExitBlazeQuick, (app::SeinBlazeSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D92EC0, void, OnEnterBlazeFullCharge, (app::SeinBlazeSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D93390, void, OnUpdateBlazeFullCharge, (app::SeinBlazeSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D935A0, void, OnExitBlazeFullCharge, (app::SeinBlazeSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D937D0, void, OnBlazeFullChargeTimelineStopped, (app::SeinBlazeSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D93810, void, OnEnterBlazeFull, (app::SeinBlazeSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D93A50, void, OnUpdateBlazeFull, (app::SeinBlazeSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D93AB0, void, OnExitBlazeFull, (app::SeinBlazeSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D8FFC0, void, StopBlaze, (app::SeinBlazeSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D93C80, void, DealBlazeDamage, (app::SeinBlazeSpell * this_ptr, float range, float initial_damage, app::DamageWeight__Enum weight))
    IL2CPP_REGISTER_METHOD(0x00D944A0, void, SetCurrentChargeEffect, (app::SeinBlazeSpell * this_ptr, app::GlowChargeEffect* charge_effect))
    IL2CPP_REGISTER_METHOD(0x00D945C0, void, ctor, (app::SeinBlazeSpell * this_ptr))
} // namespace app::classes::SeinBlazeSpell
