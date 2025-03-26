#include <Common/event_bus.h>
#include <Core/api/scenes/scene_load.h>
#include <Modloader/app/methods/Moon/Timeline/TimelineConstraint.h>
#include <Modloader/app/methods/EntityPlaceholder.h>
#include <Modloader/app/types/MoonTimeline.h>
#include <Modloader/app/types/MinerNPCPlaceholder.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>

using namespace modloader;
using namespace app::classes;

namespace {
    IL2CPP_INTERCEPT(EntityPlaceholder, void, Spawn, (app::EntityPlaceholder* this_ptr)) {
        next::EntityPlaceholder::Spawn(this_ptr);

        if (il2cpp::is_assignable(this_ptr, types::MinerNPCPlaceholder::get_class())) {
            const auto placeholder_path = il2cpp::unity::get_path(this_ptr);
            if (placeholder_path == "e3DesertD__clone0/npcs/Miner-1") {
                const auto timeline_go = il2cpp::unity::find_child(
                    this_ptr->fields.m_currentEntity,
                    std::vector<std::string>{
                        "dialogs",
                        "questGraph",
                        "rewardTimeline",
                    }
                );

                if (il2cpp::unity::is_valid(timeline_go)) {
                    const auto timeline = il2cpp::unity::get_component<app::MoonTimeline>(timeline_go, types::MoonTimeline::get_class());

                    // Make timeline entities shorter so they don't block the quest completion
                    Moon::Timeline::TimelineConstraint::SetTimeOffset(timeline->fields.m_entityRecords->fields._items->vector[0]->fields.StartConstraint, 0.0f);
                    Moon::Timeline::TimelineConstraint::SetTimeOffset(timeline->fields.m_entityRecords->fields._items->vector[0]->fields.EndConstraint, 0.0f);
                    Moon::Timeline::TimelineConstraint::SetTimeOffset(timeline->fields.m_entityRecords->fields._items->vector[8]->fields.EndConstraint, 0.0f);
                    Moon::Timeline::TimelineConstraint::SetTimeOffset(timeline->fields.m_entityRecords->fields._items->vector[10]->fields.StartConstraint, 0.0f);
                    Moon::Timeline::TimelineConstraint::SetTimeOffset(timeline->fields.m_entityRecords->fields._items->vector[11]->fields.StartConstraint, 0.0f);
                    Moon::Timeline::TimelineConstraint::SetTimeOffset(timeline->fields.m_entityRecords->fields._items->vector[12]->fields.StartConstraint, 0.0f);
                    Moon::Timeline::TimelineConstraint::SetTimeOffset(timeline->fields.m_entityRecords->fields._items->vector[13]->fields.StartConstraint, 0.0f);
                    Moon::Timeline::TimelineConstraint::SetTimeOffset(timeline->fields.m_entityRecords->fields._items->vector[10]->fields.EndConstraint, 0.0f);
                    Moon::Timeline::TimelineConstraint::SetTimeOffset(timeline->fields.m_entityRecords->fields._items->vector[11]->fields.EndConstraint, 0.0f);
                    Moon::Timeline::TimelineConstraint::SetTimeOffset(timeline->fields.m_entityRecords->fields._items->vector[12]->fields.EndConstraint, 0.0f);
                    Moon::Timeline::TimelineConstraint::SetTimeOffset(timeline->fields.m_entityRecords->fields._items->vector[13]->fields.EndConstraint, 0.0f);
                }
            }
        }
    }
} // namespace
