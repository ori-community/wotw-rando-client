#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EquipmentScreen_State__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EquipmentScreen_State__Enum__Class** type_info;
        inline app::EquipmentScreen_State__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::EquipmentScreen_State__Enum__Class>(type_info, "", "EquipmentScreen", "State");
        }
        inline app::EquipmentScreen_State__Enum* create() {
            return il2cpp::create_object<app::EquipmentScreen_State__Enum>(get_class());
        }
    } // namespace EquipmentScreen_State__Enum
} // namespace app::classes::types
