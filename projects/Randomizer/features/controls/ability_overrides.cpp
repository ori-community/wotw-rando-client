#include <Core/api/game/player.h>
#include <Core/api/uber_states/uber_state.h>
#include <Randomizer/macros.h>
#include <Randomizer/features/controls/ability_overrides.h>

#include <Modloader/app/methods/SeinBlazeSpell.h>
#include <Modloader/app/methods/SeinFeatherFlap.h>
#include <Modloader/app/methods/SeinGlowSpell.h>
#include <Modloader/app/methods/SeinGrenadeAttack.h>
#include <Modloader/app/methods/SeinInput.h>
#include <Modloader/app/methods/SeinLogicCycle.h>
#include <Modloader/app/methods/SeinMeditateSpell.h>
#include <Modloader/app/methods/SeinTurretSpell.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>

#include <unordered_map>

using namespace modloader;
using namespace app::classes;

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

        IL2CPP_INTERCEPT(bool, SeinLogicCycle, AllowSpell, app::SeinLogicCycle * this_ptr, app::AbilityType__Enum type) {
            if (has_override(type))
                return true;

            return next::SeinLogicCycle::AllowSpell(this_ptr, type);
        }

        bool check_input(app::AbilityType__Enum ability, bool just_pressed = false) {
            auto sein = core::api::game::player::sein();
            if (SeinLogicCycle::IsCharacterStateBlockedBy(sein->fields.LogicCycle, app::SeinLogicCycle_StateFlags__Enum::BlockInput))
                return false;

            auto processor = SeinInput::GetButton(sein->fields.Input, ability);
            return processor->fields.IsPressed && (!just_pressed || !processor->fields.WasPressed);
        }

        // Combo moves, sword, hammer, spear, shuriken, launch(charge jump), etc
        // void SeinComboHandler_PerformComboMove(SeinComboHandler* this, IComboMove* move);

        IL2CPP_INTERCEPT(void, SeinGrenadeAttack, UpdateCharacterState, app::SeinGrenadeAttack * this_ptr) {
            if (has_override(app::AbilityType__Enum::Grenade)) {
                SeinGrenadeAttack::UpdateCurrentThrow(this_ptr);
                if (check_input(app::AbilityType__Enum::Grenade)) {
                    call_override(app::AbilityType__Enum::Grenade);
                }
            } else {
                next::SeinGrenadeAttack::UpdateCharacterState(this_ptr);
            }
        }

        IL2CPP_INTERCEPT(void, SeinBlazeSpell, UpdateInput, app::SeinBlazeSpell * this_ptr) {
            if (has_override(app::AbilityType__Enum::Blaze)) {
                if (check_input(app::AbilityType__Enum::Blaze))
                    call_override(app::AbilityType__Enum::Blaze);
            } else
                next::SeinBlazeSpell::UpdateInput(this_ptr);
        }

        IL2CPP_INTERCEPT(void, SeinTurretSpell, UpdateCharacterState, app::SeinTurretSpell * this_ptr) {
            if (has_override(app::AbilityType__Enum::TurretSpell)) {
                if (check_input(app::AbilityType__Enum::TurretSpell))
                    call_override(app::AbilityType__Enum::TurretSpell);
            } else
                next::SeinTurretSpell::UpdateCharacterState(this_ptr);
        }

        IL2CPP_INTERCEPT(void, SeinGlowSpell, UpdateCharacterState, app::SeinGlowSpell * this_ptr) {
            if (has_override(app::AbilityType__Enum::GlowSpell)) {
                if (check_input(app::AbilityType__Enum::GlowSpell))
                    call_override(app::AbilityType__Enum::GlowSpell);
            } else
                next::SeinGlowSpell::UpdateCharacterState(this_ptr);
        }

        IL2CPP_INTERCEPT(void, SeinFeatherFlap, UpdateState, app::SeinFeatherFlap * this_ptr) {
            if (has_override(app::AbilityType__Enum::FeatherFlap)) {
                if (check_input(app::AbilityType__Enum::FeatherFlap))
                    call_override(app::AbilityType__Enum::FeatherFlap);
            } else
                next::SeinFeatherFlap::UpdateState(this_ptr);
        }

        IL2CPP_INTERCEPT(bool, SeinMeditateSpell, get_ButtonDown, app::SeinMeditateSpell * this_ptr) {
            auto value = next::SeinMeditateSpell::get_ButtonDown(this_ptr);
            auto o = overrides.find(app::AbilityType__Enum::Regenerate);
            if (o == overrides.end())
                return value;

            if (value)
                o->second(app::AbilityType__Enum::Regenerate);

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

RANDOMIZER_C_DLLEXPORT void
register_ability_override(app::AbilityType__Enum type, ability_override::ability_override callback) {
    ability_override::register_override(type, callback);
}

RANDOMIZER_C_DLLEXPORT void clear_ability_override(app::AbilityType__Enum type) {
    ability_override::clear_override(type);
}
