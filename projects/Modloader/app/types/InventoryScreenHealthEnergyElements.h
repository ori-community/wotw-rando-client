#pragma once
#include <Modloader/app/structs/InventoryScreenHealthEnergyElements.h>
#include <Modloader/app/structs/InventoryScreenHealthEnergyElements__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InventoryScreenHealthEnergyElements {
        inline app::InventoryScreenHealthEnergyElements__Class** type_info() {
            static app::InventoryScreenHealthEnergyElements__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InventoryScreenHealthEnergyElements__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InventoryScreenHealthEnergyElements__Class* get_class() {
            return il2cpp::get_class<app::InventoryScreenHealthEnergyElements__Class>(type_info(), "", "InventoryScreenHealthEnergyElements");
        }
        inline app::InventoryScreenHealthEnergyElements* create() {
            return il2cpp::create_object<app::InventoryScreenHealthEnergyElements>(get_class());
        }
    } // namespace InventoryScreenHealthEnergyElements
} // namespace app::classes::types
