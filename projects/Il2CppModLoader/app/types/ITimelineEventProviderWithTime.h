#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ITimelineEventProviderWithTime {
        inline app::ITimelineEventProviderWithTime__Class** type_info = (app::ITimelineEventProviderWithTime__Class**)(modloader::win::memory::resolve_rva(0x04776D18));
        inline app::ITimelineEventProviderWithTime__Class* get_class() {
            return il2cpp::get_class<app::ITimelineEventProviderWithTime__Class>(type_info, "Moon.Timeline", "ITimelineEventProviderWithTime");
        }
    } // namespace ITimelineEventProviderWithTime
} // namespace app::classes::types
