#include <Common/event_bus.h>
#include <Core/api/scenes/scene_load.h>
#include <Modloader/app/methods/Moon/Timeline/TimelineConstraint.h>
#include <Modloader/app/types/MoonTimeline.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>

using namespace modloader;
using namespace app::classes;

namespace {
    void on_scene_load(core::api::scenes::SceneLoadEventMetadata* metadata, const std::string&) {
        if (metadata->state != app::SceneState__Enum::Loaded) {
            return;
        }

        const auto scene_root_go = il2cpp::unity::get_game_object(metadata->scene->fields.SceneRoot);

        const auto timeline_go = il2cpp::unity::find_child(
            scene_root_go,
            std::vector<std::string>{
                "mapStoneSetup",
                "mapstoneTimeline",
            }
        );

        if (il2cpp::unity::is_valid(timeline_go)) {
            const auto timeline = il2cpp::unity::get_component<app::MoonTimeline>(timeline_go, types::MoonTimeline::get_class());

            // Hand-to-Hand quest update
            Moon::Timeline::TimelineConstraint::SetTimeOffset(timeline->fields.m_entityRecords->fields._items->vector[3]->fields.EndConstraint, 0.7f);

            // Lock Input
            Moon::Timeline::TimelineConstraint::SetTimeOffset(timeline->fields.m_entityRecords->fields._items->vector[0]->fields.EndConstraint, 2.f);
        }
    }

    [[maybe_unused]]
    auto on_scene_load_handle = core::api::scenes::single_event_bus().register_handler("desertRuinsGetWisp", &on_scene_load);
} // namespace
