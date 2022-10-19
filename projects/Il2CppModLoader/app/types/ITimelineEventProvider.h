#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ITimelineEventProvider {
        inline app::ITimelineEventProvider__Class** type_info = (app::ITimelineEventProvider__Class**)(modloader::win::memory::resolve_rva(0x047556D0));
        inline app::ITimelineEventProvider__Class* get_class() {
            return il2cpp::get_class<app::ITimelineEventProvider__Class>(type_info, "Moon.Timeline", "ITimelineEventProvider");
        }
    } // namespace ITimelineEventProvider
} // namespace app::classes::types
