#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace X509CertificateImplMono {
        extern IL2CPP_MODLOADER_DLLEXPORT app::X509CertificateImplMono__Class** type_info;
        inline app::X509CertificateImplMono__Class* get_class() {
            return il2cpp::get_class<app::X509CertificateImplMono__Class>(type_info, "System.Security.Cryptography.X509Certificates", "X509CertificateImplMono");
        }
        inline app::X509CertificateImplMono* create() {
            return il2cpp::create_object<app::X509CertificateImplMono>(get_class());
        }
    } // namespace X509CertificateImplMono
} // namespace app::classes::types
