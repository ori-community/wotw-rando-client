#include <Common/event_bus.h>
#include <Common/ext.h>
#include <Core/api/scenes/scene_load.h>
#include <Modloader/app/types/ScalableAnimationPlayer_ScalingInterval.h>
#include <Modloader/modloader.h>


using namespace modloader;
using namespace app::classes;

namespace {
    void on_scene_load(const core::api::scenes::events::SceneStateChanged& event) {
        if (event.state != app::SceneState__Enum::Loaded) {
            return;
        }

        const auto scene_root_go = il2cpp::unity::get_game_object(event.scene->fields.SceneRoot);
        const auto stomper_system_go = il2cpp::unity::find_child(scene_root_go, std::vector<std::string>{"interactives", "stomperSystems"});
        if (il2cpp::unity::is_valid(stomper_system_go)) {
            il2cpp::unity::destroy_object(il2cpp::unity::find_child(stomper_system_go, "goThroughActivator"));
            il2cpp::unity::destroy_object(il2cpp::unity::find_child(stomper_system_go, "goThroughBlocker"));
        }
    }

    [[maybe_unused]]
    auto on_scene_load_handle = core::api::scenes::event_bus().on<core::api::scenes::events::SceneStateChanged>("kwoloksHollowGetDash", &on_scene_load);
} // namespace
