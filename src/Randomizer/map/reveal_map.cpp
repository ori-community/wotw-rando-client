#include <Core/api/game/game.h>
#include <Core/api/uber_states/uber_state.h>
#include <Modloader/app/methods/GameWorld.h>
#include <Modloader/app/methods/RuntimeGameWorldArea.h>
#include <Modloader/app/types/GameWorld.h>
#include <Modloader/modloader.h>
#include <Randomizer/randomizer.h>

namespace {
    using namespace app::classes;

    void reveal_entire_map() {
        const auto game_world = types::GameWorld::get_class()->static_fields->Instance;

        if (!game_world) {
            modloader::warn("game", "Tried to reveal the entire map but didn't find the GameWorld Instance yet :(");
        }

        // 15 is the max value of app::GameWorldAreaID__Enum when this was written.
        for (int32_t i = 0; i <= 15; i++) {
            const auto area = GameWorld::GetArea(game_world, static_cast<app::GameWorldAreaID__Enum>(i));
            if (!area) {
                // Areas: None, WeepingRidge, GorlekMines, Riverlands would crash the game
                continue;
            }

            const auto runtime_area = GameWorld::FindRuntimeArea(game_world, area);
            if (!runtime_area) {
                continue;
            }

            RuntimeGameWorldArea::DiscoverAllAreas(runtime_area);
        }

        modloader::debug("game", "Map revealed");
    }

    auto on_after_new_game_initialized = core::api::game::event_bus().register_handler(GameEvent::NewGameInitialized, EventTiming::After, [](auto, auto) {
        reveal_entire_map();
    });
}
