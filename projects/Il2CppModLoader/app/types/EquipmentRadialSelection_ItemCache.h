#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EquipmentRadialSelection_ItemCache {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EquipmentRadialSelection_ItemCache__Class** type_info;
        inline app::EquipmentRadialSelection_ItemCache__Class* get_class() {
            return il2cpp::get_nested_class<app::EquipmentRadialSelection_ItemCache__Class>(type_info, "", "EquipmentRadialSelection", "ItemCache");
        }
        inline app::EquipmentRadialSelection_ItemCache* create() {
            return il2cpp::create_object<app::EquipmentRadialSelection_ItemCache>(get_class());
        }
        inline app::EquipmentRadialSelection_ItemCache__Array* create_array(int size) {
            return il2cpp::array_new<app::EquipmentRadialSelection_ItemCache__Array>(get_class(), size);
        }
        inline app::EquipmentRadialSelection_ItemCache__Array* create_array(const std::vector<app::EquipmentRadialSelection_ItemCache*>& items) {
            return il2cpp::array_new<app::EquipmentRadialSelection_ItemCache__Array>(get_class(), items);
        }
    } // namespace EquipmentRadialSelection_ItemCache
} // namespace app::classes::types
