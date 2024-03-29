#pragma once
#include <Modloader/app/structs/PerformanceTestManager.h>
#include <Modloader/app/structs/PerformanceTestManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PerformanceTestManager {
        inline app::PerformanceTestManager__Class** type_info() {
            static app::PerformanceTestManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PerformanceTestManager__Class**)(modloader::win::memory::resolve_rva(0x0474FBF8));
            }
            return cache;
        }
        inline app::PerformanceTestManager__Class* get_class() {
            return il2cpp::get_class<app::PerformanceTestManager__Class>(type_info(), "", "PerformanceTestManager");
        }
        inline app::PerformanceTestManager* create() {
            return il2cpp::create_object<app::PerformanceTestManager>(get_class());
        }
    } // namespace PerformanceTestManager
} // namespace app::classes::types
