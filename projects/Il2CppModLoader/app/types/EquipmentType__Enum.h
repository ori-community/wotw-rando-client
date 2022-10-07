#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EquipmentType__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EquipmentType__Enum__Class** type_info;
        inline app::EquipmentType__Enum__Class* get_class() {
            return il2cpp::get_class<app::EquipmentType__Enum__Class>(type_info, "", "EquipmentType");
        }
        inline app::EquipmentType__Enum* create() {
            return il2cpp::create_object<app::EquipmentType__Enum>(get_class());
        }
        inline app::EquipmentType__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::EquipmentType__Enum__Array>(get_class(), size);
        }
        inline app::EquipmentType__Enum__Array* create_array(const std::vector<app::EquipmentType__Enum*>& items) {
            return il2cpp::array_new<app::EquipmentType__Enum__Array>(get_class(), items);
        }
    } // namespace EquipmentType__Enum
} // namespace app::classes::types
