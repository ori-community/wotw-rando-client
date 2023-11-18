#include <Modloader/app/types/NewSetupStateController.h>
#include <Modloader/il2cpp_helpers.h>

#include <Modloader/windows_api/console.h>
#include <Core/api/scenes/scene_load.h>

using namespace app::classes;

namespace {
    auto on_scene_loade_handler = core::api::scenes::event_bus().register_handler([](auto metadata) {
        if (metadata->state != app::SceneState__Enum::Loaded) {
            return;
        }

        if (metadata->scene_name == "lumaPoolsC") {
            auto scene_root_go = il2cpp::unity::get_game_object(metadata->scene->fields.SceneRoot);

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
                for (int i = 0; i < modifier->fields.m_uberStateModifierDatas->fields._size; ++i) {
                    auto modifier_data = modifier->fields.m_uberStateModifierDatas->fields._items->vector[i];
                    if (modifier_data->fields.StateGUID == 1708336759) {
                        modifier_data->fields.StateGUID = 0;
                    }
                }
            }
        }
    });
} // namespace
