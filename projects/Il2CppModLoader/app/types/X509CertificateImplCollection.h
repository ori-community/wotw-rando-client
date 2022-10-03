#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace X509CertificateImplCollection {
        extern IL2CPP_MODLOADER_DLLEXPORT app::X509CertificateImplCollection__Class** type_info;
        inline app::X509CertificateImplCollection__Class* get_class() {
            return il2cpp::get_class<app::X509CertificateImplCollection__Class>(type_info, "System.Security.Cryptography.X509Certificates", "X509CertificateImplCollection");
        }
        inline app::X509CertificateImplCollection* create() {
            return il2cpp::create_object<app::X509CertificateImplCollection>(get_class());
        }
    } // namespace X509CertificateImplCollection
} // namespace app::classes::types
