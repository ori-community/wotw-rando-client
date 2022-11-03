#include <Randomizer/macros.h>
#include <Core/uber_states/uber_state_interface.h>

#include <Modloader/interception_macros.h>
#include <Modloader/app/methods/SeinMeditateSpell.h>

using namespace app::classes;

namespace {
    uber_states::UberState regenerate_speed(UberStateGroup::RandoUpgrade, 91);

    bool initialized = false;
    float default_delay_before_charging = 0.5f;
    float default_delay_between_heals = 0.5f;
    float default_heal_duration = 0.5f;

    IL2CPP_INTERCEPT(SeinMeditateSpell, void, UpdateLoop, (app::SeinMeditateSpell* this_ptr)) {
        if (!initialized) {
            default_delay_before_charging = this_ptr->fields.DelayBeforeCharging;
            default_delay_between_heals = this_ptr->fields.DelayBetweenHeals;
            default_heal_duration = this_ptr->fields.HealDuration;
            initialized = true;
        }

        this_ptr->fields.DelayBeforeCharging = default_delay_before_charging / regenerate_speed.get<float>();
        this_ptr->fields.DelayBetweenHeals = default_delay_between_heals / regenerate_speed.get<float>();
        this_ptr->fields.HealDuration = default_heal_duration / regenerate_speed.get<float>();

        next::SeinMeditateSpell::UpdateLoop(this_ptr);
    }
} // namespace
