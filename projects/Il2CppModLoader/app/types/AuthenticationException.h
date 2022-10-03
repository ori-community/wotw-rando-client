#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AuthenticationException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AuthenticationException__Class** type_info;
        inline app::AuthenticationException__Class* get_class() {
            return il2cpp::get_class<app::AuthenticationException__Class>(type_info, "System.Security.Authentication", "AuthenticationException");
        }
        inline app::AuthenticationException* create() {
            return il2cpp::create_object<app::AuthenticationException>(get_class());
        }
    } // namespace AuthenticationException
} // namespace app::classes::types
