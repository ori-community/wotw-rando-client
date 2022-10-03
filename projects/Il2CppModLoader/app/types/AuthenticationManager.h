#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AuthenticationManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AuthenticationManager__Class** type_info;
        inline app::AuthenticationManager__Class* get_class() {
            return il2cpp::get_class<app::AuthenticationManager__Class>(type_info, "System.Net", "AuthenticationManager");
        }
        inline app::AuthenticationManager* create() {
            return il2cpp::create_object<app::AuthenticationManager>(get_class());
        }
    } // namespace AuthenticationManager
} // namespace app::classes::types
