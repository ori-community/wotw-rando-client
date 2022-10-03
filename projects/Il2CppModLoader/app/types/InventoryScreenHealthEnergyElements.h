#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InventoryScreenHealthEnergyElements {
        namespace {
            app::InventoryScreenHealthEnergyElements__Class* type_info_ref = nullptr;
        }
        app::InventoryScreenHealthEnergyElements__Class** type_info = &type_info_ref;
        inline app::InventoryScreenHealthEnergyElements__Class* get_class() {
            return il2cpp::get_class<app::InventoryScreenHealthEnergyElements__Class>(type_info, "", "InventoryScreenHealthEnergyElements");
        }
        inline app::InventoryScreenHealthEnergyElements* create() {
            return il2cpp::create_object<app::InventoryScreenHealthEnergyElements>(get_class());
        }
    } // namespace InventoryScreenHealthEnergyElements
} // namespace app::classes::types
