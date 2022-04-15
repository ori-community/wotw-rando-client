#include <uber_states/uber_state_interface.h>

#include <Il2CppModLoader/console.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>

#include <vector>

using namespace modloader::console;

namespace
{
    uber_states::UberState sword_speed(UberStateGroup::RandoUpgrade, 1);

    float initial_charge_time = -1.f;
    IL2CPP_INTERCEPT(Moon, MeleeComboMoveSwordCharge, void, EnterMove, (app::MeleeComboMoveSwordCharge* this_ptr)) {
        if (initial_charge_time < 0)
            initial_charge_time = this_ptr->fields.ChargeTime;

        float sword_speed_multiplier = sword_speed.get<float>();
        this_ptr->fields.ChargeTime = initial_charge_time * sword_speed_multiplier;
        if (this_ptr->fields._.AttackTimeline != nullptr)
            il2cpp::invoke(this_ptr->fields._.AttackTimeline, "SetTimeScale", &sword_speed_multiplier);

        EnterMove(this_ptr);
    }

    IL2CPP_INTERCEPT(, MeleeComboMoveSwordAirDown, void, EnterMove, (app::MeleeComboMoveSwordAirDown* this_ptr)) {
        float sword_speed_multiplier = sword_speed.get<float>();
        if (this_ptr->fields._.AttackTimeline != nullptr)
            il2cpp::invoke(this_ptr->fields._.AttackTimeline, "SetTimeScale", &sword_speed_multiplier);

        EnterMove(this_ptr);
    }

    IL2CPP_INTERCEPT(, MeleeComboMoveSword, void, EnterMove, (app::MeleeComboMoveSword* this_ptr)) {
        float sword_speed_multiplier = sword_speed.get<float>();
        if (this_ptr->fields.AttackTimeline != nullptr)
            il2cpp::invoke(this_ptr->fields.AttackTimeline, "SetTimeScale", &sword_speed_multiplier);

        EnterMove(this_ptr);
    }
}

