#include <constants.h>
#include <interception_macros.h>
#include <dll_main.h>

#include <csharp_bridge.h>

namespace
{
    bool is_tree(char tree)
    {
        return tree_abilities.find(tree) != tree_abilities.end();
    }
}

INTERCEPT(0x1105510, bool, sub180FC4D50, (__int64 garbage, app::IUberState* uberState)) {
    //Called from PlayerStateMap.Mapping::Matches    
    bool result = sub180FC4D50(garbage, uberState);
    uint8_t ability = *(uint8_t*) (garbage + 8);
    if (is_tree(ability))
        result = (csharp_bridge::is_tree_activated(static_cast<csharp_bridge::AbilityType>(ability)) ^ has_ability(ability)) ^ result;

    return result;
}

INTERCEPT(10404368, void, GetAbilityOnCondition__AssignAbility, (app::GetAbilityOnCondition* this_ptr)) {
    //GetAbilityOnCondition$$AssignAbility        
    auto ability = this_ptr->fields.Ability->fields.Ability;
    if(is_tree(ability))
        csharp_bridge::on_tree(static_cast<csharp_bridge::AbilityType>(ability));
}

INTERCEPT(17845472, bool, Moon_uberSerializationWisp_DesiredPlayerAbilityState__IsFulfilled, (app::DesiredPlayerAbilityState* this_ptr, __int64 contextPtr)) {
    //Moon.uberSerializationWisp.DesiredPlayerAbilityState$$IsFulfilled
    auto ability = this_ptr->fields.Ability;
    if(is_tree(ability))
        return csharp_bridge::is_tree_activated(static_cast<csharp_bridge::AbilityType>(ability));
    else
        return Moon_uberSerializationWisp_DesiredPlayerAbilityState__IsFulfilled(this_ptr, contextPtr);
}
