#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EquipmentScreen_HintsSettings {
        namespace {
            app::EquipmentScreen_HintsSettings__Class* type_info_ref = nullptr;
        }
        app::EquipmentScreen_HintsSettings__Class** type_info = &type_info_ref;
        inline app::EquipmentScreen_HintsSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::EquipmentScreen_HintsSettings__Class>(type_info, "", "EquipmentScreen", "HintsSettings");
        }
        inline app::EquipmentScreen_HintsSettings* create() {
            return il2cpp::create_object<app::EquipmentScreen_HintsSettings>(get_class());
        }
        inline app::EquipmentScreen_HintsSettings__Boxed* box(app::EquipmentScreen_HintsSettings value) {
            return il2cpp::box_value<app::EquipmentScreen_HintsSettings__Boxed>(get_class(), value);
        }
    } // namespace EquipmentScreen_HintsSettings
} // namespace app::classes::types
