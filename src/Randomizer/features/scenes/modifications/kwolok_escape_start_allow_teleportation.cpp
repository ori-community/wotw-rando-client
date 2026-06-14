#include <Modloader/il2cpp_helpers.h>

#include <Modloader/app/types/NewSetupStateController.h>
#include <Modloader/windows_api/console.h>
#include <Core/api/scenes/scene_load.h>

namespace {
    using namespace app::classes;

    auto on_scene_loade_handler = core::api::scenes::event_bus().register_handler(
        [](auto metadata) {
            if (metadata->state != app::SceneState__Enum::Loaded) {
                return;
            }

            if (metadata->scene_name == "kwolokBossChaseBG") {
                const auto scene_root_go = il2cpp::unity::get_game_object(metadata->scene->fields.SceneRoot);

                const auto kwolok_boss_setup_go = il2cpp::unity::find_child(
                    scene_root_go,
                    std::vector<std::string>{
                        "kwolokBossSetup",
                    }
                );

                if (il2cpp::unity::is_valid(kwolok_boss_setup_go)) {
                    auto setup_controller = il2cpp::unity::get_component<app::NewSetupStateController>(kwolok_boss_setup_go, types::NewSetupStateController::get_class());

                    // modifier: kwolokBossChaseBG/kwolokBossSetup/teleportRestrictZone
                    auto modifier = setup_controller->fields.StateHolder->fields.Modifiers->fields._items->vector[2];
                    for (auto modifier_data: il2cpp::ListIterator(modifier->fields.m_uberStateModifierDatas)) {
                        if (modifier_data->fields.StateGUID == -277442454) { // prefight
                            modifier_data->fields.Booleans->fields._items->vector[0] = false;
                        }
                    }
                }
            }
        }
    );
} // namespace
