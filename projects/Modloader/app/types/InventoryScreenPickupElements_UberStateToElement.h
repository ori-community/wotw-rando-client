#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace InventoryScreenPickupElements_UberStateToElement {
        namespace {
            inline app::InventoryScreenPickupElements_UberStateToElement__Class* type_info_ref = nullptr;
        }
        inline app::InventoryScreenPickupElements_UberStateToElement__Class** type_info = &type_info_ref;
        inline app::InventoryScreenPickupElements_UberStateToElement__Class* get_class() {
            return il2cpp::get_nested_class<app::InventoryScreenPickupElements_UberStateToElement__Class>(type_info, "", "InventoryScreenPickupElements", "UberStateToElement");
        }
        inline app::InventoryScreenPickupElements_UberStateToElement* create() {
            return il2cpp::create_object<app::InventoryScreenPickupElements_UberStateToElement>(get_class());
        }
        inline app::InventoryScreenPickupElements_UberStateToElement__Boxed* box(app::InventoryScreenPickupElements_UberStateToElement value) {
            return il2cpp::box_value<app::InventoryScreenPickupElements_UberStateToElement__Boxed>(get_class(), value);
        }
        inline app::InventoryScreenPickupElements_UberStateToElement__Array* create_array(int size) {
            return il2cpp::array_new<app::InventoryScreenPickupElements_UberStateToElement__Array>(get_class(), size);
        }
        inline app::InventoryScreenPickupElements_UberStateToElement__Array* create_array(const std::vector<app::InventoryScreenPickupElements_UberStateToElement>& items) {
            return il2cpp::array_new<app::InventoryScreenPickupElements_UberStateToElement__Array>(get_class(), items);
        }
    } // namespace InventoryScreenPickupElements_UberStateToElement
} // namespace app::classes::types
