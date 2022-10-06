#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InventoryScreenHealthEnergyElements_CellElement {
        namespace {
            app::InventoryScreenHealthEnergyElements_CellElement__Class* type_info_ref = nullptr;
        }
        app::InventoryScreenHealthEnergyElements_CellElement__Class** type_info = &type_info_ref;
        inline app::InventoryScreenHealthEnergyElements_CellElement__Class* get_class() {
            return il2cpp::get_nested_class<app::InventoryScreenHealthEnergyElements_CellElement__Class>(type_info, "", "InventoryScreenHealthEnergyElements", "CellElement");
        }
        inline app::InventoryScreenHealthEnergyElements_CellElement* create() {
            return il2cpp::create_object<app::InventoryScreenHealthEnergyElements_CellElement>(get_class());
        }
        inline app::InventoryScreenHealthEnergyElements_CellElement__Boxed* box(app::InventoryScreenHealthEnergyElements_CellElement value) {
            return il2cpp::box_value<app::InventoryScreenHealthEnergyElements_CellElement__Boxed>(get_class(), value);
        }
        inline app::InventoryScreenHealthEnergyElements_CellElement__Array* create_array(int size) {
            return il2cpp::array_new<app::InventoryScreenHealthEnergyElements_CellElement__Array>(get_class(), size);
        }
        inline app::InventoryScreenHealthEnergyElements_CellElement__Array* create_array(const std::vector<app::InventoryScreenHealthEnergyElements_CellElement__Boxed>& items) {
            return il2cpp::array_new<app::InventoryScreenHealthEnergyElements_CellElement__Array>(get_class(), items);
        }
    } // namespace InventoryScreenHealthEnergyElements_CellElement
} // namespace app::classes::types
