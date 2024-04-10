#include <Modloader/il2cpp_helpers.h>

#include <Core/api/scenes/scene_load.h>
#include <Core/api/uber_states/uber_state.h>
#include <Core/api/uber_states/uber_state_handlers.h>
#include <Core/enums/uber_state.h>
#include <Core/property/reactivity.h>
#include <Modloader/app/types/MoonTimeline.h>
#include <Modloader/app/methods/Moon/Timeline/TimelineEntity.h>
#include <Modloader/windows_api/console.h>

namespace {
    using namespace app::classes;

    std::optional<il2cpp::WeakGCRef<app::MoonTimeline>> destruction_timeline;
    std::optional<il2cpp::WeakGCRef<app::GameObject>> bone_bridge_go;

    common::registration_handle_t uber_state_bus_handle;

    auto on_scene_loaded_handler = core::api::scenes::event_bus().register_handler(
        [](auto metadata) {
            if (metadata->state != app::SceneState__Enum::Enabled) {
                return;
            }

            if (metadata->scene_name == "swampNightcrawlerCavernA") {
                const auto scene_root_go = il2cpp::unity::get_game_object(metadata->scene->fields.SceneRoot);

                bone_bridge_go = il2cpp::WeakGCRef(
                    il2cpp::unity::find_child(scene_root_go, std::vector<std::string>{
                        "physics",
                        "*boneBridge",
                    })
                );

                const auto destruction_timeline_go = il2cpp::unity::find_child(**bone_bridge_go, std::vector<std::string>{
                    "timelines",
                    "destruction",
                });

                destruction_timeline = il2cpp::WeakGCRef(
                    il2cpp::unity::get_component<app::MoonTimeline>(
                        destruction_timeline_go,
                        types::MoonTimeline::get_class()
                    )
                );

                uber_state_bus_handle = core::api::uber_states::single_notification_bus().register_handler(
                    core::api::uber_states::UberState(21786, 808),  // swampStateGroup, boneBridgeBroken
                    [](const core::api::uber_states::UberStateCallbackParams& params, auto) {
                        if (
                            destruction_timeline.has_value() &&
                            destruction_timeline->is_valid() &&
                            bone_bridge_go.has_value() &&
                            bone_bridge_go->is_valid()
                        ) {
                            if (params.previous_value < 0.5 && params.value > 0.5) {
                                Moon::Timeline::TimelineEntity::StartPlayback_1(reinterpret_cast<app::TimelineEntity*>(**destruction_timeline));
                            } else if (params.previous_value > 0.5 && params.value < 0.5) {
                                il2cpp::unity::set_active(**bone_bridge_go, false);
                                il2cpp::unity::set_active(**bone_bridge_go, true);
                            }
                        } else {
                            bone_bridge_go = std::nullopt;
                            destruction_timeline = std::nullopt;
                            uber_state_bus_handle = nullptr;
                        }
                    }
                );
            }
        }
    );
} // namespace
