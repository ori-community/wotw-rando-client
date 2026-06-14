#include <Core/api/game/trials.h>
#include <Modloader/modloader.h>

namespace {
    auto on_injection_complete = modloader::event_bus().register_handler(ModloaderEvent::InjectionComplete, [](auto) {
        core::api::game::trials::add_ghosts_directory_suffix("tas");
    });
} // namespace
