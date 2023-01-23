#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FramePerformanceMonitor__Class.h>
#include <Modloader/app/structs/FramePerformanceMonitor.h>

namespace app::classes::types {
    namespace FramePerformanceMonitor {
        inline app::FramePerformanceMonitor__Class** type_info = (app::FramePerformanceMonitor__Class**)(modloader::win::memory::resolve_rva(0x04758AC8));
        inline app::FramePerformanceMonitor__Class* get_class() {
            return il2cpp::get_class<app::FramePerformanceMonitor__Class>(type_info, "", "FramePerformanceMonitor");
        }
        inline app::FramePerformanceMonitor* create() {
            return il2cpp::create_object<app::FramePerformanceMonitor>(get_class());
        }
    } // namespace FramePerformanceMonitor
} // namespace app::classes::types
