#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EquipmentScreen_c {
        inline app::EquipmentScreen_c__Class** type_info = (app::EquipmentScreen_c__Class**)(modloader::win::memory::resolve_rva(0x04782EF0));
        inline app::EquipmentScreen_c__Class* get_class() {
            return il2cpp::get_nested_class<app::EquipmentScreen_c__Class>(type_info, "", "EquipmentScreen", "<>c");
        }
        inline app::EquipmentScreen_c* create() {
            return il2cpp::create_object<app::EquipmentScreen_c>(get_class());
        }
    } // namespace EquipmentScreen_c
} // namespace app::classes::types
