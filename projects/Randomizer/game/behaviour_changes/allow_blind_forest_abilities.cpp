#include <Modloader/app/methods/PlayerAbilities.h>
#include <Modloader/app/types/DebugValues.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>

using namespace app::classes;
using namespace modloader;

namespace {
    IL2CPP_INTERCEPT(void, PlayerAbilities, SetAbility, app::PlayerAbilities * this_ptr, app::AbilityType__Enum ability, bool value) {
        auto debug_values = types::DebugValues::get_class();
        ScopedSetter is_blind_forest(debug_values->static_fields->IsBlindForestMode, true);
        next::PlayerAbilities::SetAbility(this_ptr, ability, value);
    }
} // namespace
