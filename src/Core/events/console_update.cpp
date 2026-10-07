#include <Core/api/game/game.h>
#include <Modloader/windows_api/console.h>

namespace core::events {
    namespace {
        [[maybe_unused]]
        auto console_update_handle = api::game::event_bus().on<core::api::game::events::FixedUpdate>([](auto) {
            modloader::win::console::console_update();
        });

        [[maybe_unused]]
        auto console_tas_update_handle = api::game::event_bus().on<core::api::game::events::TASPausedUpdate>([](auto) {
            modloader::win::console::console_update();
        });
    }
} // namespace
