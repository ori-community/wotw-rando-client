#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CredentialCache_CredentialEnumerator {
        inline app::CredentialCache_CredentialEnumerator__Class** type_info = (app::CredentialCache_CredentialEnumerator__Class**)(modloader::win::memory::resolve_rva(0x04781F00));
        inline app::CredentialCache_CredentialEnumerator__Class* get_class() {
            return il2cpp::get_nested_class<app::CredentialCache_CredentialEnumerator__Class>(type_info, "System.Net", "CredentialCache", "CredentialEnumerator");
        }
        inline app::CredentialCache_CredentialEnumerator* create() {
            return il2cpp::create_object<app::CredentialCache_CredentialEnumerator>(get_class());
        }
    } // namespace CredentialCache_CredentialEnumerator
} // namespace app::classes::types
