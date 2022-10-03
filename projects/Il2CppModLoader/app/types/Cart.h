#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Cart {
        namespace {
            app::Cart__Class* type_info_ref = nullptr;
        }
        app::Cart__Class** type_info = &type_info_ref;
        inline app::Cart__Class* get_class() {
            return il2cpp::get_class<app::Cart__Class>(type_info, "", "Cart");
        }
        inline app::Cart* create() {
            return il2cpp::create_object<app::Cart>(get_class());
        }
        inline app::Cart__Array* create_array(int size) {
            return il2cpp::array_new<app::Cart__Array>(get_class(), size);
        }
    } // namespace Cart
} // namespace app::classes::types
