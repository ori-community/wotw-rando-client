#include <Core/api/scenes/scene_load.h>
#include <Modloader/app/types/InvisibleCheckpoint.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/modloader.h>


namespace {
    using namespace app::classes;

    [[maybe_unused]]
    auto on_scene_loaded_handler = core::api::scenes::single_event_bus().register_handler("petrifiedForestTandemWindB", [](auto metadata, auto) {
        if (metadata->state != app::SceneState__Enum::Loaded) {
            return;
        }

        const auto scene_root_go = il2cpp::unity::get_game_object(metadata->scene->fields.SceneRoot);

        const auto checkpoint_go = il2cpp::unity::find_child(
            scene_root_go,
            std::vector<std::string>{
                "checkpoints",
                "invisibleCheckpoint (3)",
            }
        );
        const auto checkpoint = il2cpp::unity::get_component<app::InvisibleCheckpoint>(checkpoint_go, types::InvisibleCheckpoint::get_class());
        checkpoint->fields.RespawnPosition = app::Vector2{0.f, 0.f};
    });
} // namespace
