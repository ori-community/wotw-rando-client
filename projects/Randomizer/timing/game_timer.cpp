#include <Randomizer/timing/game_timer.h>
#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Core/api/game/loading_detection.h>
#include <Core/save_meta/save_meta.h>
#include <Core/async_update.h>
#include <Modloader/interception_macros.h>
#include <Modloader/common.h>
#include <Modloader/windows_api/console.h>
#include <fmt/format.h>
#include <mutex>

namespace core::timing {
    std::mutex stats_mutex;
    std::shared_ptr<CheckpointGameStats> checkpoint_stats = std::make_shared<CheckpointGameStats>();
    std::shared_ptr<SaveFileGameStats> save_stats = std::make_shared<SaveFileGameStats>();

    namespace {
        void reset_stats() {
            stats_mutex.lock();

            checkpoint_stats = std::make_shared<CheckpointGameStats>();
            save_stats = std::make_shared<SaveFileGameStats>();

            core::save_meta::register_slot(SaveMetaSlot::CheckpointGameStats, SaveMetaSlotPersistence::None, checkpoint_stats);
            core::save_meta::register_slot(SaveMetaSlot::SaveFileGameStats, SaveMetaSlotPersistence::ThroughDeathsAndQTMsAndBackups, save_stats);

            stats_mutex.unlock();
        }

        void on_before_new_game(GameEvent event, EventTiming timing) {
            reset_stats();
        }

        float time_to_next_debug_print = 0.f;
        void on_async_update(float delta) {
            if (game::loading_detection::get_loading_state() == LoadingState::NotLoading) {
                stats_mutex.lock();
                checkpoint_stats->report_time_spent(delta);
                save_stats->report_time_spent(game::player::get_current_area(), delta);
                stats_mutex.unlock();
            }

            time_to_next_debug_print -= delta;
            if (time_to_next_debug_print <= 0.f) {
                modloader::win::console::console_send(fmt::format("{}, pickups = {}", save_stats->total_time, checkpoint_stats->total_pickups));
                time_to_next_debug_print = 0.5f;
            }
        }

        void initialize() {
            game::event_bus().register_handler(GameEvent::NewGame, EventTiming::Before, &on_before_new_game);
            async_update::event_bus().register_handler(&on_async_update);
            reset_stats();
        }

        CALL_ON_INIT(initialize);
    }
}

void notify_pickup_collected(GameArea area) {
    core::timing::stats_mutex.lock();
    core::timing::checkpoint_stats->report_pickup(area);
    core::timing::stats_mutex.unlock();
}