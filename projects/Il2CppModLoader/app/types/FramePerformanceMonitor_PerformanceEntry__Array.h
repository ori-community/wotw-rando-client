#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FramePerformanceMonitor_PerformanceEntry__Array {
        namespace {
            inline app::FramePerformanceMonitor_PerformanceEntry__Array__Class* type_info_ref = nullptr;
        }
        inline app::FramePerformanceMonitor_PerformanceEntry__Array__Class** type_info = &type_info_ref;
        inline app::FramePerformanceMonitor_PerformanceEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::FramePerformanceMonitor_PerformanceEntry__Array__Class>(type_info, "", "FramePerformanceMonitor+PerformanceEntry[]");
        }
        inline app::FramePerformanceMonitor_PerformanceEntry__Array* create() {
            return il2cpp::create_object<app::FramePerformanceMonitor_PerformanceEntry__Array>(get_class());
        }
    } // namespace FramePerformanceMonitor_PerformanceEntry__Array
} // namespace app::classes::types
