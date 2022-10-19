#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonTimelineNotifier_c {
        inline app::MoonTimelineNotifier_c__Class** type_info = (app::MoonTimelineNotifier_c__Class**)(modloader::win::memory::resolve_rva(0x047945A0));
        inline app::MoonTimelineNotifier_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonTimelineNotifier_c__Class>(type_info, "Moon.Timeline", "MoonTimelineNotifier", "<>c");
        }
        inline app::MoonTimelineNotifier_c* create() {
            return il2cpp::create_object<app::MoonTimelineNotifier_c>(get_class());
        }
    } // namespace MoonTimelineNotifier_c
} // namespace app::classes::types
