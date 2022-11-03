#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EquipmentSelectionGrid {
        namespace {
            inline app::EquipmentSelectionGrid__Class* type_info_ref = nullptr;
        }
        inline app::EquipmentSelectionGrid__Class** type_info = &type_info_ref;
        inline app::EquipmentSelectionGrid__Class* get_class() {
            return il2cpp::get_class<app::EquipmentSelectionGrid__Class>(type_info, "", "EquipmentSelectionGrid");
        }
        inline app::EquipmentSelectionGrid* create() {
            return il2cpp::create_object<app::EquipmentSelectionGrid>(get_class());
        }
    } // namespace EquipmentSelectionGrid
} // namespace app::classes::types
