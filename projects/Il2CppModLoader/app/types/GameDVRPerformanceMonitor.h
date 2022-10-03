#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GameDVRPerformanceMonitor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GameDVRPerformanceMonitor__Class** type_info;
        inline app::GameDVRPerformanceMonitor__Class* get_class() {
            return il2cpp::get_class<app::GameDVRPerformanceMonitor__Class>(type_info, "", "GameDVRPerformanceMonitor");
        }
        inline app::GameDVRPerformanceMonitor* create() {
            return il2cpp::create_object<app::GameDVRPerformanceMonitor>(get_class());
        }
    } // namespace GameDVRPerformanceMonitor
} // namespace app::classes::types
