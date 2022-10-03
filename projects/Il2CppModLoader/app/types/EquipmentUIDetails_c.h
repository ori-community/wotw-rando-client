#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EquipmentUIDetails_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EquipmentUIDetails_c__Class** type_info;
        inline app::EquipmentUIDetails_c__Class* get_class() {
            return il2cpp::get_nested_class<app::EquipmentUIDetails_c__Class>(type_info, "", "EquipmentUIDetails", "<>c");
        }
        inline app::EquipmentUIDetails_c* create() {
            return il2cpp::create_object<app::EquipmentUIDetails_c>(get_class());
        }
    } // namespace EquipmentUIDetails_c
} // namespace app::classes::types
