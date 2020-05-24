#include "pch.h"

#include <set>
#include "dllmain.h"
#include "interceptionMacros.h"

const std::set<char> treeAbilities{0, 5, 8, 23, 51, 57, 62, 77, 97, 100, 101, 102, 103, 104, 117, 121};
bool isTree(char tree){
    return treeAbilities.find(tree) != treeAbilities.end();
}

INTERCEPT(0x1105510, bool, sub180FC4D50, (__int64 garbage, Moon_IUberState_o* uberState), {
    //Called from PlayerStateMap.Mapping::Matches    
    bool result = sub180FC4D50(garbage, uberState);
    uint8_t ability = *(uint8_t*) (garbage + 8);    
    if(isTree(ability))
        result = CSharpLib->call<bool, BYTE>("DoInvertTree", ability) ^ result;
    return result;
});

INTERCEPT(10404368, void, GetAbilityOnCondition__AssignAbility, (GetAbilityOnCondition_o* this_ptr), {
    //GetAbilityOnCondition$$AssignAbility        
    auto ability = this_ptr->Ability->Ability;
    if(isTree(ability))
        CSharpLib->call<void>("OnTree", ability );
});

INTERCEPT(17845472, bool, Moon_uberSerializationWisp_DesiredPlayerAbilityState__IsFulfilled, (Moon_uberSerializationWisp_DesiredPlayerAbilityState_o* this_ptr, __int64 contextPtr), {
    //Moon.uberSerializationWisp.DesiredPlayerAbilityState$$IsFulfilled
    auto ability = this_ptr->Ability;
    if(isTree(ability))
        return CSharpLib->call<bool>("TreeFulfilled", ability);    
    else
        return Moon_uberSerializationWisp_DesiredPlayerAbilityState__IsFulfilled(this_ptr, contextPtr);
});