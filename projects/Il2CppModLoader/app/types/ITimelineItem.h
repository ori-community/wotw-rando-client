#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ITimelineItem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ITimelineItem__Class** type_info;
        inline app::ITimelineItem__Class* get_class() {
            return il2cpp::get_class<app::ITimelineItem__Class>(type_info, "Moon.Timeline", "ITimelineItem");
        }
        inline app::ITimelineItem* create() {
            return il2cpp::create_object<app::ITimelineItem>(get_class());
        }
    } // namespace ITimelineItem
} // namespace app::classes::types
