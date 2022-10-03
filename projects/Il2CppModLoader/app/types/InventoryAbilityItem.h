#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InventoryAbilityItem {
        namespace {
            app::InventoryAbilityItem__Class* type_info_ref = nullptr;
        }
        app::InventoryAbilityItem__Class** type_info = &type_info_ref;
        inline app::InventoryAbilityItem__Class* get_class() {
            return il2cpp::get_class<app::InventoryAbilityItem__Class>(type_info, "", "InventoryAbilityItem");
        }
        inline app::InventoryAbilityItem* create() {
            return il2cpp::create_object<app::InventoryAbilityItem>(get_class());
        }
    } // namespace InventoryAbilityItem
} // namespace app::classes::types
