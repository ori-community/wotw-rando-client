#pragma once
#include <Modloader/app/structs/FramePerformanceMonitor_PerformanceFrameData__Array.h>
#include <Modloader/app/structs/FramePerformanceMonitor_PerformanceFrameData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FramePerformanceMonitor_PerformanceFrameData__Array {
        inline app::FramePerformanceMonitor_PerformanceFrameData__Array__Class** type_info() {
            static app::FramePerformanceMonitor_PerformanceFrameData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FramePerformanceMonitor_PerformanceFrameData__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FramePerformanceMonitor_PerformanceFrameData__Array__Class* get_class() {
            return il2cpp::get_class<app::FramePerformanceMonitor_PerformanceFrameData__Array__Class>(type_info(), "", "FramePerformanceMonitor+PerformanceFrameData[]");
        }
        inline app::FramePerformanceMonitor_PerformanceFrameData__Array* create() {
            return il2cpp::create_object<app::FramePerformanceMonitor_PerformanceFrameData__Array>(get_class());
        }
    } // namespace FramePerformanceMonitor_PerformanceFrameData__Array
} // namespace app::classes::types
