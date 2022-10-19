#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EquipmentUIInventoryGrid {
        namespace {
            inline app::EquipmentUIInventoryGrid__Class* type_info_ref = nullptr;
        }
        inline app::EquipmentUIInventoryGrid__Class** type_info = &type_info_ref;
        inline app::EquipmentUIInventoryGrid__Class* get_class() {
            return il2cpp::get_class<app::EquipmentUIInventoryGrid__Class>(type_info, "", "EquipmentUIInventoryGrid");
        }
        inline app::EquipmentUIInventoryGrid* create() {
            return il2cpp::create_object<app::EquipmentUIInventoryGrid>(get_class());
        }
    } // namespace EquipmentUIInventoryGrid
} // namespace app::classes::types
