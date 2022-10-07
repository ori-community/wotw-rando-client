#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/interception_macros.h>
#include <Il2CppModLoader/app/methods/PlayerAbilities.h>
#include <Il2CppModLoader/app/types/DebugValues.h>

using namespace app::classes;
using namespace modloader;

namespace {
    IL2CPP_INTERCEPT(PlayerAbilities, void, SetAbility, (app::PlayerAbilities * this_ptr, app::AbilityType__Enum ability, bool value)) {
        auto debug_values = types::DebugValues::get_class();
        ScopedSetter is_blind_forest(debug_values->static_fields->IsBlindForestMode, true);
        next::PlayerAbilities::SetAbility(this_ptr, ability, value);
    }
} // namespace
