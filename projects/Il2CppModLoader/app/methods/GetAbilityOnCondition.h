#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::GetAbilityOnCondition {
    IL2CPP_REGISTER_METHOD(0x00446590, bool, ShouldCreateCheckpoint, (app::GetAbilityOnCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A1B030, void, Reset, (app::GetAbilityOnCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E11930, void, FixedUpdate, (app::GetAbilityOnCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E11A50, void, AssignAbility, (app::GetAbilityOnCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E11BA0, void, OnSkipCutscene, (app::GetAbilityOnCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00626870, void, ctor, (app::GetAbilityOnCondition * this_ptr))
}
