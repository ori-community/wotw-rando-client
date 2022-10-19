#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CredentialHostKey {
        inline app::CredentialHostKey__Class** type_info = (app::CredentialHostKey__Class**)(modloader::win::memory::resolve_rva(0x0472A9D0));
        inline app::CredentialHostKey__Class* get_class() {
            return il2cpp::get_class<app::CredentialHostKey__Class>(type_info, "System.Net", "CredentialHostKey");
        }
        inline app::CredentialHostKey* create() {
            return il2cpp::create_object<app::CredentialHostKey>(get_class());
        }
    } // namespace CredentialHostKey
} // namespace app::classes::types
