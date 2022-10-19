#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CredentialCache {
        namespace {
            inline app::CredentialCache__Class* type_info_ref = nullptr;
        }
        inline app::CredentialCache__Class** type_info = &type_info_ref;
        inline app::CredentialCache__Class* get_class() {
            return il2cpp::get_class<app::CredentialCache__Class>(type_info, "System.Net", "CredentialCache");
        }
        inline app::CredentialCache* create() {
            return il2cpp::create_object<app::CredentialCache>(get_class());
        }
    } // namespace CredentialCache
} // namespace app::classes::types
