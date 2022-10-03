#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PKCS8_EncryptedPrivateKeyInfo_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PKCS8_EncryptedPrivateKeyInfo_1__Class** type_info;
        inline app::PKCS8_EncryptedPrivateKeyInfo_1__Class* get_class() {
            return il2cpp::get_nested_class<app::PKCS8_EncryptedPrivateKeyInfo_1__Class>(type_info, "Mono.Security.Cryptography", "PKCS8", "EncryptedPrivateKeyInfo");
        }
        inline app::PKCS8_EncryptedPrivateKeyInfo_1* create() {
            return il2cpp::create_object<app::PKCS8_EncryptedPrivateKeyInfo_1>(get_class());
        }
    } // namespace PKCS8_EncryptedPrivateKeyInfo_1
} // namespace app::classes::types
