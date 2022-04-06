#include <constants.h>
#include <uber_states/uber_state_manager.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/interception_macros.h>

#include <interop/csharp_bridge.h>

namespace
{
    bool is_tree(app::AbilityType__Enum tree)
    {
        return tree_abilities.find(tree) != tree_abilities.end();
    }

    bool test = false;
    // 0x1105510
    //INTERNAL_INTERCEPT(0xf31a30, bool, PlayerStateMap_Matches_Helper, (app::PlayerStateMap_Mapping* state_map, app::IUberState* uberState)) {
    //    if (!test)
    //        return csharp_bridge::is_tree_activated(state_map->m_ability) ^ (state_map->m_matchType != 0);
    //
    //    // Return if we have ability, state_map->m_matchType inverts result.
    //    if (is_tree(state_map->m_ability))
    //        return csharp_bridge::is_tree_activated(state_map->m_ability) ^ (state_map->m_matchType != 0);
    //    else
    //        return PlayerStateMap_Matches_Helper(state_map, uberState);
    //}

    /*NESTED_IL2CPP_INTERCEPT(Moon.uberSerializationWisp, PlayerStateMap, Mapping, bool, Matches, (app::PlayerStateMap_Mapping* state_map, app::IUberState* uberState)) {
        // Return if we have ability, state_map->m_matchType inverts result.
        if (is_tree(state_map->m_ability))
            return csharp_bridge::is_tree_activated(state_map->m_ability) ^ (state_map->m_matchType != 0);
        else
            return PlayerStateMap_Mapping_Matches(state_map, uberState);
    }*/

    IL2CPP_INTERCEPT(, GetAbilityOnCondition, void, AssignAbility, (app::GetAbilityOnCondition* this_ptr)) {
        //GetAbilityOnCondition$$AssignAbility        
        auto ability = this_ptr->fields.Ability->fields.Ability;
        if (is_tree(ability))
        {
            uber_states::set_uber_state_value(uber_states::constants::TREE_GROUP_ID, ability, 1);
            csharp_bridge::on_tree(ability);
            // Update PlayerDescriptorUberState
            auto uber_state = uber_states::get_uber_state(3440, 37811);
            uber_states::apply_uber_state_no_notify(uber_state);
        }
    }

    IL2CPP_INTERCEPT(Moon.uberSerializationWisp, DesiredPlayerAbilityState, bool, IsFulfilled, (app::DesiredPlayerAbilityState* this_ptr)) {
        if (is_tree(this_ptr->fields.Ability))
            return csharp_bridge::is_tree_activated(this_ptr->fields.Ability);
        else
            return DesiredPlayerAbilityState::IsFulfilled(this_ptr);
    }
}
