#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PerformanceDebugMenuPage_c__Class.h>
#include <Modloader/app/structs/PerformanceDebugMenuPage_c.h>

namespace app::classes::types {
    namespace PerformanceDebugMenuPage_c {
        inline app::PerformanceDebugMenuPage_c__Class** type_info = (app::PerformanceDebugMenuPage_c__Class**)(modloader::win::memory::resolve_rva(0x0476B2F0));
        inline app::PerformanceDebugMenuPage_c__Class* get_class() {
            return il2cpp::get_nested_class<app::PerformanceDebugMenuPage_c__Class>(type_info, "", "PerformanceDebugMenuPage", "<>c");
        }
        inline app::PerformanceDebugMenuPage_c* create() {
            return il2cpp::create_object<app::PerformanceDebugMenuPage_c>(get_class());
        }
    } // namespace PerformanceDebugMenuPage_c
} // namespace app::classes::types
