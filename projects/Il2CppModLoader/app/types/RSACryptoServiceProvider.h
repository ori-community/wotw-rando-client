#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RSACryptoServiceProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RSACryptoServiceProvider__Class** type_info;
        inline app::RSACryptoServiceProvider__Class* get_class() {
            return il2cpp::get_class<app::RSACryptoServiceProvider__Class>(type_info, "System.Security.Cryptography", "RSACryptoServiceProvider");
        }
        inline app::RSACryptoServiceProvider* create() {
            return il2cpp::create_object<app::RSACryptoServiceProvider>(get_class());
        }
    } // namespace RSACryptoServiceProvider
} // namespace app::classes::types
