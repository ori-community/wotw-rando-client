#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EquipmentUIInventoryItem {
        namespace {
            app::EquipmentUIInventoryItem__Class* type_info_ref = nullptr;
        }
        app::EquipmentUIInventoryItem__Class** type_info = &type_info_ref;
        inline app::EquipmentUIInventoryItem__Class* get_class() {
            return il2cpp::get_class<app::EquipmentUIInventoryItem__Class>(type_info, "", "EquipmentUIInventoryItem");
        }
        inline app::EquipmentUIInventoryItem* create() {
            return il2cpp::create_object<app::EquipmentUIInventoryItem>(get_class());
        }
        inline app::EquipmentUIInventoryItem__Array* create_array(int size) {
            return il2cpp::array_new<app::EquipmentUIInventoryItem__Array>(get_class(), size);
        }
        inline app::EquipmentUIInventoryItem__Array* create_array(const std::vector<app::EquipmentUIInventoryItem*>& items) {
            return il2cpp::array_new<app::EquipmentUIInventoryItem__Array>(get_class(), items);
        }
    } // namespace EquipmentUIInventoryItem
} // namespace app::classes::types
