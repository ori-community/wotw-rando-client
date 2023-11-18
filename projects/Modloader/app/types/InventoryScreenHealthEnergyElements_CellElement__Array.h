#pragma once
#include <Modloader/app/structs/InventoryScreenHealthEnergyElements_CellElement__Array.h>
#include <Modloader/app/structs/InventoryScreenHealthEnergyElements_CellElement__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InventoryScreenHealthEnergyElements_CellElement__Array {
        inline app::InventoryScreenHealthEnergyElements_CellElement__Array__Class** type_info() {
            static app::InventoryScreenHealthEnergyElements_CellElement__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InventoryScreenHealthEnergyElements_CellElement__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InventoryScreenHealthEnergyElements_CellElement__Array__Class* get_class() {
            return il2cpp::get_class<app::InventoryScreenHealthEnergyElements_CellElement__Array__Class>(type_info(), "", "InventoryScreenHealthEnergyElements+CellElement[]");
        }
        inline app::InventoryScreenHealthEnergyElements_CellElement__Array* create() {
            return il2cpp::create_object<app::InventoryScreenHealthEnergyElements_CellElement__Array>(get_class());
        }
    } // namespace InventoryScreenHealthEnergyElements_CellElement__Array
} // namespace app::classes::types
