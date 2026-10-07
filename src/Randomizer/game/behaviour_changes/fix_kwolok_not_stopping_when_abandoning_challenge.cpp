#include <Core/api/scenes/scene_load.h>
#include <Core/api/uber_states/uber_state_handlers.h>
#include <Core/uber_states/core_uber_states.h>
#include <Modloader/app/methods/Moon/Timeline/TimelineEntity.h>
#include <Modloader/app/methods/PerformBackOutAction__AbandonChallange_d__8.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>


using namespace app::classes;

namespace {
    auto is_abandoning_challenge = false;

    IL2CPP_INTERCEPT(bool, PerformBackOutAction__AbandonChallange_d__8, MoveNext, app::PerformBackOutAction_AbandonChallange_d_8* this_ptr) {
        common::ScopedSetter _(is_abandoning_challenge, true);
        return next::PerformBackOutAction__AbandonChallange_d__8::MoveNext(this_ptr);
    }

    IL2CPP_INTERCEPT(void, Moon::Timeline::TimelineEntity, StopPlayback, app::TimelineEntity* this_ptr) {
        if (!is_abandoning_challenge) {
            next::Moon::Timeline::TimelineEntity::StopPlayback(this_ptr);
            return;
        }

        auto handle = core::api::uber_states::event_bus().on<core::api::uber_states::events::BeforeUberStateChange>(
            core::uber_states::state<"lagoonStateGroup", "kwolokBossState">(),
            [](const auto& event) {
                // When pressing "Abandon Challenge" and the last checkpoint is far away from the Kwolok
                // escape, the timeline game object gets disabled which causes the OnStop action to
                // set the fight state to 3 again.
                if (event.new_value == 3) {
                    event.prevent_change = true;
                }
            }
        );

        next::Moon::Timeline::TimelineEntity::StopPlayback(this_ptr);
    }
} // namespace
