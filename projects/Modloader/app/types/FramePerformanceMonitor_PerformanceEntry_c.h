#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FramePerformanceMonitor_PerformanceEntry_c__Class.h>
#include <Modloader/app/structs/FramePerformanceMonitor_PerformanceEntry_c.h>

namespace app::classes::types {
    namespace FramePerformanceMonitor_PerformanceEntry_c {
        inline app::FramePerformanceMonitor_PerformanceEntry_c__Class** type_info = (app::FramePerformanceMonitor_PerformanceEntry_c__Class**)(modloader::win::memory::resolve_rva(0x04781690));
        inline app::FramePerformanceMonitor_PerformanceEntry_c__Class* get_class() {
            return il2cpp::get_nested_class<app::FramePerformanceMonitor_PerformanceEntry_c__Class>(type_info, "", "FramePerformanceMonitor+PerformanceEntry", "<>c");
        }
        inline app::FramePerformanceMonitor_PerformanceEntry_c* create() {
            return il2cpp::create_object<app::FramePerformanceMonitor_PerformanceEntry_c>(get_class());
        }
    } // namespace FramePerformanceMonitor_PerformanceEntry_c
} // namespace app::classes::types
