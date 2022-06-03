#include <features/controls/ability_overrides.h>
#include <game/player.h>
#include <macros.h>
#include <uber_states/uber_state_interface.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>

#include <unordered_map>

using namespace modloader;

namespace ability_override {
    namespace {
        std::unordered_map<app::AbilityType__Enum, ability_override> overrides;

        bool has_override(app::AbilityType__Enum type) {
            return overrides.find(type) != overrides.end();
        }

        void call_override(app::AbilityType__Enum type) {
            auto o = overrides.find(type);
            if (o != overrides.end())
                o->second(type);
        }

        IL2CPP_BINDING(, SeinLogicCycle, bool, IsCharacterStateBlockedBy, (app::SeinLogicCycle * this_ptr, app::SeinLogicCycle_StateFlags__Enum state_flags));
        IL2CPP_BINDING(, SeinInput, app::Input_InputButtonProcessor*, GetButton, (app::SeinInput * this_ptr, app::AbilityType__Enum ability));
        IL2CPP_INTERCEPT(, SeinLogicCycle, bool, AllowSpell, (app::SeinLogicCycle * this_ptr, app::AbilityType__Enum type)) {
            if (has_override(type))
                return true;

            return SeinLogicCycle::AllowSpell(this_ptr, type);
        }

        bool check_input(app::AbilityType__Enum ability, bool just_pressed = false) {
            auto sein = game::player::sein();
            if (SeinLogicCycle::IsCharacterStateBlockedBy(sein->fields.LogicCycle, app::SeinLogicCycle_StateFlags__Enum_BlockInput))
                return false;

            auto processor = SeinInput::GetButton(sein->fields.Input, ability);
            return processor->fields.IsPressed && (!just_pressed || !processor->fields.WasPressed);
        }

        // Combo moves, sword, hammer, spear, shuriken, launch(charge jump), etc
        // void SeinComboHandler_PerformComboMove(SeinComboHandler* this, IComboMove* move);

        IL2CPP_BINDING(, SeinGrenadeAttack, void, UpdateCurrentThrow, (app::SeinGrenadeAttack * this_ptr));
        IL2CPP_INTERCEPT(, SeinGrenadeAttack, void, UpdateCharacterState, (app::SeinGrenadeAttack * this_ptr)) {
            if (has_override(app::AbilityType__Enum_Grenade)) {
                SeinGrenadeAttack::UpdateCurrentThrow(this_ptr);
                if (check_input(app::AbilityType__Enum_Grenade))
                    call_override(app::AbilityType__Enum_Grenade);
            } else
                SeinGrenadeAttack::UpdateCharacterState(this_ptr);
        }

        IL2CPP_INTERCEPT(, SeinBlazeSpell, void, UpdateInput, (app::SeinBlazeSpell * this_ptr)) {
            if (has_override(app::AbilityType__Enum_Blaze)) {
                if (check_input(app::AbilityType__Enum_Blaze))
                    call_override(app::AbilityType__Enum_Blaze);
            } else
                UpdateInput(this_ptr);
        }

        bool started_sentry = false;
        IL2CPP_INTERCEPT(, SeinTurretSpell, void, UpdateCharacterState, (app::SeinTurretSpell * this_ptr)) {
            if (has_override(app::AbilityType__Enum_TurretSpell)) {
                if (check_input(app::AbilityType__Enum_TurretSpell))
                    call_override(app::AbilityType__Enum_TurretSpell);
            } else
                UpdateCharacterState(this_ptr);
        }

        IL2CPP_INTERCEPT(, SeinGlowSpell, void, UpdateCharacterState, (app::SeinGlowSpell * this_ptr)) {
            if (has_override(app::AbilityType__Enum_GlowSpell)) {
                if (check_input(app::AbilityType__Enum_GlowSpell))
                    call_override(app::AbilityType__Enum_GlowSpell);
            } else
                UpdateCharacterState(this_ptr);
        }

        IL2CPP_INTERCEPT(, SeinFeatherFlap, void, UpdateState, (app::SeinFeatherFlap * this_ptr)) {
            if (has_override(app::AbilityType__Enum_FeatherFlap)) {
                if (check_input(app::AbilityType__Enum_FeatherFlap))
                    call_override(app::AbilityType__Enum_FeatherFlap);
            } else
                SeinFeatherFlap::UpdateState(this_ptr);
        }

        IL2CPP_INTERCEPT(, SeinMeditateSpell, bool, get_ButtonDown, (app::SeinMeditateSpell * this_ptr)) {
            auto value = SeinMeditateSpell::get_ButtonDown(this_ptr);
            auto o = overrides.find(app::AbilityType__Enum_Regenerate);
            if (o == overrides.end())
                return value;

            if (value)
                o->second(app::AbilityType__Enum_Regenerate);

            return false;
        }
    } // namespace

    void register_override(app::AbilityType__Enum type, ability_override callback) {
        overrides[type] = callback;
    }

    void clear_override(app::AbilityType__Enum type) {
        overrides.erase(type);
    }
} // namespace ability_override

INJECT_C_DLLEXPORT void register_ability_override(app::AbilityType__Enum type, ability_override::ability_override callback) {
    ability_override::register_override(type, callback);
}

INJECT_C_DLLEXPORT void clear_ability_override(app::AbilityType__Enum type) {
    ability_override::clear_override(type);
}
