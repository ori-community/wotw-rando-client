#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CryptographicException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CryptographicException__Class** type_info;
        inline app::CryptographicException__Class* get_class() {
            return il2cpp::get_class<app::CryptographicException__Class>(type_info, "System.Security.Cryptography", "CryptographicException");
        }
        inline app::CryptographicException* create() {
            return il2cpp::create_object<app::CryptographicException>(get_class());
        }
    } // namespace CryptographicException
} // namespace app::classes::types
