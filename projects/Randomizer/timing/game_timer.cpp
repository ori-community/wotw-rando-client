#include <Randomizer/timing/game_timer.h>
#include <Randomizer/timing/game_stats.h>
#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Core/async_update.h>
#include <Modloader/interception_macros.h>
#include <Modloader/common.h>

namespace core::timing {
    namespace {
        GameStats active_stats;
        GameStats checkpoint_stats;

        void on_new_game(GameEvent event, EventTiming timing) {
            active_stats = GameStats();
            checkpoint_stats = GameStats();

            // TODO:
            // - add system to store additional information to save files
        }

        void on_async_update(float delta) {
            active_stats.report_time_spent(game::player::get_current_area(), delta);
        }

        void initialize() {
            game::event_bus().register_handler(GameEvent::NewGame, &on_new_game);

            async_update::event_bus().register_handler(&on_async_update);
        }

        CALL_ON_INIT(initialize);
    }
}

void notify_pickup_collected(GameArea area) {

}