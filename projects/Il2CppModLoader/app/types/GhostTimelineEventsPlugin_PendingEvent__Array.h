#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GhostTimelineEventsPlugin_PendingEvent__Array {
        namespace {
            inline app::GhostTimelineEventsPlugin_PendingEvent__Array__Class* type_info_ref = nullptr;
        }
        inline app::GhostTimelineEventsPlugin_PendingEvent__Array__Class** type_info = &type_info_ref;
        inline app::GhostTimelineEventsPlugin_PendingEvent__Array__Class* get_class() {
            return il2cpp::get_class<app::GhostTimelineEventsPlugin_PendingEvent__Array__Class>(type_info, "", "GhostTimelineEventsPlugin+PendingEvent[]");
        }
        inline app::GhostTimelineEventsPlugin_PendingEvent__Array* create() {
            return il2cpp::create_object<app::GhostTimelineEventsPlugin_PendingEvent__Array>(get_class());
        }
    } // namespace GhostTimelineEventsPlugin_PendingEvent__Array
} // namespace app::classes::types
