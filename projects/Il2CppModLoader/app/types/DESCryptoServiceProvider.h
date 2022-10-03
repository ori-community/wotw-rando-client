#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DESCryptoServiceProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DESCryptoServiceProvider__Class** type_info;
        inline app::DESCryptoServiceProvider__Class* get_class() {
            return il2cpp::get_class<app::DESCryptoServiceProvider__Class>(type_info, "System.Security.Cryptography", "DESCryptoServiceProvider");
        }
        inline app::DESCryptoServiceProvider* create() {
            return il2cpp::create_object<app::DESCryptoServiceProvider>(get_class());
        }
    } // namespace DESCryptoServiceProvider
} // namespace app::classes::types
