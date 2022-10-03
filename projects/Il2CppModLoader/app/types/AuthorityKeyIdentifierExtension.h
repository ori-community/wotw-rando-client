#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AuthorityKeyIdentifierExtension {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AuthorityKeyIdentifierExtension__Class** type_info;
        inline app::AuthorityKeyIdentifierExtension__Class* get_class() {
            return il2cpp::get_class<app::AuthorityKeyIdentifierExtension__Class>(type_info, "Mono.Security.X509.Extensions", "AuthorityKeyIdentifierExtension");
        }
        inline app::AuthorityKeyIdentifierExtension* create() {
            return il2cpp::create_object<app::AuthorityKeyIdentifierExtension>(get_class());
        }
    } // namespace AuthorityKeyIdentifierExtension
} // namespace app::classes::types
