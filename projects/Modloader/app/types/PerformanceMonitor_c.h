#pragma once
#include <Modloader/app/structs/PerformanceMonitor_c.h>
#include <Modloader/app/structs/PerformanceMonitor_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PerformanceMonitor_c {
        inline app::PerformanceMonitor_c__Class** type_info() {
            static app::PerformanceMonitor_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PerformanceMonitor_c__Class**)(modloader::win::memory::resolve_rva(0x0471FA70));
            }
            return cache;
        }
        inline app::PerformanceMonitor_c__Class* get_class() {
            return il2cpp::get_nested_class<app::PerformanceMonitor_c__Class>(type_info(), "", "PerformanceMonitor", "<>c");
        }
        inline app::PerformanceMonitor_c* create() {
            return il2cpp::create_object<app::PerformanceMonitor_c>(get_class());
        }
    } // namespace PerformanceMonitor_c
} // namespace app::classes::types
