#include <Core/api/scenes/scene_load.h>
#include <Core/api/uber_states/uber_state.h>
#include <Core/enums/uber_state.h>
#include <Core/uber_states/core_uber_states.h>
#include <Modloader/app/methods/Moon/Timeline/TimelineEntity.h>
#include <Modloader/app/types/MoonTimeline.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/windows_api/console.h>


namespace {
    using namespace app::classes;

    std::optional<il2cpp::WeakGCRef<app::MoonTimeline>> destruction_timeline_ref;
    std::optional<il2cpp::WeakGCRef<app::GameObject>> bone_bridge_go_ref;

    common::Droppable::ptr_t uber_state_bus_handle;

    auto& bone_bridge_broken_state = core::uber_states::state<"swampStateGroup", "boneBridgeBroken">();

    [[maybe_unused]]
    auto on_scene_loaded_handler = core::api::scenes::event_bus().on<core::api::scenes::events::SceneStateChanged>(
        "swampNightcrawlerCavernA",
        [](const auto& event) {
            if (event.state != app::SceneState__Enum::Enabled) {
                return;
            }

            const auto scene_root_go = il2cpp::unity::get_game_object(event.scene->fields.SceneRoot);

            const auto bone_bridge_go = il2cpp::unity::find_child(
                scene_root_go,
                std::vector<std::string>{
                    "physics",
                    "*boneBridge",
                }
            );

            bone_bridge_go_ref = il2cpp::WeakGCRef(
                bone_bridge_go
            );

            const auto destruction_timeline_go = il2cpp::unity::find_child(bone_bridge_go, std::vector<std::string>{
                "timelines",
                "destruction",
            });

            destruction_timeline_ref = il2cpp::WeakGCRef(
                il2cpp::unity::get_component<app::MoonTimeline>(
                    destruction_timeline_go,
                    types::MoonTimeline::get_class()
                )
            );

            uber_state_bus_handle = core::api::uber_states::event_bus().on<core::api::uber_states::events::UberStateChanged>(
                bone_bridge_broken_state,
                [](auto) {
                    if (
                        const auto [destruction_timeline, bone_bridge_go] = std::make_tuple(
                            destruction_timeline_ref.and_then([](auto& ref) { return *ref; }),
                            bone_bridge_go_ref.and_then([](auto& ref) { return *ref; })
                        );
                        destruction_timeline.has_value() &&
                        bone_bridge_go.has_value()
                    ) {
                        if (bone_bridge_broken_state.get()) {
                            Moon::Timeline::TimelineEntity::StartPlayback_1(reinterpret_cast<app::TimelineEntity*>(*destruction_timeline));
                        } else {
                            il2cpp::unity::set_active(*bone_bridge_go, false);
                            il2cpp::unity::set_active(*bone_bridge_go, true);
                        }
                    } else {
                        bone_bridge_go_ref = std::nullopt;
                        destruction_timeline_ref = std::nullopt;
                        uber_state_bus_handle = nullptr;
                    }
                }
            );
        }
    );
} // namespace
