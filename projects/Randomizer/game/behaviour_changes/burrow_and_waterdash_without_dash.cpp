#include <Core/api/game/player.h>

#include <Core/api/uber_states/uber_state.h>
#include <Core/property/reactivity.h>

#include <Modloader/app/methods/Moon/uberSerializationWisp/PlayerUberStateAbilities.h>
#include <Modloader/app/methods/PlayerAbilities.h>
#include <Modloader/app/methods/SeinLogicCycle.h>
#include <Modloader/app/methods/SeinPrefabFactory.h>
#include <Modloader/app/methods/SeinDashNew.h>
#include <Modloader/app/methods/Moon/uberSerializationWisp/PlayerUberStateDescriptor.h>
#include <Modloader/interception.h>
#include <Modloader/modloader.h>

using namespace app::classes;

namespace {
    auto override_has_ability = false;

    IL2CPP_INTERCEPT(SeinPrefabFactory, void, EnsureRightPrefabsAreThereForAbilities, (app::SeinPrefabFactory * this_ptr)) {
        override_has_ability = true;
        next::SeinPrefabFactory::EnsureRightPrefabsAreThereForAbilities(this_ptr);
        override_has_ability = false;
    }

    IL2CPP_INTERCEPT(SeinLogicCycle, bool, get_AllowDashNew, (app::SeinLogicCycle * this_ptr)) {
        modloader::ScopedSetter _(override_has_ability, true);
        return next::SeinLogicCycle::get_AllowDashNew(this_ptr);
    }

    IL2CPP_INTERCEPT(PlayerAbilities, bool, HasAbility, (app::PlayerAbilities * this_ptr, app::AbilityType__Enum ability)) {
        // There's a cache. Bypass that for Dash.
        if (ability == app::AbilityType__Enum::DashNew) {
            const auto descriptor = Moon::uberSerializationWisp::PlayerUberStateDescriptor::get_Value(this_ptr->fields.StateDescriptor);
            return Moon::uberSerializationWisp::PlayerUberStateAbilities::HasAbility(descriptor->fields.Abilities, app::AbilityType__Enum::DashNew);
        }

        return next::PlayerAbilities::HasAbility(this_ptr, ability);
    }

    IL2CPP_INTERCEPT(Moon::uberSerializationWisp::PlayerUberStateAbilities, bool, HasAbility, (app::PlayerUberStateAbilities * this_ptr, app::AbilityType__Enum ability)) {
        if (override_has_ability && ability == app::AbilityType__Enum::DashNew) {
            return
                next::Moon::uberSerializationWisp::PlayerUberStateAbilities::HasAbility(this_ptr, app::AbilityType__Enum::DashNew) ||
                next::Moon::uberSerializationWisp::PlayerUberStateAbilities::HasAbility(this_ptr, app::AbilityType__Enum::Digging) ||
                next::Moon::uberSerializationWisp::PlayerUberStateAbilities::HasAbility(this_ptr, app::AbilityType__Enum::WaterDash);
        }

        return next::Moon::uberSerializationWisp::PlayerUberStateAbilities::HasAbility(this_ptr, ability);
    }

    IL2CPP_INTERCEPT(SeinDashNew, bool, get_CanDash, (app::SeinDashNew * this_ptr)) {
        auto result = next::SeinDashNew::get_CanDash(this_ptr);

        if (!core::api::game::player::ability(app::AbilityType__Enum::DashNew).get()) {
            result = result && (SeinDashNew::ShouldDig(this_ptr) || SeinDashNew::ShouldSwim(this_ptr));
        }

        return result;
    }
} // namespace
