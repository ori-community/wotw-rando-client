#pragma once
#include <Modloader/app/structs/FramePerformanceMonitor.h>
#include <Modloader/app/structs/FramePerformanceMonitor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FramePerformanceMonitor {
        inline app::FramePerformanceMonitor__Class** type_info() {
            static app::FramePerformanceMonitor__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FramePerformanceMonitor__Class**)(modloader::win::memory::resolve_rva(0x04758AC8));
            }
            return cache;
        }
        inline app::FramePerformanceMonitor__Class* get_class() {
            return il2cpp::get_class<app::FramePerformanceMonitor__Class>(type_info(), "", "FramePerformanceMonitor");
        }
        inline app::FramePerformanceMonitor* create() {
            return il2cpp::create_object<app::FramePerformanceMonitor>(get_class());
        }
    } // namespace FramePerformanceMonitor
} // namespace app::classes::types
