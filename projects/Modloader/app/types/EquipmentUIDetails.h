#pragma once
#include <Modloader/app/structs/EquipmentUIDetails.h>
#include <Modloader/app/structs/EquipmentUIDetails__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EquipmentUIDetails {
        inline app::EquipmentUIDetails__Class** type_info() {
            static app::EquipmentUIDetails__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EquipmentUIDetails__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EquipmentUIDetails__Class* get_class() {
            return il2cpp::get_class<app::EquipmentUIDetails__Class>(type_info(), "", "EquipmentUIDetails");
        }
        inline app::EquipmentUIDetails* create() {
            return il2cpp::create_object<app::EquipmentUIDetails>(get_class());
        }
    } // namespace EquipmentUIDetails
} // namespace app::classes::types
