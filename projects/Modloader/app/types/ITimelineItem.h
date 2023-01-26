#pragma once
#include <Modloader/app/structs/ITimelineItem.h>
#include <Modloader/app/structs/ITimelineItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ITimelineItem {
        inline app::ITimelineItem__Class** type_info() {
            static app::ITimelineItem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ITimelineItem__Class**)(modloader::win::memory::resolve_rva(0x047771F0));
            }
            return cache;
        }
        inline app::ITimelineItem__Class* get_class() {
            return il2cpp::get_class<app::ITimelineItem__Class>(type_info(), "Moon.Timeline", "ITimelineItem");
        }
    } // namespace ITimelineItem
} // namespace app::classes::types
