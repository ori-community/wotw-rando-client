#pragma once
#include <Modloader/app/structs/X509CertificateCollection_X509CertificateEnumerator_1.h>
#include <Modloader/app/structs/X509CertificateCollection_X509CertificateEnumerator_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace X509CertificateCollection_X509CertificateEnumerator_1 {
        inline app::X509CertificateCollection_X509CertificateEnumerator_1__Class** type_info() {
            static app::X509CertificateCollection_X509CertificateEnumerator_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::X509CertificateCollection_X509CertificateEnumerator_1__Class**)(modloader::win::memory::resolve_rva(0x0472EE38));
            }
            return cache;
        }
        inline app::X509CertificateCollection_X509CertificateEnumerator_1__Class* get_class() {
            return il2cpp::get_nested_class<app::X509CertificateCollection_X509CertificateEnumerator_1__Class>(type_info(), "System.Security.Cryptography.X509Certificates", "X509CertificateCollection", "X509CertificateEnumerator");
        }
        inline app::X509CertificateCollection_X509CertificateEnumerator_1* create() {
            return il2cpp::create_object<app::X509CertificateCollection_X509CertificateEnumerator_1>(get_class());
        }
    } // namespace X509CertificateCollection_X509CertificateEnumerator_1
} // namespace app::classes::types
