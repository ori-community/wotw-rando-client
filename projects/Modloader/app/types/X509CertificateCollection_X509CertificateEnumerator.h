#pragma once
#include <Modloader/app/structs/X509CertificateCollection_X509CertificateEnumerator.h>
#include <Modloader/app/structs/X509CertificateCollection_X509CertificateEnumerator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace X509CertificateCollection_X509CertificateEnumerator {
        inline app::X509CertificateCollection_X509CertificateEnumerator__Class** type_info() {
            static app::X509CertificateCollection_X509CertificateEnumerator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::X509CertificateCollection_X509CertificateEnumerator__Class**)(modloader::win::memory::resolve_rva(0x04787078));
            }
            return cache;
        }
        inline app::X509CertificateCollection_X509CertificateEnumerator__Class* get_class() {
            return il2cpp::get_nested_class<app::X509CertificateCollection_X509CertificateEnumerator__Class>(type_info(), "Mono.Security.X509", "X509CertificateCollection", "X509CertificateEnumerator");
        }
        inline app::X509CertificateCollection_X509CertificateEnumerator* create() {
            return il2cpp::create_object<app::X509CertificateCollection_X509CertificateEnumerator>(get_class());
        }
    } // namespace X509CertificateCollection_X509CertificateEnumerator
} // namespace app::classes::types
