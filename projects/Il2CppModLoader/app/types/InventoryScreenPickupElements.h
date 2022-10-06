#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InventoryScreenPickupElements {
        namespace {
            app::InventoryScreenPickupElements__Class* type_info_ref = nullptr;
        }
        app::InventoryScreenPickupElements__Class** type_info = &type_info_ref;
        inline app::InventoryScreenPickupElements__Class* get_class() {
            return il2cpp::get_class<app::InventoryScreenPickupElements__Class>(type_info, "", "InventoryScreenPickupElements");
        }
        inline app::InventoryScreenPickupElements* create() {
            return il2cpp::create_object<app::InventoryScreenPickupElements>(get_class());
        }
        inline app::InventoryScreenPickupElements__Array* create_array(int size) {
            return il2cpp::array_new<app::InventoryScreenPickupElements__Array>(get_class(), size);
        }
        inline app::InventoryScreenPickupElements__Array* create_array(const std::vector<app::InventoryScreenPickupElements*>& items) {
            return il2cpp::array_new<app::InventoryScreenPickupElements__Array>(get_class(), items);
        }
    } // namespace InventoryScreenPickupElements
} // namespace app::classes::types
