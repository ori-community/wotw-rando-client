#include <Core/api/scenes/scene_load.h>
#include <Core/property/reactivity.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/modloader.h>

#include "Modloader/app/methods/ReadyForAnimationTrigger.h"
#include "Modloader/app/types/ReadyForAnimationTrigger.h"

namespace {

    using namespace app::classes;

    std::optional<il2cpp::WeakGCRef<app::ReadyForAnimationTrigger>> animation_trigger_ref;
    core::reactivity::ReactiveEffect::ptr_t effect;

    core::api::uber_states::UberState fix_enabled_state(UberStateGroup::RandoConfig, 38);

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

        animation_trigger_ref = il2cpp::WeakGCRef(
            il2cpp::unity::get_component<app::ReadyForAnimationTrigger>(intro_trigger_go, types::ReadyForAnimationTrigger::get_class())
        );

        effect = core::reactivity::watch_effect()
                     .effect([] {
                         if (const auto animation_trigger = animation_trigger_ref.and_then([](auto& ref) { return *ref; }); animation_trigger.has_value()) {
                             auto trigger_go = il2cpp::unity::get_game_object(*animation_trigger);
                             auto position = il2cpp::unity::get_local_position(trigger_go);
                             if (fix_enabled_state.get<bool>()) {
                                 // move trigger further right and make it bigger so its less likely to dash through it
                                 position.x = 1.5f;
                                 (*animation_trigger)->fields.OnlyTurnToDestination = true;
                                 (*animation_trigger)->fields.ClampPositionToTarget = true;
                                 (*animation_trigger)->fields._._.Size.x = 3.0f;
                             } else {
                                 // Vanilla values
                                 position.x = -26.5f;
                                 (*animation_trigger)->fields.OnlyTurnToDestination = false;
                                 (*animation_trigger)->fields.ClampPositionToTarget = false;
                                 (*animation_trigger)->fields._._.Size.x = 0.5f;
                             }
                             il2cpp::unity::set_local_position(trigger_go, position);

                         } else {
                             effect = nullptr;
                         }
                     })
                     .trigger_on_load()
                     .finalize();
    });

} // namespace
