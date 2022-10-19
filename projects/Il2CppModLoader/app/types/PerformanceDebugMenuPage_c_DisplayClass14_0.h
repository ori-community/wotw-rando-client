#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PerformanceDebugMenuPage_c_DisplayClass14_0 {
        inline app::PerformanceDebugMenuPage_c_DisplayClass14_0__Class** type_info = (app::PerformanceDebugMenuPage_c_DisplayClass14_0__Class**)(modloader::win::memory::resolve_rva(0x0477D070));
        inline app::PerformanceDebugMenuPage_c_DisplayClass14_0__Class* get_class() {
            return il2cpp::get_nested_class<app::PerformanceDebugMenuPage_c_DisplayClass14_0__Class>(type_info, "", "PerformanceDebugMenuPage", "<>c__DisplayClass14_0");
        }
        inline app::PerformanceDebugMenuPage_c_DisplayClass14_0* create() {
            return il2cpp::create_object<app::PerformanceDebugMenuPage_c_DisplayClass14_0>(get_class());
        }
    } // namespace PerformanceDebugMenuPage_c_DisplayClass14_0
} // namespace app::classes::types
