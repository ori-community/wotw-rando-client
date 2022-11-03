#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GhostTimelineEventsPlugin_TimelineEventData {
        inline app::GhostTimelineEventsPlugin_TimelineEventData__Class** type_info = (app::GhostTimelineEventsPlugin_TimelineEventData__Class**)(modloader::win::memory::resolve_rva(0x04723A00));
        inline app::GhostTimelineEventsPlugin_TimelineEventData__Class* get_class() {
            return il2cpp::get_nested_class<app::GhostTimelineEventsPlugin_TimelineEventData__Class>(type_info, "", "GhostTimelineEventsPlugin", "TimelineEventData");
        }
        inline app::GhostTimelineEventsPlugin_TimelineEventData* create() {
            return il2cpp::create_object<app::GhostTimelineEventsPlugin_TimelineEventData>(get_class());
        }
    } // namespace GhostTimelineEventsPlugin_TimelineEventData
} // namespace app::classes::types
