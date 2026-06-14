#pragma once
#include <Modloader/app/structs/ShopkeeperScreen.h>
#include <Modloader/app/structs/ShopkeeperScreen__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShopkeeperScreen {
        inline app::ShopkeeperScreen__Class** type_info() {
            static app::ShopkeeperScreen__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShopkeeperScreen__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShopkeeperScreen__Class* get_class() {
            return il2cpp::get_class<app::ShopkeeperScreen__Class>(type_info(), "", "ShopkeeperScreen");
        }
        inline app::ShopkeeperScreen* create() {
            return il2cpp::create_object<app::ShopkeeperScreen>(get_class());
        }
    } // namespace ShopkeeperScreen
} // namespace app::classes::types
