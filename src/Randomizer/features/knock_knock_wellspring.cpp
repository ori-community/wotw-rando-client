#include <Core/api/audio.h>
#include <Core/api/uber_states/uber_state_handlers.h>
#include <Core/events/task.h>
#include <Core/uber_states/core_uber_states.h>
#include <Randomizer/tracking/game_tracker.h>
#include <Randomizer/uber_states/randomizer_uber_states.h>
#include <thread>


namespace {
    auto& knock_knock_wellspring_enabled_state = randomizer::uber_states::state<"randoConfig", "knockKnockWellspring">();
    auto& wellspring_teleporter_state = core::uber_states::state<"wellspringGroupDescriptor", 18181>();  // savePedestalUberState

    [[maybe_unused]]
    auto uber_state_bus_handle = core::api::uber_states::event_bus().on<core::api::uber_states::events::UberStateChanged>(
        wellspring_teleporter_state,
        [](auto) {
            if (wellspring_teleporter_state.get() && knock_knock_wellspring_enabled_state.get()) {
                const auto stats = randomizer::timing::get_save_file_game_stats();

                // TODO: Check in events stream whether the player was in Wellspring before
                // if (stats.area_stats.contains(GameArea::Wellspring) && stats.area_stats.at(GameArea::Wellspring).in_game_time_spent > 0.f) {
                //     return;
                // }

                using namespace std::chrono_literals;
                core::api::audio::play_event(SoundEventID::KnockKnockWellspring);

                core::events::schedule_task_for_next_update([] {
                    std::this_thread::sleep_for(2100ms);
                });
            }
        }
    );
}
