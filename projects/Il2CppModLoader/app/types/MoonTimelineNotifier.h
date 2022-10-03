#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonTimelineNotifier {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonTimelineNotifier__Class** type_info;
        inline app::MoonTimelineNotifier__Class* get_class() {
            return il2cpp::get_class<app::MoonTimelineNotifier__Class>(type_info, "Moon.Timeline", "MoonTimelineNotifier");
        }
        inline app::MoonTimelineNotifier* create() {
            return il2cpp::create_object<app::MoonTimelineNotifier>(get_class());
        }
    } // namespace MoonTimelineNotifier
} // namespace app::classes::types
