#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>
#include <Modloader/windows_api/console.h>

#include <Randomizer/conditions/new_setup_state_override.h>

namespace {
    auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
        // Twillen Hollow
        // -294171295 Present
        // -598610927 Gone
        randomizer::conditions::register_new_setup_redirect({ "kwoloksHollowEntrance/interactives/shardTraderSetup", -598610927 }, -294171295);
    });
} // namespace
