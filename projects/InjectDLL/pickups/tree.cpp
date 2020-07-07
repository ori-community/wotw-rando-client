#include <constants.h>
#include <interception_macros.h>
#include <dll_main.h>
#include <uber_states/uber_state_manager.h>

#include <csharp_bridge.h>

namespace
{
    bool is_tree(app::AbilityType__Enum tree)
    {
        return tree_abilities.find(tree) != tree_abilities.end();
    }
}

INTERCEPT(0x1105510, bool, FUN_181105510, (app::PlayerStateMap_Mapping* state_map, app::IUberState* uberState)) {
    // Return if we have ability, state_map->m_matchType inverts result.
    if (is_tree(state_map->m_ability))
        return csharp_bridge::is_tree_activated(state_map->m_ability) ^ (state_map->m_matchType != 0);
    else
        return FUN_181105510(state_map, uberState);
}

INTERCEPT(10404368, void, GetAbilityOnCondition__AssignAbility, (app::GetAbilityOnCondition* this_ptr)) {
    //GetAbilityOnCondition$$AssignAbility        
    auto ability = this_ptr->fields.Ability->fields.Ability;
    if (is_tree(ability))
    {
        csharp_bridge::on_tree(ability);
        // Update PlayerDescriptorUberState
        auto uber_state = uber_states::get_uber_state(3440, 37811);
        uber_states::apply_uber_state_no_notify(uber_state);
    }
}

INTERCEPT(17845472, bool, Moon_uberSerializationWisp_DesiredPlayerAbilityState__IsFulfilled, (app::DesiredPlayerAbilityState* this_ptr, __int64 contextPtr)) {
    //Moon.uberSerializationWisp.DesiredPlayerAbilityState$$IsFulfilled
    if (is_tree(this_ptr->fields.Ability))
        return csharp_bridge::is_tree_activated(this_ptr->fields.Ability);
    else
        return Moon_uberSerializationWisp_DesiredPlayerAbilityState__IsFulfilled(this_ptr, contextPtr);
}
