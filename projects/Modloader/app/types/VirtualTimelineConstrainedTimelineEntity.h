#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace VirtualTimelineConstrainedTimelineEntity {
        inline app::VirtualTimelineConstrainedTimelineEntity__Class** type_info = (app::VirtualTimelineConstrainedTimelineEntity__Class**)(modloader::win::memory::resolve_rva(0x04720FB8));
        inline app::VirtualTimelineConstrainedTimelineEntity__Class* get_class() {
            return il2cpp::get_class<app::VirtualTimelineConstrainedTimelineEntity__Class>(type_info, "Moon.Timeline", "VirtualTimelineConstrainedTimelineEntity");
        }
        inline app::VirtualTimelineConstrainedTimelineEntity* create() {
            return il2cpp::create_object<app::VirtualTimelineConstrainedTimelineEntity>(get_class());
        }
    } // namespace VirtualTimelineConstrainedTimelineEntity
} // namespace app::classes::types
