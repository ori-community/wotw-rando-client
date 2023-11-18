#pragma once
#include <Modloader/app/structs/InventoryScreenPickupElements_UberStateToElement__Array.h>
#include <Modloader/app/structs/InventoryScreenPickupElements_UberStateToElement__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InventoryScreenPickupElements_UberStateToElement__Array {
        inline app::InventoryScreenPickupElements_UberStateToElement__Array__Class** type_info() {
            static app::InventoryScreenPickupElements_UberStateToElement__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InventoryScreenPickupElements_UberStateToElement__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InventoryScreenPickupElements_UberStateToElement__Array__Class* get_class() {
            return il2cpp::get_class<app::InventoryScreenPickupElements_UberStateToElement__Array__Class>(type_info(), "", "InventoryScreenPickupElements+UberStateToElement[]");
        }
        inline app::InventoryScreenPickupElements_UberStateToElement__Array* create() {
            return il2cpp::create_object<app::InventoryScreenPickupElements_UberStateToElement__Array>(get_class());
        }
    } // namespace InventoryScreenPickupElements_UberStateToElement__Array
} // namespace app::classes::types
