#include <Randomizer/online/multiplayer.h>
#include <Randomizer/randomizer.h>

#include <Core/api/game/game.h>
#include <Core/utils/misc.h>

#include <Modloader/app/types/AreaMapUI.h>

namespace {
    auto on_area_map_open_handle = core::api::game::event_bus().register_handler(GameEvent::OpenAreaMap, EventTiming::After, [](auto, auto) {
        auto area_map = types::AreaMapUI::get_class()->static_fields->Instance;
        if (il2cpp::unity::is_valid(area_map->fields._PlayerPositionMarker_k__BackingField)) {
            app::Color color = randomizer::multiplayer_universe().local_player_color();
            if (color.r < 0.99f || color.g < 0.99f || color.b < 0.99f || color.a < 0.99f) {
                utils::set_color(area_map->fields._PlayerPositionMarker_k__BackingField, color);
            }
        }
    });
} // namespace
