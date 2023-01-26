#pragma once
#include <Modloader/app/structs/ShopkeeperUIDetails.h>
#include <Modloader/app/structs/ShopkeeperUIDetails__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShopkeeperUIDetails {
        inline app::ShopkeeperUIDetails__Class** type_info() {
            static app::ShopkeeperUIDetails__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShopkeeperUIDetails__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShopkeeperUIDetails__Class* get_class() {
            return il2cpp::get_class<app::ShopkeeperUIDetails__Class>(type_info(), "", "ShopkeeperUIDetails");
        }
        inline app::ShopkeeperUIDetails* create() {
            return il2cpp::create_object<app::ShopkeeperUIDetails>(get_class());
        }
    } // namespace ShopkeeperUIDetails
} // namespace app::classes::types
