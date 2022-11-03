#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace InventoryScreenHealthEnergyElements_CellElement__Array {
        namespace {
            inline app::InventoryScreenHealthEnergyElements_CellElement__Array__Class* type_info_ref = nullptr;
        }
        inline app::InventoryScreenHealthEnergyElements_CellElement__Array__Class** type_info = &type_info_ref;
        inline app::InventoryScreenHealthEnergyElements_CellElement__Array__Class* get_class() {
            return il2cpp::get_class<app::InventoryScreenHealthEnergyElements_CellElement__Array__Class>(type_info, "", "InventoryScreenHealthEnergyElements+CellElement[]");
        }
        inline app::InventoryScreenHealthEnergyElements_CellElement__Array* create() {
            return il2cpp::create_object<app::InventoryScreenHealthEnergyElements_CellElement__Array>(get_class());
        }
    } // namespace InventoryScreenHealthEnergyElements_CellElement__Array
} // namespace app::classes::types
