#pragma once
#include <Modloader/app/structs/EquipmentWheelUIDetails.h>
#include <Modloader/app/structs/EquipmentWheelUIDetails__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EquipmentWheelUIDetails {
        inline app::EquipmentWheelUIDetails__Class** type_info() {
            static app::EquipmentWheelUIDetails__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EquipmentWheelUIDetails__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EquipmentWheelUIDetails__Class* get_class() {
            return il2cpp::get_class<app::EquipmentWheelUIDetails__Class>(type_info(), "", "EquipmentWheelUIDetails");
        }
        inline app::EquipmentWheelUIDetails* create() {
            return il2cpp::create_object<app::EquipmentWheelUIDetails>(get_class());
        }
    } // namespace EquipmentWheelUIDetails
} // namespace app::classes::types
