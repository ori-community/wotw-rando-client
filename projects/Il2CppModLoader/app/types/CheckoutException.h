#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CheckoutException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CheckoutException__Class** type_info;
        inline app::CheckoutException__Class* get_class() {
            return il2cpp::get_class<app::CheckoutException__Class>(type_info, "System.ComponentModel.Design", "CheckoutException");
        }
        inline app::CheckoutException* create() {
            return il2cpp::create_object<app::CheckoutException>(get_class());
        }
    } // namespace CheckoutException
} // namespace app::classes::types
