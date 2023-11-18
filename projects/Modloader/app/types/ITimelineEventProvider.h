#pragma once
#include <Modloader/app/structs/ITimelineEventProvider.h>
#include <Modloader/app/structs/ITimelineEventProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ITimelineEventProvider {
        inline app::ITimelineEventProvider__Class** type_info() {
            static app::ITimelineEventProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ITimelineEventProvider__Class**)(modloader::win::memory::resolve_rva(0x047556D0));
            }
            return cache;
        }
        inline app::ITimelineEventProvider__Class* get_class() {
            return il2cpp::get_class<app::ITimelineEventProvider__Class>(type_info(), "Moon.Timeline", "ITimelineEventProvider");
        }
    } // namespace ITimelineEventProvider
} // namespace app::classes::types
