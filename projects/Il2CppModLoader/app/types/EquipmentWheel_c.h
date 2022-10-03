#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EquipmentWheel_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EquipmentWheel_c__Class** type_info;
        inline app::EquipmentWheel_c__Class* get_class() {
            return il2cpp::get_nested_class<app::EquipmentWheel_c__Class>(type_info, "", "EquipmentWheel", "<>c");
        }
        inline app::EquipmentWheel_c* create() {
            return il2cpp::create_object<app::EquipmentWheel_c>(get_class());
        }
    } // namespace EquipmentWheel_c
} // namespace app::classes::types
