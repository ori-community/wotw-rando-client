#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MD5 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MD5__Class** type_info;
        inline app::MD5__Class* get_class() {
            return il2cpp::get_class<app::MD5__Class>(type_info, "System.Security.Cryptography", "MD5");
        }
        inline app::MD5* create() {
            return il2cpp::create_object<app::MD5>(get_class());
        }
    } // namespace MD5
} // namespace app::classes::types
