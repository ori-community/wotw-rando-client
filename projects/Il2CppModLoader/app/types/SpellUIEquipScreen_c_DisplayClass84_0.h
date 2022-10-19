#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpellUIEquipScreen_c_DisplayClass84_0 {
        inline app::SpellUIEquipScreen_c_DisplayClass84_0__Class** type_info = (app::SpellUIEquipScreen_c_DisplayClass84_0__Class**)(modloader::win::memory::resolve_rva(0x04788D88));
        inline app::SpellUIEquipScreen_c_DisplayClass84_0__Class* get_class() {
            return il2cpp::get_nested_class<app::SpellUIEquipScreen_c_DisplayClass84_0__Class>(type_info, "", "SpellUIEquipScreen", "<>c__DisplayClass84_0");
        }
        inline app::SpellUIEquipScreen_c_DisplayClass84_0* create() {
            return il2cpp::create_object<app::SpellUIEquipScreen_c_DisplayClass84_0>(get_class());
        }
    } // namespace SpellUIEquipScreen_c_DisplayClass84_0
} // namespace app::classes::types
