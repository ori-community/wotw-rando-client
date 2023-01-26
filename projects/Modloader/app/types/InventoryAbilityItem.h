#pragma once
#include <Modloader/app/structs/InventoryAbilityItem.h>
#include <Modloader/app/structs/InventoryAbilityItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InventoryAbilityItem {
        inline app::InventoryAbilityItem__Class** type_info() {
            static app::InventoryAbilityItem__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InventoryAbilityItem__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InventoryAbilityItem__Class* get_class() {
            return il2cpp::get_class<app::InventoryAbilityItem__Class>(type_info(), "", "InventoryAbilityItem");
        }
        inline app::InventoryAbilityItem* create() {
            return il2cpp::create_object<app::InventoryAbilityItem>(get_class());
        }
    } // namespace InventoryAbilityItem
} // namespace app::classes::types
