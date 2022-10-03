#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CredentialHostKey {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CredentialHostKey__Class** type_info;
        inline app::CredentialHostKey__Class* get_class() {
            return il2cpp::get_class<app::CredentialHostKey__Class>(type_info, "System.Net", "CredentialHostKey");
        }
        inline app::CredentialHostKey* create() {
            return il2cpp::create_object<app::CredentialHostKey>(get_class());
        }
    } // namespace CredentialHostKey
} // namespace app::classes::types
