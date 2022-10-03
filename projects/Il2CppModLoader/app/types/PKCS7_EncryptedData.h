#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PKCS7_EncryptedData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PKCS7_EncryptedData__Class** type_info;
        inline app::PKCS7_EncryptedData__Class* get_class() {
            return il2cpp::get_nested_class<app::PKCS7_EncryptedData__Class>(type_info, "Mono.Security", "PKCS7", "EncryptedData");
        }
        inline app::PKCS7_EncryptedData* create() {
            return il2cpp::create_object<app::PKCS7_EncryptedData>(get_class());
        }
    } // namespace PKCS7_EncryptedData
} // namespace app::classes::types
