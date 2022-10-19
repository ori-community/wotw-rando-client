#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ITimelineItem {
        inline app::ITimelineItem__Class** type_info = (app::ITimelineItem__Class**)(modloader::win::memory::resolve_rva(0x047771F0));
        inline app::ITimelineItem__Class* get_class() {
            return il2cpp::get_class<app::ITimelineItem__Class>(type_info, "Moon.Timeline", "ITimelineItem");
        }
    } // namespace ITimelineItem
} // namespace app::classes::types
