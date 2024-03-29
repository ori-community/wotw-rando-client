#pragma once
#include <Modloader/app/structs/FramePerformanceMonitor_PerformanceEntry__Array.h>
#include <Modloader/app/structs/FramePerformanceMonitor_PerformanceEntry__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FramePerformanceMonitor_PerformanceEntry__Array {
        inline app::FramePerformanceMonitor_PerformanceEntry__Array__Class** type_info() {
            static app::FramePerformanceMonitor_PerformanceEntry__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FramePerformanceMonitor_PerformanceEntry__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FramePerformanceMonitor_PerformanceEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::FramePerformanceMonitor_PerformanceEntry__Array__Class>(type_info(), "", "FramePerformanceMonitor+PerformanceEntry[]");
        }
        inline app::FramePerformanceMonitor_PerformanceEntry__Array* create() {
            return il2cpp::create_object<app::FramePerformanceMonitor_PerformanceEntry__Array>(get_class());
        }
    } // namespace FramePerformanceMonitor_PerformanceEntry__Array
} // namespace app::classes::types
