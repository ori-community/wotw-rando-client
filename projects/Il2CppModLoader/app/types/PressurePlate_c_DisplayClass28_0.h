#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PressurePlate_c_DisplayClass28_0 {
        inline app::PressurePlate_c_DisplayClass28_0__Class** type_info = (app::PressurePlate_c_DisplayClass28_0__Class**)(modloader::win::memory::resolve_rva(0x04793150));
        inline app::PressurePlate_c_DisplayClass28_0__Class* get_class() {
            return il2cpp::get_nested_class<app::PressurePlate_c_DisplayClass28_0__Class>(type_info, "", "PressurePlate", "<>c__DisplayClass28_0");
        }
        inline app::PressurePlate_c_DisplayClass28_0* create() {
            return il2cpp::create_object<app::PressurePlate_c_DisplayClass28_0>(get_class());
        }
    } // namespace PressurePlate_c_DisplayClass28_0
} // namespace app::classes::types
