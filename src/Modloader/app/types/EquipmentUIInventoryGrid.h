#pragma once
#include <Modloader/app/structs/EquipmentUIInventoryGrid.h>
#include <Modloader/app/structs/EquipmentUIInventoryGrid__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EquipmentUIInventoryGrid {
        inline app::EquipmentUIInventoryGrid__Class** type_info() {
            static app::EquipmentUIInventoryGrid__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EquipmentUIInventoryGrid__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EquipmentUIInventoryGrid__Class* get_class() {
            return il2cpp::get_class<app::EquipmentUIInventoryGrid__Class>(type_info(), "", "EquipmentUIInventoryGrid");
        }
        inline app::EquipmentUIInventoryGrid* create() {
            return il2cpp::create_object<app::EquipmentUIInventoryGrid>(get_class());
        }
    } // namespace EquipmentUIInventoryGrid
} // namespace app::classes::types
