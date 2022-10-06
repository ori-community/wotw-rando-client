#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FramePerformanceMonitor_PerformanceEntry {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FramePerformanceMonitor_PerformanceEntry__Class** type_info;
        inline app::FramePerformanceMonitor_PerformanceEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::FramePerformanceMonitor_PerformanceEntry__Class>(type_info, "", "FramePerformanceMonitor", "PerformanceEntry");
        }
        inline app::FramePerformanceMonitor_PerformanceEntry* create() {
            return il2cpp::create_object<app::FramePerformanceMonitor_PerformanceEntry>(get_class());
        }
        inline app::FramePerformanceMonitor_PerformanceEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::FramePerformanceMonitor_PerformanceEntry__Array>(get_class(), size);
        }
        inline app::FramePerformanceMonitor_PerformanceEntry__Array* create_array(const std::vector<app::FramePerformanceMonitor_PerformanceEntry*>& items) {
            return il2cpp::array_new<app::FramePerformanceMonitor_PerformanceEntry__Array>(get_class(), items);
        }
    } // namespace FramePerformanceMonitor_PerformanceEntry
} // namespace app::classes::types
