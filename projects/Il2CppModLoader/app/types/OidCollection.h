#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OidCollection {
        extern IL2CPP_MODLOADER_DLLEXPORT app::OidCollection__Class** type_info;
        inline app::OidCollection__Class* get_class() {
            return il2cpp::get_class<app::OidCollection__Class>(type_info, "System.Security.Cryptography", "OidCollection");
        }
        inline app::OidCollection* create() {
            return il2cpp::create_object<app::OidCollection>(get_class());
        }
    } // namespace OidCollection
} // namespace app::classes::types
