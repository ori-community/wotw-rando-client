#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace X509CertificateCollection_X509CertificateEnumerator_2 {
        inline app::X509CertificateCollection_X509CertificateEnumerator_2__Class** type_info = (app::X509CertificateCollection_X509CertificateEnumerator_2__Class**)(modloader::win::memory::resolve_rva(0x0475D1B0));
        inline app::X509CertificateCollection_X509CertificateEnumerator_2__Class* get_class() {
            return il2cpp::get_nested_class<app::X509CertificateCollection_X509CertificateEnumerator_2__Class>(type_info, "Mono.Security.X509", "X509CertificateCollection", "X509CertificateEnumerator");
        }
        inline app::X509CertificateCollection_X509CertificateEnumerator_2* create() {
            return il2cpp::create_object<app::X509CertificateCollection_X509CertificateEnumerator_2>(get_class());
        }
    } // namespace X509CertificateCollection_X509CertificateEnumerator_2
} // namespace app::classes::types
