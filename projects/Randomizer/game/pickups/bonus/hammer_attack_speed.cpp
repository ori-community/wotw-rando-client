#include <Core/api/uber_states/uber_state.h>

#include <Core/api/game/player.h>

#include <Modloader/app/methods/MeleeComboMoveHammer.h>
#include <Modloader/app/methods/MeleeComboMoveHammerChargeable.h>
#include <Modloader/app/methods/MeleeComboMoveHammerSimple.h>
#include <Modloader/app/methods/MeleeComboMoveHammerStomp.h>
#include <Modloader/app/methods/Moon/Timeline/MoonTimeline.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>

using namespace modloader;
using namespace app::classes;

namespace {
    core::api::uber_states::UberState hammer_speed(UberStateGroup::RandoUpgrade, 0);

    void set_timeline_time_scale_if_not_null(app::MoonTimeline* timeline, const float& time_scale) {
        if (timeline != nullptr)
            Moon::Timeline::MoonTimeline::SetTimeScale(timeline, time_scale);
    }

    IL2CPP_INTERCEPT(MeleeComboMoveHammerSimple, void, EnterMove, (app::MeleeComboMoveHammerSimple * this_ptr)) {
        auto hammer_speed_multiplier = hammer_speed.get<float>();

        set_timeline_time_scale_if_not_null(this_ptr->fields.PrepareAttackTimeline, hammer_speed_multiplier);
        set_timeline_time_scale_if_not_null(this_ptr->fields.AttackTimeline, hammer_speed_multiplier);

        next::MeleeComboMoveHammerSimple::EnterMove(this_ptr);
    }

    IL2CPP_INTERCEPT(MeleeComboMoveHammer, void, EnterMove, (app::MeleeComboMoveHammer * this_ptr)) {
        auto hammer_speed_multiplier = hammer_speed.get<float>();

        set_timeline_time_scale_if_not_null(this_ptr->fields.PrepareTimeline, hammer_speed_multiplier);
        set_timeline_time_scale_if_not_null(this_ptr->fields.AttackTimeline, hammer_speed_multiplier);
        set_timeline_time_scale_if_not_null(this_ptr->fields.ChargeTimeline, hammer_speed_multiplier);

        next::MeleeComboMoveHammer::EnterMove(this_ptr);
    }

    IL2CPP_INTERCEPT(MeleeComboMoveHammerChargeable, void, EnterMove, (app::MeleeComboMoveHammerChargeable * this_ptr)) {
        auto hammer_speed_multiplier = hammer_speed.get<float>();

        set_timeline_time_scale_if_not_null(this_ptr->fields.PrepareTimeline, hammer_speed_multiplier);
        set_timeline_time_scale_if_not_null(this_ptr->fields.ChargeHoldTimeline, hammer_speed_multiplier);
        set_timeline_time_scale_if_not_null(this_ptr->fields.ChargedAttackTimeline, hammer_speed_multiplier);
        set_timeline_time_scale_if_not_null(this_ptr->fields.NormalAttackTimeline, hammer_speed_multiplier);

        next::MeleeComboMoveHammerChargeable::EnterMove(this_ptr);
    }

    IL2CPP_INTERCEPT(MeleeComboMoveHammerStomp, void, EnterStartState, (app::MeleeComboMoveHammerStomp * this_ptr)) {
        auto hammer_speed_multiplier = hammer_speed.get<float>();

        set_timeline_time_scale_if_not_null(this_ptr->fields.LoopTimeline, hammer_speed_multiplier);
        set_timeline_time_scale_if_not_null(this_ptr->fields.StartTimeline, hammer_speed_multiplier);
        set_timeline_time_scale_if_not_null(this_ptr->fields.EndTimeline, hammer_speed_multiplier);
        set_timeline_time_scale_if_not_null(this_ptr->fields.StartShortTimeline, hammer_speed_multiplier);
        set_timeline_time_scale_if_not_null(this_ptr->fields.EndShortTimeline, hammer_speed_multiplier);

        next::MeleeComboMoveHammerStomp::EnterStartState(this_ptr);
    }
} // namespace
