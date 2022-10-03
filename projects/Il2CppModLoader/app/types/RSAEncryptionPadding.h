#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RSAEncryptionPadding {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RSAEncryptionPadding__Class** type_info;
        inline app::RSAEncryptionPadding__Class* get_class() {
            return il2cpp::get_class<app::RSAEncryptionPadding__Class>(type_info, "System.Security.Cryptography", "RSAEncryptionPadding");
        }
        inline app::RSAEncryptionPadding* create() {
            return il2cpp::create_object<app::RSAEncryptionPadding>(get_class());
        }
    } // namespace RSAEncryptionPadding
} // namespace app::classes::types
