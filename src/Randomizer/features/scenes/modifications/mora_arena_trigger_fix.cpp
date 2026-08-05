#include <Core/api/scenes/scene_load.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/modloader.h>
#include <Modloader/interception_macros.h>

#include "Modloader/app/methods/ReadyForAnimationTrigger.h"
#include "Modloader/app/types/ReadyForAnimationTrigger.h"

namespace {

    using namespace app::classes;

    [[maybe_unused]]
    auto on_scene_loaded_handler = core::api::scenes::single_event_bus().register_handler("matkasChamberBossPlaceholder__clone1", [](auto metadata, auto) {
        if (metadata->state != app::SceneState__Enum::Loaded) {
            return;
        }

        const auto scene_root_go = il2cpp::unity::get_game_object(metadata->scene->fields.SceneRoot);

        const auto intro_trigger_go = il2cpp::unity::find_child(
            scene_root_go,
            std::vector<std::string>{
                "setups",
                "arenaSetups",
                "highArena",
                "spiderIntroTriggerSetup",
                "spiderIntroTrigger",
            }
        );

        // move trigger further right and make it bigger so its less likely to dash through it
        auto position = il2cpp::unity::get_local_position(intro_trigger_go);
        position.x += 28.0f;
        il2cpp::unity::set_local_position(intro_trigger_go, position);

        const auto comp = il2cpp::unity::get_component<app::ReadyForAnimationTrigger>(intro_trigger_go, app::classes::types::ReadyForAnimationTrigger::get_class());
        comp->fields.OnlyTurnToDestination = true;
        comp->fields.ClampPositionToTarget = true;
        comp->fields._._.Size.x = 3.0f;

    });

} // namespace
