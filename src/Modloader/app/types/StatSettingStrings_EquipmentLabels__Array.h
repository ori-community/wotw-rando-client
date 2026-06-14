#pragma once
#include <Modloader/app/structs/StatSettingStrings_EquipmentLabels__Array.h>
#include <Modloader/app/structs/StatSettingStrings_EquipmentLabels__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StatSettingStrings_EquipmentLabels__Array {
        inline app::StatSettingStrings_EquipmentLabels__Array__Class** type_info() {
            static app::StatSettingStrings_EquipmentLabels__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StatSettingStrings_EquipmentLabels__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StatSettingStrings_EquipmentLabels__Array__Class* get_class() {
            return il2cpp::get_class<app::StatSettingStrings_EquipmentLabels__Array__Class>(type_info(), "", "StatSettingStrings+EquipmentLabels[]");
        }
        inline app::StatSettingStrings_EquipmentLabels__Array* create() {
            return il2cpp::create_object<app::StatSettingStrings_EquipmentLabels__Array>(get_class());
        }
    } // namespace StatSettingStrings_EquipmentLabels__Array
} // namespace app::classes::types
