#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace X509CertificateCollection_X509CertificateEnumerator_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::X509CertificateCollection_X509CertificateEnumerator_1__Class** type_info;
        inline app::X509CertificateCollection_X509CertificateEnumerator_1__Class* get_class() {
            return il2cpp::get_nested_class<app::X509CertificateCollection_X509CertificateEnumerator_1__Class>(type_info, "System.Security.Cryptography.X509Certificates", "X509CertificateCollection", "X509CertificateEnumerator");
        }
        inline app::X509CertificateCollection_X509CertificateEnumerator_1* create() {
            return il2cpp::create_object<app::X509CertificateCollection_X509CertificateEnumerator_1>(get_class());
        }
    } // namespace X509CertificateCollection_X509CertificateEnumerator_1
} // namespace app::classes::types
