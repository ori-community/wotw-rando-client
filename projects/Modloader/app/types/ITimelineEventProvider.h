#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ITimelineEventProvider__Class.h>

namespace app::classes::types {
    namespace ITimelineEventProvider {
        inline app::ITimelineEventProvider__Class** type_info = (app::ITimelineEventProvider__Class**)(modloader::win::memory::resolve_rva(0x047556D0));
        inline app::ITimelineEventProvider__Class* get_class() {
            return il2cpp::get_class<app::ITimelineEventProvider__Class>(type_info, "Moon.Timeline", "ITimelineEventProvider");
        }
    } // namespace ITimelineEventProvider
} // namespace app::classes::types
