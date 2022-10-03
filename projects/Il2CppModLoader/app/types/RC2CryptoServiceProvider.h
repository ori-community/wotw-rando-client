#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RC2CryptoServiceProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RC2CryptoServiceProvider__Class** type_info;
        inline app::RC2CryptoServiceProvider__Class* get_class() {
            return il2cpp::get_class<app::RC2CryptoServiceProvider__Class>(type_info, "System.Security.Cryptography", "RC2CryptoServiceProvider");
        }
        inline app::RC2CryptoServiceProvider* create() {
            return il2cpp::create_object<app::RC2CryptoServiceProvider>(get_class());
        }
    } // namespace RC2CryptoServiceProvider
} // namespace app::classes::types
