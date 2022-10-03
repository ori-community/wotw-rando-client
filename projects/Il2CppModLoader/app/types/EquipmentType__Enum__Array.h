#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EquipmentType__Enum__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EquipmentType__Enum__Array__Class** type_info;
        inline app::EquipmentType__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::EquipmentType__Enum__Array__Class>(type_info, "", "EquipmentType[]");
        }
        inline app::EquipmentType__Enum__Array* create() {
            return il2cpp::create_object<app::EquipmentType__Enum__Array>(get_class());
        }
    } // namespace EquipmentType__Enum__Array
} // namespace app::classes::types
