#include <Core/api/uber_states/uber_state.h>
#include <Modloader/app/methods/SeinSpiritSpearSpell.h>
#include <Modloader/interception_macros.h>
#include <Randomizer/uber_states/randomizer_uber_states.h>


namespace {
    auto& spear_speed_state = randomizer::uber_states::state<"randoUpgrades", "spearSpeedMultiplier">();

    auto initialized = false;
    auto charge_duration = 1.0f;
    auto settle_duration = 1.0f;
    auto impact_duration = 1.0f;
    auto input_duration = 1.0f;

    IL2CPP_INTERCEPT(void, SeinSpiritSpearSpell, UpdateCharacterState, app::SeinSpiritSpearSpell * this_ptr) {
        if (!initialized) {
            charge_duration = this_ptr->fields.ChargeDuration;
            settle_duration = this_ptr->fields.SettleTime;
            impact_duration = this_ptr->fields.ImpactDuration;
            input_duration = this_ptr->fields.InputMemoryDuration;
            initialized = true;
        }

        const auto multiplier = spear_speed_state.get();
        this_ptr->fields.ChargeDuration = charge_duration / multiplier;
        this_ptr->fields.SettleTime = settle_duration / multiplier;
        this_ptr->fields.ImpactDuration = impact_duration / multiplier;
        this_ptr->fields.InputMemoryDuration = input_duration / multiplier;
        next::SeinSpiritSpearSpell::UpdateCharacterState(this_ptr);
    }
} // namespace
