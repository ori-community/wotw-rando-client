#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinCharacter.h>
#include <Modloader/app/structs/GlowChargeEffect.h>
#include <Modloader/app/structs/HorizontalPlatformMovementSettings.h>
#include <Modloader/app/structs/Input_InputButtonProcessor.h>
#include <Modloader/app/structs/KuMeditateSpell.h>
#include <Modloader/app/structs/KuMeditateSpell_State__Enum.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::KuMeditateSpell {
    IL2CPP_REGISTER_METHOD(0x01241A30, app::SeinCharacter*, get_Sein, (app::KuMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01241AC0, float, get_HealthPercentagePerHeal, (app::KuMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01241B00, float, get_EnergyPerHeal, (app::KuMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01241B40, void, OnSetReferenceToKu, (app::KuMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01241B70, bool, get_IsStatePerforming, (app::KuMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01241B90, void, Start, (app::KuMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01241D30, void, OnDestroy, (app::KuMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01241EF0, void, ModifyHorizontalPlatformMovementSettings, (app::KuMeditateSpell * this_ptr, app::HorizontalPlatformMovementSettings* settings))
    IL2CPP_REGISTER_METHOD(0x01241F30, void, UpdateState, (app::KuMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012421E0, app::Input_InputButtonProcessor*, get_Button, (app::KuMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01242220, bool, get_ButtonPressed, (app::KuMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012422F0, bool, get_ButtonDown, (app::KuMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012423B0, bool, get_HasEnergyToStartCasting, (app::KuMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01242440, bool, get_IsAtMaxHealth, (app::KuMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012424B0, bool, get_WantsToStartCasting, (app::KuMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01242590, void, UpdateIdle, (app::KuMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012427C0, void, UpdateDelayedStart, (app::KuMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01242A90, void, NotifyHealthAlreadyFull, (app::KuMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01242C20, void, UpdateIdleToLoop, (app::KuMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01242CF0, void, UpdateLoop, (app::KuMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01243720, void, UpdateHeal, (app::KuMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01243880, void, OnExit, (app::KuMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0074C4A0, bool, get_IsIdleToLoop, (app::KuMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01243890, bool, get_IsCharging, (app::KuMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012438A0, bool, get_IsHealing, (app::KuMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012438B0, void, ChangeState, (app::KuMeditateSpell * this_ptr, app::KuMeditateSpell_State__Enum state))
    IL2CPP_REGISTER_METHOD(0x012439C0, void, EnterIdle, (app::KuMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012439D0, void, EnterIdleToLoop, (app::KuMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01243BF0, void, EnterLoop, (app::KuMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01243F40, void, EnterHeal, (app::KuMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ExitIdle, (app::KuMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ExitIdleToLoop, (app::KuMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01244160, void, ExitLoop, (app::KuMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ExitHeal, (app::KuMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012441F0, app::Vector3, get_EffectPosition, (app::KuMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012444D0, void, UpdateEffectPosition, (app::KuMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01244610, void, SetCurrentChargeEffect, (app::KuMeditateSpell * this_ptr, app::GlowChargeEffect* charge_effect))
    IL2CPP_REGISTER_METHOD(0x01244700, void, ctor, (app::KuMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0074C4A0, bool, _EnterIdleToLoop_b__67_0, (app::KuMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01243890, bool, _EnterLoop_b__68_0, (app::KuMeditateSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012438A0, bool, _EnterHeal_b__69_0, (app::KuMeditateSpell * this_ptr))
} // namespace app::classes::KuMeditateSpell
