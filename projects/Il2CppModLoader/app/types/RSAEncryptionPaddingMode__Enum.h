#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RSAEncryptionPaddingMode__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RSAEncryptionPaddingMode__Enum__Class** type_info;
        inline app::RSAEncryptionPaddingMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::RSAEncryptionPaddingMode__Enum__Class>(type_info, "System.Security.Cryptography", "RSAEncryptionPaddingMode");
        }
        inline app::RSAEncryptionPaddingMode__Enum* create() {
            return il2cpp::create_object<app::RSAEncryptionPaddingMode__Enum>(get_class());
        }
    } // namespace RSAEncryptionPaddingMode__Enum
} // namespace app::classes::types
