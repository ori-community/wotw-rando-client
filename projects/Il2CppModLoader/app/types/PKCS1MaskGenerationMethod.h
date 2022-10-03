#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PKCS1MaskGenerationMethod {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PKCS1MaskGenerationMethod__Class** type_info;
        inline app::PKCS1MaskGenerationMethod__Class* get_class() {
            return il2cpp::get_class<app::PKCS1MaskGenerationMethod__Class>(type_info, "System.Security.Cryptography", "PKCS1MaskGenerationMethod");
        }
        inline app::PKCS1MaskGenerationMethod* create() {
            return il2cpp::create_object<app::PKCS1MaskGenerationMethod>(get_class());
        }
    } // namespace PKCS1MaskGenerationMethod
} // namespace app::classes::types
