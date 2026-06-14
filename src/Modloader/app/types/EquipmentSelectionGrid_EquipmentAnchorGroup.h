#pragma once
#include <Modloader/app/structs/EquipmentSelectionGrid_EquipmentAnchorGroup.h>
#include <Modloader/app/structs/EquipmentSelectionGrid_EquipmentAnchorGroup__Array.h>
#include <Modloader/app/structs/EquipmentSelectionGrid_EquipmentAnchorGroup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EquipmentSelectionGrid_EquipmentAnchorGroup {
        inline app::EquipmentSelectionGrid_EquipmentAnchorGroup__Class** type_info() {
            static app::EquipmentSelectionGrid_EquipmentAnchorGroup__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EquipmentSelectionGrid_EquipmentAnchorGroup__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EquipmentSelectionGrid_EquipmentAnchorGroup__Class* get_class() {
            return il2cpp::get_nested_class<app::EquipmentSelectionGrid_EquipmentAnchorGroup__Class>(type_info(), "", "EquipmentSelectionGrid", "EquipmentAnchorGroup");
        }
        inline app::EquipmentSelectionGrid_EquipmentAnchorGroup* create() {
            return il2cpp::create_object<app::EquipmentSelectionGrid_EquipmentAnchorGroup>(get_class());
        }
        inline app::EquipmentSelectionGrid_EquipmentAnchorGroup__Array* create_array(int size) {
            return il2cpp::array_new<app::EquipmentSelectionGrid_EquipmentAnchorGroup__Array>(get_class(), size);
        }
        inline app::EquipmentSelectionGrid_EquipmentAnchorGroup__Array* create_array(const std::vector<app::EquipmentSelectionGrid_EquipmentAnchorGroup*>& items) {
            return il2cpp::array_new<app::EquipmentSelectionGrid_EquipmentAnchorGroup__Array>(get_class(), items);
        }
    } // namespace EquipmentSelectionGrid_EquipmentAnchorGroup
} // namespace app::classes::types
