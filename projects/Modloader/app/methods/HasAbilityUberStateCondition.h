#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/HasAbilityUberStateCondition.h>

namespace app::classes::HasAbilityUberStateCondition {
    IL2CPP_REGISTER_METHOD(0x0109D340, app::AbilityType__Enum, get_AbilityType, (app::HasAbilityUberStateCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0109D3F0, bool, get_HasAbility, (app::HasAbilityUberStateCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0109D4A0, void, ctor, (app::HasAbilityUberStateCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0109D670, bool, Validate, (app::HasAbilityUberStateCondition * this_ptr))
} // namespace app::classes::HasAbilityUberStateCondition
