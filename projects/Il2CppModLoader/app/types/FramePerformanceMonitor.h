#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FramePerformanceMonitor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FramePerformanceMonitor__Class** type_info;
        inline app::FramePerformanceMonitor__Class* get_class() {
            return il2cpp::get_class<app::FramePerformanceMonitor__Class>(type_info, "", "FramePerformanceMonitor");
        }
        inline app::FramePerformanceMonitor* create() {
            return il2cpp::create_object<app::FramePerformanceMonitor>(get_class());
        }
    } // namespace FramePerformanceMonitor
} // namespace app::classes::types
