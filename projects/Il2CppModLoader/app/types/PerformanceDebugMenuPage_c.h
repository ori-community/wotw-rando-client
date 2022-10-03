#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PerformanceDebugMenuPage_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PerformanceDebugMenuPage_c__Class** type_info;
        inline app::PerformanceDebugMenuPage_c__Class* get_class() {
            return il2cpp::get_nested_class<app::PerformanceDebugMenuPage_c__Class>(type_info, "", "PerformanceDebugMenuPage", "<>c");
        }
        inline app::PerformanceDebugMenuPage_c* create() {
            return il2cpp::create_object<app::PerformanceDebugMenuPage_c>(get_class());
        }
    } // namespace PerformanceDebugMenuPage_c
} // namespace app::classes::types
