#include <Modloader/modloader.h>
#include <Randomizer/randomizer.h>

#include <Randomizer/seed/items/value_modifier.h>

namespace randomizer::seed::items {

    bool prevent_grants_on_value_modify = false;

    auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
        game_seed().prevent_grants([]() {
            return prevent_grants_on_value_modify;
        });
    });

} // namespace randomizer::seed::items
