#pragma once
#include <Modloader/app/structs/InventoryItemHelpText.h>
#include <Modloader/app/structs/InventoryItemHelpText__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InventoryItemHelpText {
        inline app::InventoryItemHelpText__Class** type_info() {
            static app::InventoryItemHelpText__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InventoryItemHelpText__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InventoryItemHelpText__Class* get_class() {
            return il2cpp::get_class<app::InventoryItemHelpText__Class>(type_info(), "", "InventoryItemHelpText");
        }
        inline app::InventoryItemHelpText* create() {
            return il2cpp::create_object<app::InventoryItemHelpText>(get_class());
        }
    } // namespace InventoryItemHelpText
} // namespace app::classes::types
