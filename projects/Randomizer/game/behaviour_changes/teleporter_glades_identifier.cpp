#include <Core/api/uber_states/uber_state.h>

#include <Common/event_bus.h>
#include <Common/ext.h>
#include <Core/api/scenes/scene_load.h>
#include <Modloader/app/types/SavePedestal.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/modloader.h>

using namespace app::classes;

namespace {
    void on_scene_load(core::api::scenes::SceneLoadEventMetadata* metadata) {
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

            auto save_pedestal = il2cpp::unity::get_component<app::SavePedestal>(save_pedestal_go, types::SavePedestal::get_class());
            save_pedestal->fields.Identifier = il2cpp::string_new("wellspringGladesHub");
        }
    }

    auto on_scene_load_handle = core::api::scenes::event_bus().register_handler(&on_scene_load);
} // namespace
