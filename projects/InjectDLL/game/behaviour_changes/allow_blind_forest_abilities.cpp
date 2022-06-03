#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/interception_macros.h>

using namespace modloader;

namespace {
    IL2CPP_INTERCEPT(, PlayerAbilities, void, SetAbility, (app::PlayerAbilities * this_ptr, app::AbilityType__Enum ability, bool value)) {
        auto debug_values = il2cpp::get_class<app::DebugValues__Class>("Game", "DebugValues");
        ScopedSetter is_blind_forest(debug_values->static_fields->IsBlindForestMode, true);
        SetAbility(this_ptr, ability, value);
    }
} // namespace
