#pragma once
#include <Modloader/app/structs/SceneFrameworkPerformanceMonitor.h>
#include <Modloader/app/structs/SceneFrameworkPerformanceMonitor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneFrameworkPerformanceMonitor {
        inline app::SceneFrameworkPerformanceMonitor__Class** type_info() {
            static app::SceneFrameworkPerformanceMonitor__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SceneFrameworkPerformanceMonitor__Class**)(modloader::win::memory::resolve_rva(0x04719800));
            }
            return cache;
        }
        inline app::SceneFrameworkPerformanceMonitor__Class* get_class() {
            return il2cpp::get_class<app::SceneFrameworkPerformanceMonitor__Class>(type_info(), "", "SceneFrameworkPerformanceMonitor");
        }
        inline app::SceneFrameworkPerformanceMonitor* create() {
            return il2cpp::create_object<app::SceneFrameworkPerformanceMonitor>(get_class());
        }
    } // namespace SceneFrameworkPerformanceMonitor
} // namespace app::classes::types
