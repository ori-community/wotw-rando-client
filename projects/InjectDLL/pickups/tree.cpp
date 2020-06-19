#include <pch.h>
#include <constants.h>
#include <interception_macros.h>
#include <dll_main.h>

namespace
{
    bool is_tree(char tree)
    {
        return tree_abilities.find(tree) != tree_abilities.end();
    }
}

INTERCEPT(0x1105510, bool, sub180FC4D50, (__int64 garbage, Moon_IUberState_o* uberState), {
    //Called from PlayerStateMap.Mapping::Matches    
    bool result = sub180FC4D50(garbage, uberState);
    uint8_t ability = *(uint8_t*) (garbage + 8);    
    if (is_tree(ability)) 
      result = (csharp_lib->call<bool, BYTE>("IsTreeActivated", ability) ^ has_ability(ability)) ^ result;
    

    return result;
});

INTERCEPT(10404368, void, GetAbilityOnCondition__AssignAbility, (GetAbilityOnCondition_o* this_ptr), {
    //GetAbilityOnCondition$$AssignAbility        
    auto ability = this_ptr->Ability->Ability;
    if(is_tree(ability))
        csharp_lib->call<void>("OnTree", ability );
});

INTERCEPT(17845472, bool, Moon_uberSerializationWisp_DesiredPlayerAbilityState__IsFulfilled, (Moon_uberSerializationWisp_DesiredPlayerAbilityState_o* this_ptr, __int64 contextPtr), {
    //Moon.uberSerializationWisp.DesiredPlayerAbilityState$$IsFulfilled
    auto ability = this_ptr->Ability;
    if(is_tree(ability))
        return csharp_lib->call<bool>("IsTreeActivated", ability);    
    else
        return Moon_uberSerializationWisp_DesiredPlayerAbilityState__IsFulfilled(this_ptr, contextPtr);
});
