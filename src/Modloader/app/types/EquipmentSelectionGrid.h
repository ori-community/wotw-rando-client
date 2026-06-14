#pragma once
#include <Modloader/app/structs/EquipmentSelectionGrid.h>
#include <Modloader/app/structs/EquipmentSelectionGrid__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EquipmentSelectionGrid {
        inline app::EquipmentSelectionGrid__Class** type_info() {
            static app::EquipmentSelectionGrid__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EquipmentSelectionGrid__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EquipmentSelectionGrid__Class* get_class() {
            return il2cpp::get_class<app::EquipmentSelectionGrid__Class>(type_info(), "", "EquipmentSelectionGrid");
        }
        inline app::EquipmentSelectionGrid* create() {
            return il2cpp::create_object<app::EquipmentSelectionGrid>(get_class());
        }
    } // namespace EquipmentSelectionGrid
} // namespace app::classes::types
