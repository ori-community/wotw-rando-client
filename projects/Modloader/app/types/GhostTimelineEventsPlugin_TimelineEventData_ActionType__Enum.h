#pragma once
#include <Modloader/app/structs/GhostTimelineEventsPlugin_TimelineEventData_ActionType__Enum.h>
#include <Modloader/app/structs/GhostTimelineEventsPlugin_TimelineEventData_ActionType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GhostTimelineEventsPlugin_TimelineEventData_ActionType__Enum {
        inline app::GhostTimelineEventsPlugin_TimelineEventData_ActionType__Enum__Class** type_info() {
            static app::GhostTimelineEventsPlugin_TimelineEventData_ActionType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GhostTimelineEventsPlugin_TimelineEventData_ActionType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GhostTimelineEventsPlugin_TimelineEventData_ActionType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::GhostTimelineEventsPlugin_TimelineEventData_ActionType__Enum__Class>(type_info(), "", "GhostTimelineEventsPlugin+TimelineEventData", "ActionType");
        }
        inline app::GhostTimelineEventsPlugin_TimelineEventData_ActionType__Enum* create() {
            return il2cpp::create_object<app::GhostTimelineEventsPlugin_TimelineEventData_ActionType__Enum>(get_class());
        }
    } // namespace GhostTimelineEventsPlugin_TimelineEventData_ActionType__Enum
} // namespace app::classes::types
