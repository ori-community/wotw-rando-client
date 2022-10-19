#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LegacyPressurePlate_c_DisplayClass8_0 {
        inline app::LegacyPressurePlate_c_DisplayClass8_0__Class** type_info = (app::LegacyPressurePlate_c_DisplayClass8_0__Class**)(modloader::win::memory::resolve_rva(0x04722610));
        inline app::LegacyPressurePlate_c_DisplayClass8_0__Class* get_class() {
            return il2cpp::get_nested_class<app::LegacyPressurePlate_c_DisplayClass8_0__Class>(type_info, "", "LegacyPressurePlate", "<>c__DisplayClass8_0");
        }
        inline app::LegacyPressurePlate_c_DisplayClass8_0* create() {
            return il2cpp::create_object<app::LegacyPressurePlate_c_DisplayClass8_0>(get_class());
        }
    } // namespace LegacyPressurePlate_c_DisplayClass8_0
} // namespace app::classes::types
