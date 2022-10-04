#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ITimelineEventProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ITimelineEventProvider__Class** type_info;
        inline app::ITimelineEventProvider__Class* get_class() {
            return il2cpp::get_class<app::ITimelineEventProvider__Class>(type_info, "Moon.Timeline", "ITimelineEventProvider");
        }
        inline app::ITimelineEventProvider* create() {
            return il2cpp::create_object<app::ITimelineEventProvider>(get_class());
        }
    } // namespace ITimelineEventProvider
} // namespace app::classes::types
