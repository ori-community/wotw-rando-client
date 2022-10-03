#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CartItem {
        namespace {
            app::CartItem__Class* type_info_ref = nullptr;
        }
        app::CartItem__Class** type_info = &type_info_ref;
        inline app::CartItem__Class* get_class() {
            return il2cpp::get_class<app::CartItem__Class>(type_info, "PlayFab.ClientModels", "CartItem");
        }
        inline app::CartItem* create() {
            return il2cpp::create_object<app::CartItem>(get_class());
        }
        inline app::CartItem__Array* create_array(int size) {
            return il2cpp::array_new<app::CartItem__Array>(get_class(), size);
        }
    } // namespace CartItem
} // namespace app::classes::types
