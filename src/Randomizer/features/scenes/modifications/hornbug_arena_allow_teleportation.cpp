#include <Core/api/scenes/scene_load.h>
#include <Modloader/app/types/NewSetupStateController.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/windows_api/console.h>


namespace {
    using namespace app::classes;

    [[maybe_unused]]
    auto on_scene_loaded_handler = core::api::scenes::event_bus().on<core::api::scenes::events::SceneStateChanged>(
        "kwoloksCavernBossRoom",
        [](const auto& event) {
            if (event.state != app::SceneState__Enum::Loaded) {
                return;
            }

            const auto scene_root_go = il2cpp::unity::get_game_object(event.scene->fields.SceneRoot);

            const auto boss_encounter_go = il2cpp::unity::find_child(
                scene_root_go,
                std::vector<std::string>{
                    "hornbugBossEncounter",
                }
            );

            if (il2cpp::unity::is_valid(boss_encounter_go)) {
                auto setup_controller = il2cpp::unity::get_component<app::NewSetupStateController>(boss_encounter_go, types::NewSetupStateController::get_class());

                auto modifier = setup_controller->fields.StateHolder->fields.Modifiers->fields._items->vector[5];
                for (auto modifier_data: il2cpp::ListIterator(modifier->fields.m_uberStateModifierDatas)) {
                    if (modifier_data->fields.StateGUID == 1422798167) {
                        modifier_data->fields.Booleans->fields._items->vector[0] = false;
                    }
                }
            }
        }
    );
} // namespace
