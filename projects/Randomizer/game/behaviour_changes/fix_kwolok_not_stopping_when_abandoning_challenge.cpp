#include <Core/api/scenes/scene_load.h>
#include <Core/api/uber_states/uber_state_handlers.h>
#include <Modloader/app/methods/Moon/Timeline/TimelineEntity.h>
#include <Modloader/app/methods/PerformBackOutAction__AbandonChallange_d__8.h>
#include <Modloader/app/types/SeinAbilityRestrictZone.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>

using namespace app::classes;

namespace {
    auto is_abandoning_challenge = false;

    IL2CPP_INTERCEPT(PerformBackOutAction__AbandonChallange_d__8, bool, MoveNext, (app::PerformBackOutAction_AbandonChallange_d_8* this_ptr)) {
        modloader::ScopedSetter _(is_abandoning_challenge, true);
        return next::PerformBackOutAction__AbandonChallange_d__8::MoveNext(this_ptr);
    }

    IL2CPP_INTERCEPT(Moon::Timeline::TimelineEntity, void, StopPlayback, (app::TimelineEntity* this_ptr)) {
        if (!is_abandoning_challenge) {
            next::Moon::Timeline::TimelineEntity::StopPlayback(this_ptr);
            return;
        }

        auto handle = core::api::uber_states::interception_bus().register_handler([](auto params) {
            // When pressing "Abandon Challenge" and the last checkpoint is far away from the Kwolok
            // escape, the timeline game object gets disabled which causes the OnStop action to
            // set the fight state to 3 again.
            if (params.state.group_int() == 945 && params.state.state() == 58403 && params.value == 3) {
                return true;
            }

            return false;
        });

        next::Moon::Timeline::TimelineEntity::StopPlayback(this_ptr);
    }
} // namespace
