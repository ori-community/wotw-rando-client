#pragma once
#include <Modloader/app/structs/ShopkeeperUIItem.h>
#include <Modloader/app/structs/ShopkeeperUIItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShopkeeperUIItem {
        inline app::ShopkeeperUIItem__Class** type_info() {
            static app::ShopkeeperUIItem__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShopkeeperUIItem__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShopkeeperUIItem__Class* get_class() {
            return il2cpp::get_class<app::ShopkeeperUIItem__Class>(type_info(), "", "ShopkeeperUIItem");
        }
        inline app::ShopkeeperUIItem* create() {
            return il2cpp::create_object<app::ShopkeeperUIItem>(get_class());
        }
    } // namespace ShopkeeperUIItem
} // namespace app::classes::types
