#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PKCS1_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PKCS1_1__Class** type_info;
        inline app::PKCS1_1__Class* get_class() {
            return il2cpp::get_class<app::PKCS1_1__Class>(type_info, "Mono.Security.Cryptography", "PKCS1");
        }
        inline app::PKCS1_1* create() {
            return il2cpp::create_object<app::PKCS1_1>(get_class());
        }
    } // namespace PKCS1_1
} // namespace app::classes::types
