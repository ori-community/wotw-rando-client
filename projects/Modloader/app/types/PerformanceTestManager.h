#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PerformanceTestManager__Class.h>
#include <Modloader/app/structs/PerformanceTestManager.h>

namespace app::classes::types {
    namespace PerformanceTestManager {
        inline app::PerformanceTestManager__Class** type_info = (app::PerformanceTestManager__Class**)(modloader::win::memory::resolve_rva(0x0474FBF8));
        inline app::PerformanceTestManager__Class* get_class() {
            return il2cpp::get_class<app::PerformanceTestManager__Class>(type_info, "", "PerformanceTestManager");
        }
        inline app::PerformanceTestManager* create() {
            return il2cpp::create_object<app::PerformanceTestManager>(get_class());
        }
    } // namespace PerformanceTestManager
} // namespace app::classes::types
