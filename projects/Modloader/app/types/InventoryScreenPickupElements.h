#pragma once
#include <Modloader/app/structs/InventoryScreenPickupElements.h>
#include <Modloader/app/structs/InventoryScreenPickupElements__Array.h>
#include <Modloader/app/structs/InventoryScreenPickupElements__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InventoryScreenPickupElements {
        inline app::InventoryScreenPickupElements__Class** type_info() {
            static app::InventoryScreenPickupElements__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InventoryScreenPickupElements__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InventoryScreenPickupElements__Class* get_class() {
            return il2cpp::get_class<app::InventoryScreenPickupElements__Class>(type_info(), "", "InventoryScreenPickupElements");
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
