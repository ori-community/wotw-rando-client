#pragma once
#include <Modloader/app/structs/StatSettingStrings_EquipmentLabels.h>
#include <Modloader/app/structs/StatSettingStrings_EquipmentLabels__Array.h>
#include <Modloader/app/structs/StatSettingStrings_EquipmentLabels__Boxed.h>
#include <Modloader/app/structs/StatSettingStrings_EquipmentLabels__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StatSettingStrings_EquipmentLabels {
        inline app::StatSettingStrings_EquipmentLabels__Class** type_info() {
            static app::StatSettingStrings_EquipmentLabels__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StatSettingStrings_EquipmentLabels__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StatSettingStrings_EquipmentLabels__Class* get_class() {
            return il2cpp::get_nested_class<app::StatSettingStrings_EquipmentLabels__Class>(type_info(), "", "StatSettingStrings", "EquipmentLabels");
        }
        inline app::StatSettingStrings_EquipmentLabels* create() {
            return il2cpp::create_object<app::StatSettingStrings_EquipmentLabels>(get_class());
        }
        inline app::StatSettingStrings_EquipmentLabels__Boxed* box(app::StatSettingStrings_EquipmentLabels value) {
            return il2cpp::box_value<app::StatSettingStrings_EquipmentLabels__Boxed>(get_class(), value);
        }
        inline app::StatSettingStrings_EquipmentLabels__Array* create_array(int size) {
            return il2cpp::array_new<app::StatSettingStrings_EquipmentLabels__Array>(get_class(), size);
        }
        inline app::StatSettingStrings_EquipmentLabels__Array* create_array(const std::vector<app::StatSettingStrings_EquipmentLabels>& items) {
            return il2cpp::array_new<app::StatSettingStrings_EquipmentLabels__Array>(get_class(), items);
        }
    } // namespace StatSettingStrings_EquipmentLabels
} // namespace app::classes::types
