#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace StatSettingStrings_EquipmentLabels__Array {
        namespace {
            inline app::StatSettingStrings_EquipmentLabels__Array__Class* type_info_ref = nullptr;
        }
        inline app::StatSettingStrings_EquipmentLabels__Array__Class** type_info = &type_info_ref;
        inline app::StatSettingStrings_EquipmentLabels__Array__Class* get_class() {
            return il2cpp::get_class<app::StatSettingStrings_EquipmentLabels__Array__Class>(type_info, "", "StatSettingStrings+EquipmentLabels[]");
        }
        inline app::StatSettingStrings_EquipmentLabels__Array* create() {
            return il2cpp::create_object<app::StatSettingStrings_EquipmentLabels__Array>(get_class());
        }
    } // namespace StatSettingStrings_EquipmentLabels__Array
} // namespace app::classes::types
