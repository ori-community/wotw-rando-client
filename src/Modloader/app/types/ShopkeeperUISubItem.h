#pragma once
#include <Modloader/app/structs/ShopkeeperUISubItem.h>
#include <Modloader/app/structs/ShopkeeperUISubItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShopkeeperUISubItem {
        inline app::ShopkeeperUISubItem__Class** type_info() {
            static app::ShopkeeperUISubItem__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShopkeeperUISubItem__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShopkeeperUISubItem__Class* get_class() {
            return il2cpp::get_class<app::ShopkeeperUISubItem__Class>(type_info(), "", "ShopkeeperUISubItem");
        }
        inline app::ShopkeeperUISubItem* create() {
            return il2cpp::create_object<app::ShopkeeperUISubItem>(get_class());
        }
    } // namespace ShopkeeperUISubItem
} // namespace app::classes::types
