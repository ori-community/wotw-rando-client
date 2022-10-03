#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OidEnumerator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::OidEnumerator__Class** type_info;
        inline app::OidEnumerator__Class* get_class() {
            return il2cpp::get_class<app::OidEnumerator__Class>(type_info, "System.Security.Cryptography", "OidEnumerator");
        }
        inline app::OidEnumerator* create() {
            return il2cpp::create_object<app::OidEnumerator>(get_class());
        }
    } // namespace OidEnumerator
} // namespace app::classes::types
