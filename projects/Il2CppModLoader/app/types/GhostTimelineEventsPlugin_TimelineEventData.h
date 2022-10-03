#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GhostTimelineEventsPlugin_TimelineEventData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GhostTimelineEventsPlugin_TimelineEventData__Class** type_info;
        inline app::GhostTimelineEventsPlugin_TimelineEventData__Class* get_class() {
            return il2cpp::get_nested_class<app::GhostTimelineEventsPlugin_TimelineEventData__Class>(type_info, "", "GhostTimelineEventsPlugin", "TimelineEventData");
        }
        inline app::GhostTimelineEventsPlugin_TimelineEventData* create() {
            return il2cpp::create_object<app::GhostTimelineEventsPlugin_TimelineEventData>(get_class());
        }
    } // namespace GhostTimelineEventsPlugin_TimelineEventData
} // namespace app::classes::types
