#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PerformanceMonitor_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PerformanceMonitor_c__Class** type_info;
        inline app::PerformanceMonitor_c__Class* get_class() {
            return il2cpp::get_nested_class<app::PerformanceMonitor_c__Class>(type_info, "", "PerformanceMonitor", "<>c");
        }
        inline app::PerformanceMonitor_c* create() {
            return il2cpp::create_object<app::PerformanceMonitor_c>(get_class());
        }
    } // namespace PerformanceMonitor_c
} // namespace app::classes::types
