#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PerformanceMonitor__Class.h>
#include <Modloader/app/structs/PerformanceMonitor.h>

namespace app::classes::types {
    namespace PerformanceMonitor {
        inline app::PerformanceMonitor__Class** type_info = (app::PerformanceMonitor__Class**)(modloader::win::memory::resolve_rva(0x04729E08));
        inline app::PerformanceMonitor__Class* get_class() {
            return il2cpp::get_class<app::PerformanceMonitor__Class>(type_info, "", "PerformanceMonitor");
        }
        inline app::PerformanceMonitor* create() {
            return il2cpp::create_object<app::PerformanceMonitor>(get_class());
        }
    } // namespace PerformanceMonitor
} // namespace app::classes::types
