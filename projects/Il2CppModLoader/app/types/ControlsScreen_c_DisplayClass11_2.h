#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ControlsScreen_c_DisplayClass11_2 {
        inline app::ControlsScreen_c_DisplayClass11_2__Class** type_info = (app::ControlsScreen_c_DisplayClass11_2__Class**)(modloader::win::memory::resolve_rva(0x04712E88));
        inline app::ControlsScreen_c_DisplayClass11_2__Class* get_class() {
            return il2cpp::get_nested_class<app::ControlsScreen_c_DisplayClass11_2__Class>(type_info, "", "ControlsScreen", "<>c__DisplayClass11_2");
        }
        inline app::ControlsScreen_c_DisplayClass11_2* create() {
            return il2cpp::create_object<app::ControlsScreen_c_DisplayClass11_2>(get_class());
        }
    } // namespace ControlsScreen_c_DisplayClass11_2
} // namespace app::classes::types
