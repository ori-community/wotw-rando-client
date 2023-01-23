#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/InventoryAbilityItem__Class.h>
#include <Modloader/app/structs/InventoryAbilityItem.h>

namespace app::classes::types {
    namespace InventoryAbilityItem {
        namespace {
            inline app::InventoryAbilityItem__Class* type_info_ref = nullptr;
        }
        inline app::InventoryAbilityItem__Class** type_info = &type_info_ref;
        inline app::InventoryAbilityItem__Class* get_class() {
            return il2cpp::get_class<app::InventoryAbilityItem__Class>(type_info, "", "InventoryAbilityItem");
        }
        inline app::InventoryAbilityItem* create() {
            return il2cpp::create_object<app::InventoryAbilityItem>(get_class());
        }
    } // namespace InventoryAbilityItem
} // namespace app::classes::types
