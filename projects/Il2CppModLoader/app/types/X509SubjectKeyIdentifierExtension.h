#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace X509SubjectKeyIdentifierExtension {
        extern IL2CPP_MODLOADER_DLLEXPORT app::X509SubjectKeyIdentifierExtension__Class** type_info;
        inline app::X509SubjectKeyIdentifierExtension__Class* get_class() {
            return il2cpp::get_class<app::X509SubjectKeyIdentifierExtension__Class>(type_info, "System.Security.Cryptography.X509Certificates", "X509SubjectKeyIdentifierExtension");
        }
        inline app::X509SubjectKeyIdentifierExtension* create() {
            return il2cpp::create_object<app::X509SubjectKeyIdentifierExtension>(get_class());
        }
    } // namespace X509SubjectKeyIdentifierExtension
} // namespace app::classes::types
