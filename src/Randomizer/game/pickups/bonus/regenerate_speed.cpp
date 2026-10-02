#include <Core/api/uber_states/uber_state.h>
#include <Modloader/app/methods/SeinMeditateSpell.h>
#include <Modloader/interception_macros.h>
#include <Randomizer/uber_states/randomizer_uber_states.h>


using namespace app::classes;

namespace {
    auto& regenerate_speed_state = randomizer::uber_states::state<"randoUpgrades", "regenerateSpeedMultiplier">();

    bool initialized = false;
    float default_delay_before_charging = 0.5f;
    float default_delay_between_heals = 0.5f;
    float default_heal_duration = 0.5f;

    IL2CPP_INTERCEPT(void, SeinMeditateSpell, UpdateLoop, app::SeinMeditateSpell * this_ptr) {
        if (!initialized) {
            default_delay_before_charging = this_ptr->fields.DelayBeforeCharging;
            default_delay_between_heals = this_ptr->fields.DelayBetweenHeals;
            default_heal_duration = this_ptr->fields.HealDuration;
            initialized = true;
        }

        this_ptr->fields.DelayBeforeCharging = default_delay_before_charging / regenerate_speed_state.get();
        this_ptr->fields.DelayBetweenHeals = default_delay_between_heals / regenerate_speed_state.get();
        this_ptr->fields.HealDuration = default_heal_duration / regenerate_speed_state.get();

        next::SeinMeditateSpell::UpdateLoop(this_ptr);
    }
} // namespace
