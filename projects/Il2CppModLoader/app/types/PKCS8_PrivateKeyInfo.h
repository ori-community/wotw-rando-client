#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PKCS8_PrivateKeyInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PKCS8_PrivateKeyInfo__Class** type_info;
        inline app::PKCS8_PrivateKeyInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::PKCS8_PrivateKeyInfo__Class>(type_info, "Mono.Security.Cryptography", "PKCS8", "PrivateKeyInfo");
        }
        inline app::PKCS8_PrivateKeyInfo* create() {
            return il2cpp::create_object<app::PKCS8_PrivateKeyInfo>(get_class());
        }
    } // namespace PKCS8_PrivateKeyInfo
} // namespace app::classes::types
