#include <uber_states/uber_state_interface.h>

#include <Il2CppModLoader/interception_macros.h>
#include <Il2CppModLoader/app/methods/Moon/MeleeComboMoveSwordCharge.h>
#include <Il2CppModLoader/app/methods/Moon/Timeline/MoonTimeline.h>
#include <Il2CppModLoader/app/methods/MeleeComboMoveSwordAirDown.h>
#include <Il2CppModLoader/app/methods/MeleeComboMoveSword.h>

#include <vector>

using namespace app::methods;

namespace {
    uber_states::UberState sword_speed(UberStateGroup::RandoUpgrade, 1);

    float initial_charge_time = -1.f;
    IL2CPP_INTERCEPT(Moon::MeleeComboMoveSwordCharge, void, EnterMove, (app::MeleeComboMoveSwordCharge * this_ptr)) {
        if (initial_charge_time < 0)
            initial_charge_time = this_ptr->fields.ChargeTime;

        float sword_speed_multiplier = sword_speed.get<float>();
        this_ptr->fields.ChargeTime = initial_charge_time * sword_speed_multiplier;
        if (this_ptr->fields._.AttackTimeline != nullptr)
            Moon::Timeline::MoonTimeline::SetTimeScale(this_ptr->fields._.AttackTimeline, sword_speed_multiplier);

        next::Moon::MeleeComboMoveSwordCharge::EnterMove(this_ptr);
    }

    IL2CPP_INTERCEPT(MeleeComboMoveSwordAirDown, void, EnterMove, (app::MeleeComboMoveSwordAirDown * this_ptr)) {
        float sword_speed_multiplier = sword_speed.get<float>();
        if (this_ptr->fields._.AttackTimeline != nullptr)
            Moon::Timeline::MoonTimeline::SetTimeScale(this_ptr->fields._.AttackTimeline, sword_speed_multiplier);

        next::MeleeComboMoveSwordAirDown::EnterMove(this_ptr);
    }

    IL2CPP_INTERCEPT(MeleeComboMoveSword, void, EnterMove, (app::MeleeComboMoveSword * this_ptr)) {
        float sword_speed_multiplier = sword_speed.get<float>();
        if (this_ptr->fields.AttackTimeline != nullptr)
            Moon::Timeline::MoonTimeline::SetTimeScale(this_ptr->fields.AttackTimeline, sword_speed_multiplier);

        next::MeleeComboMoveSword::EnterMove(this_ptr);
    }
} // namespace
