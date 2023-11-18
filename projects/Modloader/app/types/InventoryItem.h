#pragma once
#include <Modloader/app/structs/InventoryItem.h>
#include <Modloader/app/structs/InventoryItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InventoryItem {
        inline app::InventoryItem__Class** type_info() {
            static app::InventoryItem__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InventoryItem__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InventoryItem__Class* get_class() {
            return il2cpp::get_class<app::InventoryItem__Class>(type_info(), "", "InventoryItem");
        }
        inline app::InventoryItem* create() {
            return il2cpp::create_object<app::InventoryItem>(get_class());
        }
    } // namespace InventoryItem
} // namespace app::classes::types
