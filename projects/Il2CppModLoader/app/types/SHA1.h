#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SHA1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SHA1__Class** type_info;
        inline app::SHA1__Class* get_class() {
            return il2cpp::get_class<app::SHA1__Class>(type_info, "System.Security.Cryptography", "SHA1");
        }
        inline app::SHA1* create() {
            return il2cpp::create_object<app::SHA1>(get_class());
        }
    } // namespace SHA1
} // namespace app::classes::types
