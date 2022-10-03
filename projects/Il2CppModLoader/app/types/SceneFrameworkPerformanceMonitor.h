#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneFrameworkPerformanceMonitor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SceneFrameworkPerformanceMonitor__Class** type_info;
        inline app::SceneFrameworkPerformanceMonitor__Class* get_class() {
            return il2cpp::get_class<app::SceneFrameworkPerformanceMonitor__Class>(type_info, "", "SceneFrameworkPerformanceMonitor");
        }
        inline app::SceneFrameworkPerformanceMonitor* create() {
            return il2cpp::create_object<app::SceneFrameworkPerformanceMonitor>(get_class());
        }
    } // namespace SceneFrameworkPerformanceMonitor
} // namespace app::classes::types
