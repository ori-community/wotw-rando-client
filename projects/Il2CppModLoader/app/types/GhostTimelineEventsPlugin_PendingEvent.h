#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GhostTimelineEventsPlugin_PendingEvent {
        namespace {
            inline app::GhostTimelineEventsPlugin_PendingEvent__Class* type_info_ref = nullptr;
        }
        inline app::GhostTimelineEventsPlugin_PendingEvent__Class** type_info = &type_info_ref;
        inline app::GhostTimelineEventsPlugin_PendingEvent__Class* get_class() {
            return il2cpp::get_nested_class<app::GhostTimelineEventsPlugin_PendingEvent__Class>(type_info, "", "GhostTimelineEventsPlugin", "PendingEvent");
        }
        inline app::GhostTimelineEventsPlugin_PendingEvent* create() {
            return il2cpp::create_object<app::GhostTimelineEventsPlugin_PendingEvent>(get_class());
        }
        inline app::GhostTimelineEventsPlugin_PendingEvent__Boxed* box(app::GhostTimelineEventsPlugin_PendingEvent value) {
            return il2cpp::box_value<app::GhostTimelineEventsPlugin_PendingEvent__Boxed>(get_class(), value);
        }
        inline app::GhostTimelineEventsPlugin_PendingEvent__Array* create_array(int size) {
            return il2cpp::array_new<app::GhostTimelineEventsPlugin_PendingEvent__Array>(get_class(), size);
        }
        inline app::GhostTimelineEventsPlugin_PendingEvent__Array* create_array(const std::vector<app::GhostTimelineEventsPlugin_PendingEvent>& items) {
            return il2cpp::array_new<app::GhostTimelineEventsPlugin_PendingEvent__Array>(get_class(), items);
        }
    } // namespace GhostTimelineEventsPlugin_PendingEvent
} // namespace app::classes::types
