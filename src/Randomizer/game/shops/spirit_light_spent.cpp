#include <Core/api/uber_states/uber_state.h>
#include <Modloader/app/methods/SpellUIExperience.h>
#include <Modloader/interception_macros.h>
#include <Randomizer/uber_states/randomizer_uber_states.h>


namespace {
    auto& spirit_light_spent_state = randomizer::uber_states::state<"randoStats", "spiritLightSpent">();

    IL2CPP_INTERCEPT(bool, SpellUIExperience, Spend, app::SpellUIExperience * this_ptr, int amount) {
        const auto worked = next::SpellUIExperience::Spend(this_ptr, amount);
        if (worked) {
            spirit_light_spent_state.set(amount + spirit_light_spent_state.get());
        }
        return worked;
    };
} // namespace
