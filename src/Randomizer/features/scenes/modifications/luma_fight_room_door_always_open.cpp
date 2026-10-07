#include <Core/api/scenes/scene_load.h>
#include <Modloader/app/types/NewSetupStateController.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/windows_api/console.h>


using namespace app::classes;

namespace {
    [[maybe_unused]]
    auto on_scene_loaded_handler = core::api::scenes::event_bus().on<core::api::scenes::events::SceneStateChanged>(
        "lumaPoolsC",
        [](const auto& event) {
            if (event.state != app::SceneState__Enum::Loaded) {
                return;
            }

            auto scene_root_go = il2cpp::unity::get_game_object(event.scene->fields.SceneRoot);

            auto enemy_arena_setup_go = il2cpp::unity::find_child(
                scene_root_go,
                std::vector<std::string>{
                    "arenaSetup",
                    "arenaA",
                    "enemyArenaSetup3Waves",
                }
            );

            if (il2cpp::unity::is_valid(enemy_arena_setup_go)) {
                auto enemy_arena_setup_controller = il2cpp::unity::get_component<app::NewSetupStateController>(enemy_arena_setup_go, types::NewSetupStateController::get_class());

                auto modifier = enemy_arena_setup_controller->fields.StateHolder->fields.Modifiers->fields._items->vector[4];
                for (auto modifier_data: il2cpp::ListIterator(modifier->fields.m_uberStateModifierDatas)) {
                    if (modifier_data->fields.StateGUID == 1708336759) {
                        modifier_data->fields.StateGUID = 0;
                    }
                }
            }
        }
    );
} // namespace
