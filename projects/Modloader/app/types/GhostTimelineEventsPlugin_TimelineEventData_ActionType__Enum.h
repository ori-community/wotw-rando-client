#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GhostTimelineEventsPlugin_TimelineEventData_ActionType__Enum {
        namespace {
            inline app::GhostTimelineEventsPlugin_TimelineEventData_ActionType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::GhostTimelineEventsPlugin_TimelineEventData_ActionType__Enum__Class** type_info = &type_info_ref;
        inline app::GhostTimelineEventsPlugin_TimelineEventData_ActionType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::GhostTimelineEventsPlugin_TimelineEventData_ActionType__Enum__Class>(type_info, "", "GhostTimelineEventsPlugin+TimelineEventData", "ActionType");
        }
        inline app::GhostTimelineEventsPlugin_TimelineEventData_ActionType__Enum* create() {
            return il2cpp::create_object<app::GhostTimelineEventsPlugin_TimelineEventData_ActionType__Enum>(get_class());
        }
    } // namespace GhostTimelineEventsPlugin_TimelineEventData_ActionType__Enum
} // namespace app::classes::types
