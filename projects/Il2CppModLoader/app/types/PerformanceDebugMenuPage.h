#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PerformanceDebugMenuPage {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PerformanceDebugMenuPage__Class** type_info;
        inline app::PerformanceDebugMenuPage__Class* get_class() {
            return il2cpp::get_class<app::PerformanceDebugMenuPage__Class>(type_info, "", "PerformanceDebugMenuPage");
        }
        inline app::PerformanceDebugMenuPage* create() {
            return il2cpp::create_object<app::PerformanceDebugMenuPage>(get_class());
        }
    } // namespace PerformanceDebugMenuPage
} // namespace app::classes::types
