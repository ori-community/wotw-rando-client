#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ITimelineEventProviderWithTime {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ITimelineEventProviderWithTime__Class** type_info;
        inline app::ITimelineEventProviderWithTime__Class* get_class() {
            return il2cpp::get_class<app::ITimelineEventProviderWithTime__Class>(type_info, "Moon.Timeline", "ITimelineEventProviderWithTime");
        }
        inline app::ITimelineEventProviderWithTime* create() {
            return il2cpp::create_object<app::ITimelineEventProviderWithTime>(get_class());
        }
    } // namespace ITimelineEventProviderWithTime
} // namespace app::classes::types
