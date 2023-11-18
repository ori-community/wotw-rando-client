#pragma once
#include <Modloader/app/structs/FramePerformanceMonitor_PerformanceFrameData_c.h>
#include <Modloader/app/structs/FramePerformanceMonitor_PerformanceFrameData_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FramePerformanceMonitor_PerformanceFrameData_c {
        inline app::FramePerformanceMonitor_PerformanceFrameData_c__Class** type_info() {
            static app::FramePerformanceMonitor_PerformanceFrameData_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FramePerformanceMonitor_PerformanceFrameData_c__Class**)(modloader::win::memory::resolve_rva(0x04704060));
            }
            return cache;
        }
        inline app::FramePerformanceMonitor_PerformanceFrameData_c__Class* get_class() {
            return il2cpp::get_nested_class<app::FramePerformanceMonitor_PerformanceFrameData_c__Class>(type_info(), "", "FramePerformanceMonitor+PerformanceFrameData", "<>c");
        }
        inline app::FramePerformanceMonitor_PerformanceFrameData_c* create() {
            return il2cpp::create_object<app::FramePerformanceMonitor_PerformanceFrameData_c>(get_class());
        }
    } // namespace FramePerformanceMonitor_PerformanceFrameData_c
} // namespace app::classes::types
