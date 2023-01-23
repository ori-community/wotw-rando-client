#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PerformanceDebugMenuPage__Class.h>
#include <Modloader/app/structs/PerformanceDebugMenuPage.h>

namespace app::classes::types {
    namespace PerformanceDebugMenuPage {
        inline app::PerformanceDebugMenuPage__Class** type_info = (app::PerformanceDebugMenuPage__Class**)(modloader::win::memory::resolve_rva(0x0471BF40));
        inline app::PerformanceDebugMenuPage__Class* get_class() {
            return il2cpp::get_class<app::PerformanceDebugMenuPage__Class>(type_info, "", "PerformanceDebugMenuPage");
        }
        inline app::PerformanceDebugMenuPage* create() {
            return il2cpp::create_object<app::PerformanceDebugMenuPage>(get_class());
        }
    } // namespace PerformanceDebugMenuPage
} // namespace app::classes::types
