#include <macros.h>
#include <uber_states/uber_state_interface.h>

#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>

namespace {
    uber_states::UberState spear_speed(UberStateGroup::RandoUpgrade, 11);
    bool initialized = false;

    float charge_duration = 1.0f;
    float settle_duration = 1.0f;
    float impact_duration = 1.0f;
    float input_duration = 1.0f;

    IL2CPP_INTERCEPT(, SeinSpiritSpearSpell, void, UpdateCharacterState, (app::SeinSpiritSpearSpell * this_ptr)) {
        if (!initialized) {
            charge_duration = this_ptr->fields.ChargeDuration;
            settle_duration = this_ptr->fields.SettleTime;
            impact_duration = this_ptr->fields.ImpactDuration;
            input_duration = this_ptr->fields.InputMemoryDuration;
            initialized = true;
        }

        auto multiplier = spear_speed.get<float>();
        this_ptr->fields.ChargeDuration = charge_duration * multiplier;
        this_ptr->fields.SettleTime = settle_duration * multiplier;
        this_ptr->fields.ImpactDuration = impact_duration * multiplier;
        this_ptr->fields.InputMemoryDuration = input_duration * multiplier;
        SeinSpiritSpearSpell::UpdateCharacterState(this_ptr);
    }
} // namespace
