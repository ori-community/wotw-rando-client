#include <Core/api/uber_states/uber_state.h>

#include <Modloader/app/methods/MeleeComboMoveSword.h>
#include <Modloader/app/methods/MeleeComboMoveSwordAirDown.h>
#include <Modloader/app/methods/Moon/MeleeComboMoveSwordCharge.h>
#include <Modloader/app/methods/Moon/Timeline/MoonTimeline.h>
#include <Modloader/interception_macros.h>

#include <vector>

using namespace app::classes;

namespace {
    core::api::uber_states::UberState sword_speed(UberStateGroup::RandoUpgrade, 1);

    float initial_charge_time = -1.f;
    IL2CPP_INTERCEPT(void, Moon::MeleeComboMoveSwordCharge, EnterMove, app::MeleeComboMoveSwordCharge * this_ptr) {
        if (initial_charge_time < 0)
            initial_charge_time = this_ptr->fields.ChargeTime;

        float sword_speed_multiplier = sword_speed.get<float>();
        this_ptr->fields.ChargeTime = initial_charge_time * sword_speed_multiplier;
        if (this_ptr->fields._.AttackTimeline != nullptr)
            Moon::Timeline::MoonTimeline::SetTimeScale(this_ptr->fields._.AttackTimeline, sword_speed_multiplier);

        next::Moon::MeleeComboMoveSwordCharge::EnterMove(this_ptr);
    }

    IL2CPP_INTERCEPT(void, MeleeComboMoveSwordAirDown, EnterMove, app::MeleeComboMoveSwordAirDown * this_ptr) {
        float sword_speed_multiplier = sword_speed.get<float>();
        if (this_ptr->fields._.AttackTimeline != nullptr)
            Moon::Timeline::MoonTimeline::SetTimeScale(this_ptr->fields._.AttackTimeline, sword_speed_multiplier);

        next::MeleeComboMoveSwordAirDown::EnterMove(this_ptr);
    }

    IL2CPP_INTERCEPT(void, MeleeComboMoveSword, EnterMove, app::MeleeComboMoveSword * this_ptr) {
        float sword_speed_multiplier = sword_speed.get<float>();
        if (this_ptr->fields.AttackTimeline != nullptr)
            Moon::Timeline::MoonTimeline::SetTimeScale(this_ptr->fields.AttackTimeline, sword_speed_multiplier);

        next::MeleeComboMoveSword::EnterMove(this_ptr);
    }
} // namespace
