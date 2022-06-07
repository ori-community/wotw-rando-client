#include <constants.h>
#include <game/game.h>
#include <game/player.h>
#include <uber_states/uber_state_interface.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/interception.h>
#include <Il2CppModLoader/interception_macros.h>
#include <Il2CppModLoader/app/methods/SeinGlide.h>
#include <Il2CppModLoader/app/methods/SeinFeatherFlap.h>

namespace {
    bool temporary_glide_switch = false;

    IL2CPP_INTERCEPT(SeinGlide, bool, get_CanGlide, (app::SeinGlide * this_ptr)) {
        if (temporary_glide_switch)
            return false;

        return next::SeinGlide::get_CanGlide(this_ptr);
    }

    IL2CPP_INTERCEPT(SeinFeatherFlap, void, EnterAttack, (app::SeinFeatherFlap * this_ptr)) {
        if (!game::player::has_ability(app::AbilityType__Enum::Glide)) {
            temporary_glide_switch = true;
            game::player::set_ability(app::AbilityType__Enum::Glide, true);
        }

        next::SeinFeatherFlap::EnterAttack(this_ptr);
    }

    uber_states::UberState glide(UberStateGroup::RandoState, 1014);
    IL2CPP_INTERCEPT(SeinFeatherFlap, void, ExitAttack, (app::SeinFeatherFlap * this_ptr)) {
        next::SeinFeatherFlap::ExitAttack(this_ptr);
        if (temporary_glide_switch) {
            // If we picked up glide in the meantime don't remove it.
            if (!glide.get<bool>())
                game::player::set_ability(app::AbilityType__Enum::Glide, false);

            temporary_glide_switch = false;
        }
    }

    void handle_enter_switches() {
        if (temporary_glide_switch)
            game::player::set_ability(app::AbilityType__Enum::Glide, false);
    }

    void handle_exit_switches() {
        if (temporary_glide_switch)
            game::player::set_ability(app::AbilityType__Enum::Glide, true);
    }

    void initialize() {
        game::event_bus();
    }

    CALL_ON_INIT(initialize);
} // namespace
