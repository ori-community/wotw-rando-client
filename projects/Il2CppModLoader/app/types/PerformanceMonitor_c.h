#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PerformanceMonitor_c {
        inline app::PerformanceMonitor_c__Class** type_info = (app::PerformanceMonitor_c__Class**)(modloader::win::memory::resolve_rva(0x0471FA70));
        inline app::PerformanceMonitor_c__Class* get_class() {
            return il2cpp::get_nested_class<app::PerformanceMonitor_c__Class>(type_info, "", "PerformanceMonitor", "<>c");
        }
        inline app::PerformanceMonitor_c* create() {
            return il2cpp::create_object<app::PerformanceMonitor_c>(get_class());
        }
    } // namespace PerformanceMonitor_c
} // namespace app::classes::types
