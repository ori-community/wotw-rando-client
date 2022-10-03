#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MD5SHA1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MD5SHA1__Class** type_info;
        inline app::MD5SHA1__Class* get_class() {
            return il2cpp::get_class<app::MD5SHA1__Class>(type_info, "Mono.Security.Cryptography", "MD5SHA1");
        }
        inline app::MD5SHA1* create() {
            return il2cpp::create_object<app::MD5SHA1>(get_class());
        }
    } // namespace MD5SHA1
} // namespace app::classes::types
