#pragma once
#include <Modloader/app/structs/PerformanceDebugMenuPage.h>
#include <Modloader/app/structs/PerformanceDebugMenuPage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PerformanceDebugMenuPage {
        inline app::PerformanceDebugMenuPage__Class** type_info() {
            static app::PerformanceDebugMenuPage__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PerformanceDebugMenuPage__Class**)(modloader::win::memory::resolve_rva(0x0471BF40));
            }
            return cache;
        }
        inline app::PerformanceDebugMenuPage__Class* get_class() {
            return il2cpp::get_class<app::PerformanceDebugMenuPage__Class>(type_info(), "", "PerformanceDebugMenuPage");
        }
        inline app::PerformanceDebugMenuPage* create() {
            return il2cpp::create_object<app::PerformanceDebugMenuPage>(get_class());
        }
    } // namespace PerformanceDebugMenuPage
} // namespace app::classes::types
