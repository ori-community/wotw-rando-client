#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InventoryItemHelpText {
        namespace {
            app::InventoryItemHelpText__Class* type_info_ref = nullptr;
        }
        app::InventoryItemHelpText__Class** type_info = &type_info_ref;
        inline app::InventoryItemHelpText__Class* get_class() {
            return il2cpp::get_class<app::InventoryItemHelpText__Class>(type_info, "", "InventoryItemHelpText");
        }
        inline app::InventoryItemHelpText* create() {
            return il2cpp::create_object<app::InventoryItemHelpText>(get_class());
        }
    } // namespace InventoryItemHelpText
} // namespace app::classes::types
