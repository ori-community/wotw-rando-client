#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::DamageResolver {
    IL2CPP_REGISTER_METHOD(0x01200D00, void, AddRuleOverrides, (app::DamageResolver * this_ptr, app::DamageResolver_Rule__Array* rules_to_override))
    IL2CPP_REGISTER_METHOD(0x01200E10, void, RemoveRuleOverrides_1, (app::DamageResolver * this_ptr, app::DamageResolver_Rule__Array* rules_to_remove))
    IL2CPP_REGISTER_METHOD(0x01200F00, void, RemoveRuleOverrides_2, (app::DamageResolver * this_ptr, app::DamageType__Enum__Array* rules_to_remove))
    IL2CPP_REGISTER_METHOD(0x01200FE0, void, ResolveDamage, (app::DamageResolver * this_ptr, app::DamageResult* damage_tick_result))
    IL2CPP_REGISTER_METHOD(0x012011F0, void, ctor, (app::DamageResolver * this_ptr))
} // namespace app::classes::Moon::DamageResolver
