#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RNGCryptoServiceProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RNGCryptoServiceProvider__Class** type_info;
        inline app::RNGCryptoServiceProvider__Class* get_class() {
            return il2cpp::get_class<app::RNGCryptoServiceProvider__Class>(type_info, "System.Security.Cryptography", "RNGCryptoServiceProvider");
        }
        inline app::RNGCryptoServiceProvider* create() {
            return il2cpp::create_object<app::RNGCryptoServiceProvider>(get_class());
        }
    } // namespace RNGCryptoServiceProvider
} // namespace app::classes::types
