#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SubjectKeyIdentifierExtension {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SubjectKeyIdentifierExtension__Class** type_info;
        inline app::SubjectKeyIdentifierExtension__Class* get_class() {
            return il2cpp::get_class<app::SubjectKeyIdentifierExtension__Class>(type_info, "Mono.Security.X509.Extensions", "SubjectKeyIdentifierExtension");
        }
        inline app::SubjectKeyIdentifierExtension* create() {
            return il2cpp::create_object<app::SubjectKeyIdentifierExtension>(get_class());
        }
    } // namespace SubjectKeyIdentifierExtension
} // namespace app::classes::types
