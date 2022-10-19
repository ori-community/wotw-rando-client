#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FramePerformanceMonitor_PerformanceFrameData__Array {
        namespace {
            inline app::FramePerformanceMonitor_PerformanceFrameData__Array__Class* type_info_ref = nullptr;
        }
        inline app::FramePerformanceMonitor_PerformanceFrameData__Array__Class** type_info = &type_info_ref;
        inline app::FramePerformanceMonitor_PerformanceFrameData__Array__Class* get_class() {
            return il2cpp::get_class<app::FramePerformanceMonitor_PerformanceFrameData__Array__Class>(type_info, "", "FramePerformanceMonitor+PerformanceFrameData[]");
        }
        inline app::FramePerformanceMonitor_PerformanceFrameData__Array* create() {
            return il2cpp::create_object<app::FramePerformanceMonitor_PerformanceFrameData__Array>(get_class());
        }
    } // namespace FramePerformanceMonitor_PerformanceFrameData__Array
} // namespace app::classes::types
