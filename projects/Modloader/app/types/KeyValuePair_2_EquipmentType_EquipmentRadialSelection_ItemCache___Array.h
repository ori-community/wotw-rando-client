#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/KeyValuePair_2_EquipmentType_EquipmentRadialSelection_ItemCache___Array__Class.h>
#include <Modloader/app/structs/KeyValuePair_2_EquipmentType_EquipmentRadialSelection_ItemCache___Array.h>

namespace app::classes::types {
    namespace KeyValuePair_2_EquipmentType_EquipmentRadialSelection_ItemCache___Array {
        namespace {
            inline app::KeyValuePair_2_EquipmentType_EquipmentRadialSelection_ItemCache___Array__Class* type_info_ref = nullptr;
        }
        inline app::KeyValuePair_2_EquipmentType_EquipmentRadialSelection_ItemCache___Array__Class** type_info = &type_info_ref;
        inline app::KeyValuePair_2_EquipmentType_EquipmentRadialSelection_ItemCache___Array__Class* get_class() {
            return il2cpp::get_class<app::KeyValuePair_2_EquipmentType_EquipmentRadialSelection_ItemCache___Array__Class>(type_info, "System.Collections.Generic", "KeyValuePair`2[EquipmentType,EquipmentRadialSelection+ItemCache][]");
        }
        inline app::KeyValuePair_2_EquipmentType_EquipmentRadialSelection_ItemCache___Array* create() {
            return il2cpp::create_object<app::KeyValuePair_2_EquipmentType_EquipmentRadialSelection_ItemCache___Array>(get_class());
        }
    } // namespace KeyValuePair_2_EquipmentType_EquipmentRadialSelection_ItemCache___Array
} // namespace app::classes::types
