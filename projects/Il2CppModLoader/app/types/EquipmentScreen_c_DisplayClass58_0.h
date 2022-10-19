#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EquipmentScreen_c_DisplayClass58_0 {
        inline app::EquipmentScreen_c_DisplayClass58_0__Class** type_info = (app::EquipmentScreen_c_DisplayClass58_0__Class**)(modloader::win::memory::resolve_rva(0x0470E660));
        inline app::EquipmentScreen_c_DisplayClass58_0__Class* get_class() {
            return il2cpp::get_nested_class<app::EquipmentScreen_c_DisplayClass58_0__Class>(type_info, "", "EquipmentScreen", "<>c__DisplayClass58_0");
        }
        inline app::EquipmentScreen_c_DisplayClass58_0* create() {
            return il2cpp::create_object<app::EquipmentScreen_c_DisplayClass58_0>(get_class());
        }
    } // namespace EquipmentScreen_c_DisplayClass58_0
} // namespace app::classes::types
