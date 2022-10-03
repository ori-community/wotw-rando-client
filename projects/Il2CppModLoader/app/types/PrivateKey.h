#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PrivateKey {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PrivateKey__Class** type_info;
        inline app::PrivateKey__Class* get_class() {
            return il2cpp::get_class<app::PrivateKey__Class>(type_info, "Mono.Security.Authenticode", "PrivateKey");
        }
        inline app::PrivateKey* create() {
            return il2cpp::create_object<app::PrivateKey>(get_class());
        }
    } // namespace PrivateKey
} // namespace app::classes::types
