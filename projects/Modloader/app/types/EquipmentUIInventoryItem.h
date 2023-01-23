#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EquipmentUIInventoryItem__Class.h>
#include <Modloader/app/structs/EquipmentUIInventoryItem.h>
#include <Modloader/app/structs/EquipmentUIInventoryItem__Array.h>

namespace app::classes::types {
    namespace EquipmentUIInventoryItem {
        namespace {
            inline app::EquipmentUIInventoryItem__Class* type_info_ref = nullptr;
        }
        inline app::EquipmentUIInventoryItem__Class** type_info = &type_info_ref;
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
