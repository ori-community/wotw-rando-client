#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ITimelineItem__Class.h>

namespace app::classes::types {
    namespace ITimelineItem {
        inline app::ITimelineItem__Class** type_info = (app::ITimelineItem__Class**)(modloader::win::memory::resolve_rva(0x047771F0));
        inline app::ITimelineItem__Class* get_class() {
            return il2cpp::get_class<app::ITimelineItem__Class>(type_info, "Moon.Timeline", "ITimelineItem");
        }
    } // namespace ITimelineItem
} // namespace app::classes::types
