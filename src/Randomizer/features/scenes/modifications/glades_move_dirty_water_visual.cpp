#include <Common/event_bus.h>
#include <Core/api/scenes/scene_load.h>
#include <Modloader/il2cpp_helpers.h>


namespace {
    [[maybe_unused]]
    auto on_scene_loaded_handler = core::api::scenes::event_bus().on<core::api::scenes::events::SceneStateChanged>("wellspringGladesHubBackground", [](const auto& event) {
        if (event.state != app::SceneState__Enum::Loaded) {
            return;
        }
        /**
         Moves the visuals of the water surface of the dirty water that clips into the cave
         */
        const auto scene_root_go = il2cpp::unity::get_game_object(event.scene->fields.SceneRoot);

        const auto uber_water = il2cpp::unity::find_child(
            scene_root_go, std::vector<std::string>{
                "artSetups",
                "water",
                "corruptedWater",
                "uberWaterAdjusted",
                "simulated",
                "uberWater (2)"
            }
        );
        il2cpp::unity::set_local_position(uber_water, {-73.2, 0, 0});
    });

} // namespace
