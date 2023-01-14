#include <Randomizer/conditions/new_setup_state_override.h>

#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>
#include <Modloader/windows_api/console.h>

namespace {
    auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
        // Upper Marsh
        // 1808259966 Present
        // 1558151251 Gone
        randomizer::conditions::register_new_setup_redirect({ "swampWalljumpChallengeA/NPCSetup", 1558151251 }, 1808259966);
    });
} // namespace
