#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GeneralDebugMenuPage_c_DisplayClass32_0 {
        inline app::GeneralDebugMenuPage_c_DisplayClass32_0__Class** type_info = (app::GeneralDebugMenuPage_c_DisplayClass32_0__Class**)(modloader::win::memory::resolve_rva(0x04788EB0));
        inline app::GeneralDebugMenuPage_c_DisplayClass32_0__Class* get_class() {
            return il2cpp::get_nested_class<app::GeneralDebugMenuPage_c_DisplayClass32_0__Class>(type_info, "", "GeneralDebugMenuPage", "<>c__DisplayClass32_0");
        }
        inline app::GeneralDebugMenuPage_c_DisplayClass32_0* create() {
            return il2cpp::create_object<app::GeneralDebugMenuPage_c_DisplayClass32_0>(get_class());
        }
    } // namespace GeneralDebugMenuPage_c_DisplayClass32_0
} // namespace app::classes::types
