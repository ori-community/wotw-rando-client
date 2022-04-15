#include <constants.h>
#include <randomizer/conditions/new_setup_state_override.h>
#include <uber_states/uber_state_interface.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/console.h>
#include <Il2CppModLoader/interception_macros.h>

#include <interop/csharp_bridge.h>

namespace
{
    bool is_tree(app::AbilityType__Enum tree)
    {
        return tree_abilities.find(tree) != tree_abilities.end();
    }

    IL2CPP_INTERCEPT(Moon.uberSerializationWisp, DesiredPlayerAbilityState, bool, IsFulfilled, (app::DesiredPlayerAbilityState* this_ptr)) {
        if (is_tree(this_ptr->fields.Ability))
            return csharp_bridge::is_tree_activated(this_ptr->fields.Ability);
        else
            return DesiredPlayerAbilityState::IsFulfilled(this_ptr);
    }

    IL2CPP_INTERCEPT(, GetAbilityOnCondition, void, AssignAbility, (app::GetAbilityOnCondition* this_ptr)) {
        auto ability = this_ptr->fields.Ability->fields.Ability;
        if (is_tree(ability))
        {
            uber_states::UberState(UberStateGroup::Tree, ability).set(1);
            csharp_bridge::on_tree(ability);
            // Update PlayerDescriptorUberState
            uber_states::UberState(static_cast<UberStateGroup>(3440), 37811).apply();
        }
    }
}
