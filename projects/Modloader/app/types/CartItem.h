#pragma once
#include <Modloader/app/structs/CartItem.h>
#include <Modloader/app/structs/CartItem__Array.h>
#include <Modloader/app/structs/CartItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CartItem {
        inline app::CartItem__Class** type_info() {
            static app::CartItem__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CartItem__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CartItem__Class* get_class() {
            return il2cpp::get_class<app::CartItem__Class>(type_info(), "PlayFab.ClientModels", "CartItem");
        }
        inline app::CartItem* create() {
            return il2cpp::create_object<app::CartItem>(get_class());
        }
        inline app::CartItem__Array* create_array(int size) {
            return il2cpp::array_new<app::CartItem__Array>(get_class(), size);
        }
        inline app::CartItem__Array* create_array(const std::vector<app::CartItem*>& items) {
            return il2cpp::array_new<app::CartItem__Array>(get_class(), items);
        }
    } // namespace CartItem
} // namespace app::classes::types
