#pragma once
#include <Modloader/app/structs/EquipmentUIInventoryItem__Array.h>
#include <Modloader/app/structs/EquipmentUIInventoryItem__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EquipmentUIInventoryItem__Array {
        inline app::EquipmentUIInventoryItem__Array__Class** type_info() {
            static app::EquipmentUIInventoryItem__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EquipmentUIInventoryItem__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EquipmentUIInventoryItem__Array__Class* get_class() {
            return il2cpp::get_class<app::EquipmentUIInventoryItem__Array__Class>(type_info(), "", "EquipmentUIInventoryItem[]");
        }
        inline app::EquipmentUIInventoryItem__Array* create() {
            return il2cpp::create_object<app::EquipmentUIInventoryItem__Array>(get_class());
        }
    } // namespace EquipmentUIInventoryItem__Array
} // namespace app::classes::types
