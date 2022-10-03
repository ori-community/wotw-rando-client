#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PerformanceMonitor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PerformanceMonitor__Class** type_info;
        inline app::PerformanceMonitor__Class* get_class() {
            return il2cpp::get_class<app::PerformanceMonitor__Class>(type_info, "", "PerformanceMonitor");
        }
        inline app::PerformanceMonitor* create() {
            return il2cpp::create_object<app::PerformanceMonitor>(get_class());
        }
    } // namespace PerformanceMonitor
} // namespace app::classes::types
