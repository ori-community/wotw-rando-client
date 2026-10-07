#include <Core/api/scenes/scene_load.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/windows_api/console.h>


namespace {
    [[maybe_unused]]
    auto on_scene_loaded_handler = core::api::scenes::event_bus().on<core::api::scenes::events::SceneStateChanged>(
        "doubleJumpEscalationB__clone0",
        [](const auto& event) {
            if (event.state != app::SceneState__Enum::Enabled) {
                return;
            }

            const auto scene_root_go = il2cpp::unity::get_game_object(event.scene->fields.SceneRoot);

            const auto teleport_restrict_zone_go = il2cpp::unity::find_child(
                scene_root_go,
                std::vector<std::string>{
                    "interactives",
                    "enemyArenaSetup",
                    "teleportRestrictZone",
                }
            );

            if (il2cpp::unity::is_valid(teleport_restrict_zone_go)) {
                il2cpp::unity::set_active(teleport_restrict_zone_go, false);
            }
        }
    );
} // namespace
