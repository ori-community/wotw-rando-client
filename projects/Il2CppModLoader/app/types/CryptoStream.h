#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CryptoStream {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CryptoStream__Class** type_info;
        inline app::CryptoStream__Class* get_class() {
            return il2cpp::get_class<app::CryptoStream__Class>(type_info, "System.Security.Cryptography", "CryptoStream");
        }
        inline app::CryptoStream* create() {
            return il2cpp::create_object<app::CryptoStream>(get_class());
        }
    } // namespace CryptoStream
} // namespace app::classes::types
