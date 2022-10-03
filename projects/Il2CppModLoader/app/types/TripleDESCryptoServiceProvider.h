#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TripleDESCryptoServiceProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TripleDESCryptoServiceProvider__Class** type_info;
        inline app::TripleDESCryptoServiceProvider__Class* get_class() {
            return il2cpp::get_class<app::TripleDESCryptoServiceProvider__Class>(type_info, "System.Security.Cryptography", "TripleDESCryptoServiceProvider");
        }
        inline app::TripleDESCryptoServiceProvider* create() {
            return il2cpp::create_object<app::TripleDESCryptoServiceProvider>(get_class());
        }
    } // namespace TripleDESCryptoServiceProvider
} // namespace app::classes::types
