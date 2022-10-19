#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GeneralDebugMenuPage_c_DisplayClass18_3 {
        inline app::GeneralDebugMenuPage_c_DisplayClass18_3__Class** type_info = (app::GeneralDebugMenuPage_c_DisplayClass18_3__Class**)(modloader::win::memory::resolve_rva(0x0475FBA8));
        inline app::GeneralDebugMenuPage_c_DisplayClass18_3__Class* get_class() {
            return il2cpp::get_nested_class<app::GeneralDebugMenuPage_c_DisplayClass18_3__Class>(type_info, "", "GeneralDebugMenuPage", "<>c__DisplayClass18_3");
        }
        inline app::GeneralDebugMenuPage_c_DisplayClass18_3* create() {
            return il2cpp::create_object<app::GeneralDebugMenuPage_c_DisplayClass18_3>(get_class());
        }
    } // namespace GeneralDebugMenuPage_c_DisplayClass18_3
} // namespace app::classes::types
