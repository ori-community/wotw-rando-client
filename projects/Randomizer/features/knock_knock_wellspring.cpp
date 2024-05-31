

#include <thread>
#include <Core/api/audio.h>
#include <Core/api/uber_states/uber_state_handlers.h>
#include <Core/events/task.h>
#include <Randomizer/tracking/game_tracker.h>

namespace {
    core::api::uber_states::UberState knock_knock_wellspring_enabled_state(UberStateGroup::RandoConfig, 102);

    [[maybe_unused]]
    auto uber_state_bus_handle = core::api::uber_states::single_notification_bus().register_handler(
        core::api::uber_states::UberState(53632, 18181),
        [](const core::api::uber_states::UberStateCallbackParams& params, auto) {
            if (params.value > 0.5 && params.previous_value < 0.5 && knock_knock_wellspring_enabled_state.get<bool>()) {
                const auto stats = randomizer::timing::get_save_file_game_stats();

                if (stats.area_stats.contains(GameArea::Wellspring) && stats.area_stats.at(GameArea::Wellspring).in_game_time_spent > 0.f) {
                    return;
                }

                using namespace std::chrono_literals;
                core::api::audio::play_sound(SoundEventID::KnockKnockWellspring);

                core::events::schedule_task_for_next_update([] {
                    std::this_thread::sleep_for(2100ms);
                });
            }
        }
    );
}
