#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::HasAbilityCondition {
    IL2CPP_REGISTER_METHOD(0x0109D1F0, bool, Validate, (app::HasAbilityCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::HasAbilityCondition * this_ptr))
} // namespace app::classes::HasAbilityCondition
