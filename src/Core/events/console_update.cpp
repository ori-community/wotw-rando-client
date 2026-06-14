#include <Core/api/game/game.h>
#include <Core/enums/game_event.h>
#include <Modloader/windows_api/console.h>

namespace core::events {
    namespace {
        void console_update(GameEvent event, EventTiming timing) {
            modloader::win::console::console_update();
        }

        auto console_update_handle = api::game::event_bus().register_handler(GameEvent::FixedUpdate, EventTiming::After, &console_update);
        auto console_tas_update_handle = api::game::event_bus().register_handler(GameEvent::TASPausedUpdate, EventTiming::After, &console_update);
    }
} // namespace