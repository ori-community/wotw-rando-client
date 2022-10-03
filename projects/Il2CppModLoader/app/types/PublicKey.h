#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PublicKey {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PublicKey__Class** type_info;
        inline app::PublicKey__Class* get_class() {
            return il2cpp::get_class<app::PublicKey__Class>(type_info, "System.Security.Cryptography.X509Certificates", "PublicKey");
        }
        inline app::PublicKey* create() {
            return il2cpp::create_object<app::PublicKey>(get_class());
        }
    } // namespace PublicKey
} // namespace app::classes::types
