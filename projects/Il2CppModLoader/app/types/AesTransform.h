#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AesTransform {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AesTransform__Class** type_info;
        inline app::AesTransform__Class* get_class() {
            return il2cpp::get_class<app::AesTransform__Class>(type_info, "System.Security.Cryptography", "AesTransform");
        }
        inline app::AesTransform* create() {
            return il2cpp::create_object<app::AesTransform>(get_class());
        }
    } // namespace AesTransform
} // namespace app::classes::types
