#pragma once
#include <Modloader/app/structs/InventoryScreenItem.h>
#include <Modloader/app/structs/InventoryScreenItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InventoryScreenItem {
        inline app::InventoryScreenItem__Class** type_info() {
            static app::InventoryScreenItem__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InventoryScreenItem__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InventoryScreenItem__Class* get_class() {
            return il2cpp::get_class<app::InventoryScreenItem__Class>(type_info(), "", "InventoryScreenItem");
        }
        inline app::InventoryScreenItem* create() {
            return il2cpp::create_object<app::InventoryScreenItem>(get_class());
        }
    } // namespace InventoryScreenItem
} // namespace app::classes::types
