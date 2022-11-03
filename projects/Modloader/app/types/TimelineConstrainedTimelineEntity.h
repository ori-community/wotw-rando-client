#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimelineConstrainedTimelineEntity {
        inline app::TimelineConstrainedTimelineEntity__Class** type_info = (app::TimelineConstrainedTimelineEntity__Class**)(modloader::win::memory::resolve_rva(0x0473AF90));
        inline app::TimelineConstrainedTimelineEntity__Class* get_class() {
            return il2cpp::get_class<app::TimelineConstrainedTimelineEntity__Class>(type_info, "Moon.Timeline", "TimelineConstrainedTimelineEntity");
        }
        inline app::TimelineConstrainedTimelineEntity* create() {
            return il2cpp::create_object<app::TimelineConstrainedTimelineEntity>(get_class());
        }
    } // namespace TimelineConstrainedTimelineEntity
} // namespace app::classes::types
