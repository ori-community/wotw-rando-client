#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace X509CertificateCollection_X509CertificateEnumerator {
        inline app::X509CertificateCollection_X509CertificateEnumerator__Class** type_info = (app::X509CertificateCollection_X509CertificateEnumerator__Class**)(modloader::win::memory::resolve_rva(0x04787078));
        inline app::X509CertificateCollection_X509CertificateEnumerator__Class* get_class() {
            return il2cpp::get_nested_class<app::X509CertificateCollection_X509CertificateEnumerator__Class>(type_info, "Mono.Security.X509", "X509CertificateCollection", "X509CertificateEnumerator");
        }
        inline app::X509CertificateCollection_X509CertificateEnumerator* create() {
            return il2cpp::create_object<app::X509CertificateCollection_X509CertificateEnumerator>(get_class());
        }
    } // namespace X509CertificateCollection_X509CertificateEnumerator
} // namespace app::classes::types
