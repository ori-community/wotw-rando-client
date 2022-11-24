#include <Modloader/common.h>
#include <Modloader/windows_api/console.h>
#include <Core/enums/game_event.h>
#include <Core/api/game/game.h>

namespace {
    void console_update(GameEvent event, EventTiming timing) {
        modloader::win::console::console_update();
    }

    void initialize() {
        game::event_bus().register_handler(GameEvent::FixedUpdate, &console_update);
        game::event_bus().register_handler(GameEvent::TASPausedUpdate, &console_update);
    }

    CALL_ON_INIT(initialize);
}