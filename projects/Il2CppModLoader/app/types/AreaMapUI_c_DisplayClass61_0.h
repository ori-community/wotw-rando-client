#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AreaMapUI_c_DisplayClass61_0 {
        inline app::AreaMapUI_c_DisplayClass61_0__Class** type_info = (app::AreaMapUI_c_DisplayClass61_0__Class**)(modloader::win::memory::resolve_rva(0x04747428));
        inline app::AreaMapUI_c_DisplayClass61_0__Class* get_class() {
            return il2cpp::get_nested_class<app::AreaMapUI_c_DisplayClass61_0__Class>(type_info, "", "AreaMapUI", "<>c__DisplayClass61_0");
        }
        inline app::AreaMapUI_c_DisplayClass61_0* create() {
            return il2cpp::create_object<app::AreaMapUI_c_DisplayClass61_0>(get_class());
        }
    } // namespace AreaMapUI_c_DisplayClass61_0
} // namespace app::classes::types
