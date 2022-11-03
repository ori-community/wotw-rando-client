#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace InventoryItem {
        namespace {
            inline app::InventoryItem__Class* type_info_ref = nullptr;
        }
        inline app::InventoryItem__Class** type_info = &type_info_ref;
        inline app::InventoryItem__Class* get_class() {
            return il2cpp::get_class<app::InventoryItem__Class>(type_info, "", "InventoryItem");
        }
        inline app::InventoryItem* create() {
            return il2cpp::create_object<app::InventoryItem>(get_class());
        }
    } // namespace InventoryItem
} // namespace app::classes::types
