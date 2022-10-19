#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EquipmentUIDetails {
        namespace {
            inline app::EquipmentUIDetails__Class* type_info_ref = nullptr;
        }
        inline app::EquipmentUIDetails__Class** type_info = &type_info_ref;
        inline app::EquipmentUIDetails__Class* get_class() {
            return il2cpp::get_class<app::EquipmentUIDetails__Class>(type_info, "", "EquipmentUIDetails");
        }
        inline app::EquipmentUIDetails* create() {
            return il2cpp::create_object<app::EquipmentUIDetails>(get_class());
        }
    } // namespace EquipmentUIDetails
} // namespace app::classes::types
