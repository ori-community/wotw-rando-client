#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CredentialKey {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CredentialKey__Class** type_info;
        inline app::CredentialKey__Class* get_class() {
            return il2cpp::get_class<app::CredentialKey__Class>(type_info, "System.Net", "CredentialKey");
        }
        inline app::CredentialKey* create() {
            return il2cpp::create_object<app::CredentialKey>(get_class());
        }
    } // namespace CredentialKey
} // namespace app::classes::types
