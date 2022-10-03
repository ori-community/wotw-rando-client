#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InventoryScreenItem {
        namespace {
            app::InventoryScreenItem__Class* type_info_ref = nullptr;
        }
        app::InventoryScreenItem__Class** type_info = &type_info_ref;
        inline app::InventoryScreenItem__Class* get_class() {
            return il2cpp::get_class<app::InventoryScreenItem__Class>(type_info, "", "InventoryScreenItem");
        }
        inline app::InventoryScreenItem* create() {
            return il2cpp::create_object<app::InventoryScreenItem>(get_class());
        }
    } // namespace InventoryScreenItem
} // namespace app::classes::types
