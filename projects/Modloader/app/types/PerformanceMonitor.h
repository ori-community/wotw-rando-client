#pragma once
#include <Modloader/app/structs/PerformanceMonitor.h>
#include <Modloader/app/structs/PerformanceMonitor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PerformanceMonitor {
        inline app::PerformanceMonitor__Class** type_info() {
            static app::PerformanceMonitor__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PerformanceMonitor__Class**)(modloader::win::memory::resolve_rva(0x04729E08));
            }
            return cache;
        }
        inline app::PerformanceMonitor__Class* get_class() {
            return il2cpp::get_class<app::PerformanceMonitor__Class>(type_info(), "", "PerformanceMonitor");
        }
        inline app::PerformanceMonitor* create() {
            return il2cpp::create_object<app::PerformanceMonitor>(get_class());
        }
    } // namespace PerformanceMonitor
} // namespace app::classes::types
