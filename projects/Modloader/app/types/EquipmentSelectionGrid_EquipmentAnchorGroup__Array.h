#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EquipmentSelectionGrid_EquipmentAnchorGroup__Array__Class.h>
#include <Modloader/app/structs/EquipmentSelectionGrid_EquipmentAnchorGroup__Array.h>

namespace app::classes::types {
    namespace EquipmentSelectionGrid_EquipmentAnchorGroup__Array {
        namespace {
            inline app::EquipmentSelectionGrid_EquipmentAnchorGroup__Array__Class* type_info_ref = nullptr;
        }
        inline app::EquipmentSelectionGrid_EquipmentAnchorGroup__Array__Class** type_info = &type_info_ref;
        inline app::EquipmentSelectionGrid_EquipmentAnchorGroup__Array__Class* get_class() {
            return il2cpp::get_class<app::EquipmentSelectionGrid_EquipmentAnchorGroup__Array__Class>(type_info, "", "EquipmentSelectionGrid+EquipmentAnchorGroup[]");
        }
        inline app::EquipmentSelectionGrid_EquipmentAnchorGroup__Array* create() {
            return il2cpp::create_object<app::EquipmentSelectionGrid_EquipmentAnchorGroup__Array>(get_class());
        }
    } // namespace EquipmentSelectionGrid_EquipmentAnchorGroup__Array
} // namespace app::classes::types
