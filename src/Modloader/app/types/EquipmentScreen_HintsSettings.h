#pragma once
#include <Modloader/app/structs/EquipmentScreen_HintsSettings.h>
#include <Modloader/app/structs/EquipmentScreen_HintsSettings__Boxed.h>
#include <Modloader/app/structs/EquipmentScreen_HintsSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EquipmentScreen_HintsSettings {
        inline app::EquipmentScreen_HintsSettings__Class** type_info() {
            static app::EquipmentScreen_HintsSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EquipmentScreen_HintsSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EquipmentScreen_HintsSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::EquipmentScreen_HintsSettings__Class>(type_info(), "", "EquipmentScreen", "HintsSettings");
        }
        inline app::EquipmentScreen_HintsSettings* create() {
            return il2cpp::create_object<app::EquipmentScreen_HintsSettings>(get_class());
        }
        inline app::EquipmentScreen_HintsSettings__Boxed* box(app::EquipmentScreen_HintsSettings value) {
            return il2cpp::box_value<app::EquipmentScreen_HintsSettings__Boxed>(get_class(), value);
        }
    } // namespace EquipmentScreen_HintsSettings
} // namespace app::classes::types
