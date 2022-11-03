#include <Core/uber_states/uber_state_interface.h>

#include <Common/ext.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/common.h>
#include <Core/utils/event_bus.h>
#include <Core/api/scenes/scene_load.h>

namespace {
    void on_scene_load(scenes::SceneLoadEventMetadata* metadata, EventTiming timing) {
        if (metadata->state != app::SceneState__Enum::Loaded) {
            return;
        }

        if (metadata->scene_name == "wellspringGladesHubSetups") {
            auto scene_root_go = il2cpp::unity::get_game_object(metadata->scene->fields.SceneRoot);

            auto save_pedestal_go = il2cpp::unity::find_child(
                    scene_root_go,
                    std::vector<std::string>{
                            "interactives",
                            "builderProjects",
                            "spiritWell",
                            "savePedestalParent",
                            "savePedestal" }
            );

            auto save_pedestal = il2cpp::unity::get_component<app::SavePedestal>(save_pedestal_go, "", "SavePedestal");
            save_pedestal->fields.Identifier = il2cpp::string_new("wellspringGladesHub");
        }
    }

    void initialize() {
        scenes::event_bus().register_handler(&on_scene_load);
    }

    CALL_ON_INIT(initialize);
} // namespace
