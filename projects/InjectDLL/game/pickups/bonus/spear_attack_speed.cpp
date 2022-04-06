#include <macros.h>

#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>
#include <uber_states\uber_state_manager.h>

namespace
{
    constexpr int SPEAR_SPEED_ID = 11;

    bool initialized = false;

    float charge_duration = 1.0f;
    float settle_duration = 1.0f;
    float impact_duration = 1.0f;
    float input_duration = 1.0f;

    IL2CPP_INTERCEPT(, SeinSpiritSpearSpell, void, UpdateCharacterState, (app::SeinSpiritSpearSpell* this_ptr)) {
        if (!initialized) {
            charge_duration = this_ptr->fields.ChargeDuration;
            settle_duration = this_ptr->fields.SettleTime;
            impact_duration = this_ptr->fields.ImpactDuration;
            input_duration = this_ptr->fields.InputMemoryDuration;
            initialized = true;
        }

        auto multiplier = static_cast<float>(uber_states::get_uber_state_value(uber_states::constants::RANDO_UPGRADE_GROUP_ID, SPEAR_SPEED_ID));
        this_ptr->fields.ChargeDuration = charge_duration * multiplier;
        this_ptr->fields.SettleTime = settle_duration * multiplier;
        this_ptr->fields.ImpactDuration = impact_duration * multiplier;
        this_ptr->fields.InputMemoryDuration = input_duration * multiplier;
        SeinSpiritSpearSpell::UpdateCharacterState(this_ptr);
    }
}
