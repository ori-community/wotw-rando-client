#include <Common/is_in.h>
#include <Core/api/game/player.h>
#include <Core/api/uber_states/uber_state_handlers.h>
#include <Modloader/app/methods/RaceBaseState.h>
#include <Modloader/app/methods/RaceHandler.h>
#include <Modloader/app/methods/RaceSystem.h>
#include <Modloader/app/types/RaceSystem.h>
#include <Modloader/modloader.h>
#include <Randomizer/randomizer.h>


using namespace app::classes;

namespace {
    bool is_running_race() {
        return RaceSystem::get_IsRunningRace(types::RaceSystem::get_class()->static_fields->_Instance_k__BackingField);
    }

    [[maybe_unused]]
    auto on_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
        randomizer::game_seed().prevent_grants(&is_running_race);
    });

    common::Droppable::ptr_t in_trial_uber_state_changed_handle;
    common::Droppable::ptr_t in_trial_should_sync_handle;

    IL2CPP_INTERCEPT(void, RaceHandler, SetRaceInProgressState, app::RaceHandler * this_ptr, bool in_progress) {
        if (in_progress) {
            // Make Reach trial keystones give you actual keystones
            in_trial_uber_state_changed_handle = core::api::uber_states::on_any_uber_state_changed().register_handler([](auto state_id) {
                if (state_id.group == 28895) {  // Baur's Reach
                    if (is_in<29898, 18358, 37444, 10823>(state_id.member) && core::api::uber_states::UntypedUberState(state_id).get<bool>()) {  // The 4 trial keystones
                       core::api::game::player::keystones().add(1);
                    }
                }
            });

            // Prevent incoming changes
            randomizer::multiplayer_universe().uber_state_handler().start_queueing_changes();

            // Prevent outgoing changes
            in_trial_should_sync_handle = randomizer::multiplayer_universe().uber_state_handler().should_sync_event_bus().register_handler([](auto state_id) {
                return state_id.group == 44964;  // Trials group; only sync trials
            });
        } else {
            in_trial_uber_state_changed_handle = nullptr;
            in_trial_should_sync_handle = nullptr;
            randomizer::multiplayer_universe().uber_state_handler().stop_queueing_and_flush_queued_changes();
        }

        next::RaceHandler::SetRaceInProgressState(this_ptr, in_progress);
    }
} // namespace
