#include <Modloader/il2cpp_helpers.h>

#include <Modloader/windows_api/console.h>
#include <Core/api/scenes/scene_load.h>

namespace {
    auto on_scene_loaded_handler = core::api::scenes::event_bus().register_handler(
        [](auto metadata) {
            if (metadata->state != app::SceneState__Enum::Enabled) {
                return;
            }

            if (metadata->scene_name == "doubleJumpEscalationB__clone0") {
                const auto scene_root_go = il2cpp::unity::get_game_object(metadata->scene->fields.SceneRoot);

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
        }
    );
} // namespace
