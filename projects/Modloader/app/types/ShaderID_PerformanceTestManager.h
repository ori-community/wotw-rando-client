#pragma once
#include <Modloader/app/structs/ShaderID_PerformanceTestManager.h>
#include <Modloader/app/structs/ShaderID_PerformanceTestManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_PerformanceTestManager {
        inline app::ShaderID_PerformanceTestManager__Class** type_info() {
            static app::ShaderID_PerformanceTestManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_PerformanceTestManager__Class**)(modloader::win::memory::resolve_rva(0x04715738));
            }
            return cache;
        }
        inline app::ShaderID_PerformanceTestManager__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_PerformanceTestManager__Class>(type_info(), "", "ShaderID_PerformanceTestManager");
        }
        inline app::ShaderID_PerformanceTestManager* create() {
            return il2cpp::create_object<app::ShaderID_PerformanceTestManager>(get_class());
        }
    } // namespace ShaderID_PerformanceTestManager
} // namespace app::classes::types
