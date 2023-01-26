#pragma once
#include <Modloader/app/structs/FramePerformanceMonitor_PerformanceEntry_c.h>
#include <Modloader/app/structs/FramePerformanceMonitor_PerformanceEntry_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FramePerformanceMonitor_PerformanceEntry_c {
        inline app::FramePerformanceMonitor_PerformanceEntry_c__Class** type_info() {
            static app::FramePerformanceMonitor_PerformanceEntry_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FramePerformanceMonitor_PerformanceEntry_c__Class**)(modloader::win::memory::resolve_rva(0x04781690));
            }
            return cache;
        }
        inline app::FramePerformanceMonitor_PerformanceEntry_c__Class* get_class() {
            return il2cpp::get_nested_class<app::FramePerformanceMonitor_PerformanceEntry_c__Class>(type_info(), "", "FramePerformanceMonitor+PerformanceEntry", "<>c");
        }
        inline app::FramePerformanceMonitor_PerformanceEntry_c* create() {
            return il2cpp::create_object<app::FramePerformanceMonitor_PerformanceEntry_c>(get_class());
        }
    } // namespace FramePerformanceMonitor_PerformanceEntry_c
} // namespace app::classes::types
