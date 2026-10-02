#include <Core/api/scenes/scene_load.h>
#include <Core/api/uber_states/uber_state.h>
#include <Modloader/app/methods/Moon/ConditionUberState.h>
#include <Modloader/modloader.h>
#include <Randomizer/conditions/new_setup_state_override.h>
#include <Randomizer/uber_states/randomizer_uber_states.h>

namespace {
    using namespace app::classes;

    /// This fix makes it possible to un-softlock the Family Reunion quest
    /// using header language. The softlock happens when collecting the
    /// teddy before opening the door in Woods, which is possible when
    /// changing door connections.

    auto& use_can_open_hut_rando_state = randomizer::uber_states::state<"randoConfig", "useCanOpenMokiFatherHutRandoState">();
    auto& can_open_hut_state = randomizer::uber_states::state<"randoState", "canOpenMokiFatherHut">();

    [[maybe_unused]]
    auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
        randomizer::conditions::register_new_setup_intercept({"petrifiedForestNewTransitionOri/interactives/hutSetup"}, {-223185097, -899902710}, [](auto, auto, auto original_state) -> int32_t {
            if (!use_can_open_hut_rando_state.get()) {
                return original_state;
            }

            return can_open_hut_state.get() ? -899902710 : -223185097;
        });
    });
}
