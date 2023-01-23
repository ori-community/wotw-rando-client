#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FramePerformanceMonitor_PerformanceFrameData__Class.h>
#include <Modloader/app/structs/FramePerformanceMonitor_PerformanceFrameData.h>
#include <Modloader/app/structs/FramePerformanceMonitor_PerformanceFrameData__Boxed.h>
#include <Modloader/app/structs/FramePerformanceMonitor_PerformanceFrameData__Array.h>

namespace app::classes::types {
    namespace FramePerformanceMonitor_PerformanceFrameData {
        inline app::FramePerformanceMonitor_PerformanceFrameData__Class** type_info = (app::FramePerformanceMonitor_PerformanceFrameData__Class**)(modloader::win::memory::resolve_rva(0x04710F10));
        inline app::FramePerformanceMonitor_PerformanceFrameData__Class* get_class() {
            return il2cpp::get_nested_class<app::FramePerformanceMonitor_PerformanceFrameData__Class>(type_info, "", "FramePerformanceMonitor", "PerformanceFrameData");
        }
        inline app::FramePerformanceMonitor_PerformanceFrameData* create() {
            return il2cpp::create_object<app::FramePerformanceMonitor_PerformanceFrameData>(get_class());
        }
        inline app::FramePerformanceMonitor_PerformanceFrameData__Boxed* box(app::FramePerformanceMonitor_PerformanceFrameData value) {
            return il2cpp::box_value<app::FramePerformanceMonitor_PerformanceFrameData__Boxed>(get_class(), value);
        }
        inline app::FramePerformanceMonitor_PerformanceFrameData__Array* create_array(int size) {
            return il2cpp::array_new<app::FramePerformanceMonitor_PerformanceFrameData__Array>(get_class(), size);
        }
        inline app::FramePerformanceMonitor_PerformanceFrameData__Array* create_array(const std::vector<app::FramePerformanceMonitor_PerformanceFrameData>& items) {
            return il2cpp::array_new<app::FramePerformanceMonitor_PerformanceFrameData__Array>(get_class(), items);
        }
    } // namespace FramePerformanceMonitor_PerformanceFrameData
} // namespace app::classes::types
