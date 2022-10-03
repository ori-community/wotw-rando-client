#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FramePerformanceMonitor_PerformanceFrameData_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FramePerformanceMonitor_PerformanceFrameData_c__Class** type_info;
        inline app::FramePerformanceMonitor_PerformanceFrameData_c__Class* get_class() {
            return il2cpp::get_nested_class<app::FramePerformanceMonitor_PerformanceFrameData_c__Class>(type_info, "", "FramePerformanceMonitor+PerformanceFrameData", "<>c");
        }
        inline app::FramePerformanceMonitor_PerformanceFrameData_c* create() {
            return il2cpp::create_object<app::FramePerformanceMonitor_PerformanceFrameData_c>(get_class());
        }
    } // namespace FramePerformanceMonitor_PerformanceFrameData_c
} // namespace app::classes::types
