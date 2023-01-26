#pragma once
#include <Modloader/app/structs/PerformanceDebugMenuPage_c_DisplayClass14_0.h>
#include <Modloader/app/structs/PerformanceDebugMenuPage_c_DisplayClass14_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PerformanceDebugMenuPage_c_DisplayClass14_0 {
        inline app::PerformanceDebugMenuPage_c_DisplayClass14_0__Class** type_info() {
            static app::PerformanceDebugMenuPage_c_DisplayClass14_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PerformanceDebugMenuPage_c_DisplayClass14_0__Class**)(modloader::win::memory::resolve_rva(0x0477D070));
            }
            return cache;
        }
        inline app::PerformanceDebugMenuPage_c_DisplayClass14_0__Class* get_class() {
            return il2cpp::get_nested_class<app::PerformanceDebugMenuPage_c_DisplayClass14_0__Class>(type_info(), "", "PerformanceDebugMenuPage", "<>c__DisplayClass14_0");
        }
        inline app::PerformanceDebugMenuPage_c_DisplayClass14_0* create() {
            return il2cpp::create_object<app::PerformanceDebugMenuPage_c_DisplayClass14_0>(get_class());
        }
    } // namespace PerformanceDebugMenuPage_c_DisplayClass14_0
} // namespace app::classes::types
