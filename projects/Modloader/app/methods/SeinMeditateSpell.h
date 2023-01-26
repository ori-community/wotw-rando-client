#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinMeditateSpell.h>
#include <Modloader/app/structs/GlowChargeEffect.h>
#include <Modloader/app/structs/HorizontalPlatformMovementSettings.h>
#include <Modloader/app/structs/Input_InputButtonProcessor.h>
#include <Modloader/app/structs/SeinMeditateSpell_State__Enum.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SeinMeditateSpell {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, (app::SeinMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A3F40, float, get_HealthPercentagePerHeal, (app::SeinMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A3F80, float, get_FlatHealthPerHeal, (app::SeinMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A3FC0, float, get_EnergyPerHeal, (app::SeinMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A4000, void, OnSetReferenceToSein, (app::SeinMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A4040, bool, get_IsStatePerforming, (app::SeinMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A4060, void, Start, (app::SeinMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A4200, void, OnDestroy, (app::SeinMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A43D0, void, ModifyHorizontalPlatformMovementSettings, (app::SeinMeditateSpell * this_ptr, app::HorizontalPlatformMovementSettings* settings))
    IL2CPP_REGISTER_METHOD(0x008A4410, void, UpdateCharacterState, (app::SeinMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A4660, app::Input_InputButtonProcessor*, get_Button, (app::SeinMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A46A0, bool, get_ButtonPressed, (app::SeinMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A4760, bool, get_ButtonDown, (app::SeinMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A4810, bool, get_HasEnergyToStartCasting, (app::SeinMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A4890, bool, get_IsAtMaxHealth, (app::SeinMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A4900, bool, get_WantsToStartCasting, (app::SeinMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A49D0, void, PlayLoopSound, (app::SeinMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A4B40, void, StopLoopSound, (app::SeinMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A4BC0, void, UpdateNormalizedHealthRTPC, (app::SeinMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A4CB0, void, UpdateIdle, (app::SeinMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A4F00, void, UpdateDelayedStart, (app::SeinMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A5100, void, NotifyHealthAlreadyFull, (app::SeinMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A5280, void, UpdateIdleToLoop, (app::SeinMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A54A0, void, UpdateLoop, (app::SeinMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A5EC0, void, UpdateHeal, (app::SeinMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A5F80, void, OnExit, (app::SeinMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A5FD0, bool, get_IsIdleToLoop, (app::SeinMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A5FE0, bool, get_IsCharging, (app::SeinMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A5FF0, bool, get_IsHealing, (app::SeinMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A6000, void, ChangeState, (app::SeinMeditateSpell * this_ptr, app::SeinMeditateSpell_State__Enum state))
    IL2CPP_REGISTER_METHOD(0x008A60A0, void, EnterIdle, (app::SeinMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, EnterIdleToLoop, (app::SeinMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A60B0, void, EnterLoop, (app::SeinMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A64F0, void, EnterHeal, (app::SeinMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ExitIdle, (app::SeinMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ExitIdleToLoop, (app::SeinMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A66C0, void, ExitLoop, (app::SeinMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ExitHeal, (app::SeinMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A66D0, app::Vector3, get_EffectPosition, (app::SeinMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A69B0, void, UpdateEffectPosition, (app::SeinMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A6AF0, void, SetCurrentChargeEffect, (app::SeinMeditateSpell * this_ptr, app::GlowChargeEffect* charge_effect))
    IL2CPP_REGISTER_METHOD(0x008A6BE0, void, ctor, (app::SeinMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A5FD0, bool, _UpdateIdleToLoop_b__56_0, (app::SeinMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A5FE0, bool, _EnterLoop_b__74_0, (app::SeinMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A5FF0, bool, _EnterHeal_b__75_0, (app::SeinMeditateSpell * this_ptr))
} // namespace app::classes::SeinMeditateSpell
