#include <Core/api/uber_states/uber_state.h>

#include <Modloader/app/methods/SpellUIExperience.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>

namespace {
    core::api::uber_states::UberState spirit_light_spent(UberStateGroup::RandoStats, 4);
    IL2CPP_INTERCEPT(SpellUIExperience, bool, Spend, (app::SpellUIExperience * this_ptr, int amount)) {
        bool worked = next::SpellUIExperience::Spend(this_ptr, amount);
        if (worked)
            spirit_light_spent.set(amount + spirit_light_spent.get());
        return worked;
    };
} // namespace
