#pragma once
#include <Modloader/app/structs/X509CertificateImplMono.h>
#include <Modloader/app/structs/X509CertificateImplMono__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace X509CertificateImplMono {
        inline app::X509CertificateImplMono__Class** type_info() {
            static app::X509CertificateImplMono__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::X509CertificateImplMono__Class**)(modloader::win::memory::resolve_rva(0x04749760));
            }
            return cache;
        }
        inline app::X509CertificateImplMono__Class* get_class() {
            return il2cpp::get_class<app::X509CertificateImplMono__Class>(type_info(), "System.Security.Cryptography.X509Certificates", "X509CertificateImplMono");
        }
        inline app::X509CertificateImplMono* create() {
            return il2cpp::create_object<app::X509CertificateImplMono>(get_class());
        }
    } // namespace X509CertificateImplMono
} // namespace app::classes::types
