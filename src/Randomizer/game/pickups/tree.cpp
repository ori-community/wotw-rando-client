#include <Randomizer/constants.h>

#include <Core/api/game/player.h>
#include <Core/api/uber_states/uber_state.h>

#include <Modloader/app/methods/GetAbilityOnCondition.h>
#include <Modloader/app/methods/Moon/uberSerializationWisp/DesiredPlayerAbilityState.h>
#include <Modloader/interception_macros.h>

namespace {
    bool is_tree(app::AbilityType__Enum tree) {
        return tree_abilities.find(tree) != tree_abilities.end();
    }

    IL2CPP_INTERCEPT(bool, Moon::uberSerializationWisp::DesiredPlayerAbilityState, IsFulfilled, app::DesiredPlayerAbilityState * this_ptr) {
        if (is_tree(this_ptr->fields.Ability)) {
            return core::api::uber_states::UberState(UberStateGroup::Tree, static_cast<int>(this_ptr->fields.Ability)).get<bool>();
        } else {
            return next::Moon::uberSerializationWisp::DesiredPlayerAbilityState::IsFulfilled(this_ptr);
        }
    }

    IL2CPP_INTERCEPT(void, GetAbilityOnCondition, AssignAbility, app::GetAbilityOnCondition * this_ptr) {
        auto ability = this_ptr->fields.Ability->fields.Ability;
        if (is_tree(ability)) {
            core::api::uber_states::UberState(UberStateGroup::Tree, static_cast<int>(ability)).set(1);
            core::api::uber_states::UberState(0, static_cast<int>(ability)).set(true);
            core::api::game::player::refill_health();
            core::api::game::player::refill_energy();
            core::api::uber_states::UberState(static_cast<UberStateGroup>(3440), 37811).apply();
        }
    }
} // namespace
