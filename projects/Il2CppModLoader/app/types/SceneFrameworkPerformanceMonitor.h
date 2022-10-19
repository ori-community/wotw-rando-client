#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SceneFrameworkPerformanceMonitor {
        inline app::SceneFrameworkPerformanceMonitor__Class** type_info = (app::SceneFrameworkPerformanceMonitor__Class**)(modloader::win::memory::resolve_rva(0x04719800));
        inline app::SceneFrameworkPerformanceMonitor__Class* get_class() {
            return il2cpp::get_class<app::SceneFrameworkPerformanceMonitor__Class>(type_info, "", "SceneFrameworkPerformanceMonitor");
        }
        inline app::SceneFrameworkPerformanceMonitor* create() {
            return il2cpp::create_object<app::SceneFrameworkPerformanceMonitor>(get_class());
        }
    } // namespace SceneFrameworkPerformanceMonitor
} // namespace app::classes::types
