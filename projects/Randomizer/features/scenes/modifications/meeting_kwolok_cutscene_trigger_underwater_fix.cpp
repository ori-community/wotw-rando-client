#include <Modloader/il2cpp_helpers.h>

#include <Core/api/scenes/scene_load.h>
#include <Core/api/uber_states/uber_state.h>
#include <Core/enums/uber_state.h>
#include <Core/property/reactivity.h>
#include <Modloader/app/methods/ObjectInsideZoneChecker.h>
#include <Modloader/app/types/PlayerInsideZoneChecker.h>
#include <Modloader/windows_api/console.h>

namespace {
    using namespace app::classes;

    std::optional<il2cpp::WeakGCRef<app::PlayerInsideZoneChecker>> player_inside_zone_checker;
    core::reactivity::ReactiveEffect::ptr_t effect;

    core::api::uber_states::UberState fix_enabled_state(UberStateGroup::RandoConfig, 13);

    auto on_scene_loaded_handler = core::api::scenes::event_bus().register_handler(
        [](auto metadata) {
            if (metadata->state != app::SceneState__Enum::Enabled) {
                return;
            }

            if (metadata->scene_name == "kwoloksCavernThroneRoom") {
                const auto scene_root_go = il2cpp::unity::get_game_object(metadata->scene->fields.SceneRoot);

                const auto emerge_trigger_go = il2cpp::unity::find_child(
                    scene_root_go,
                    std::vector<std::string>{
                        "kwolokSetup",
                        "emergeTrigger",
                    }
                );

                player_inside_zone_checker = il2cpp::WeakGCRef(
                    il2cpp::unity::get_component<app::PlayerInsideZoneChecker>(emerge_trigger_go, types::PlayerInsideZoneChecker::get_class())
                );

                effect = core::reactivity::watch_effect([] {
                    if (player_inside_zone_checker.has_value() && player_inside_zone_checker->is_valid()) {
                        if (fix_enabled_state.get<bool>()) {
                            (**player_inside_zone_checker)->fields._.Anchor.y = 31.f;  // Fixed
                        } else {
                            (**player_inside_zone_checker)->fields._.Anchor.y = 14.6099997;  // Vanilla
                        }

                        ObjectInsideZoneChecker::UpdateBounds(reinterpret_cast<app::ObjectInsideZoneChecker*>(**player_inside_zone_checker));
                    } else {
                        effect = nullptr;
                    }
                });
            }
        }
    );
} // namespace
