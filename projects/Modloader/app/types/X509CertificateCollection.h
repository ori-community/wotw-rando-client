#pragma once
#include <Modloader/app/structs/X509CertificateCollection.h>
#include <Modloader/app/structs/X509CertificateCollection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace X509CertificateCollection {
        inline app::X509CertificateCollection__Class** type_info() {
            static app::X509CertificateCollection__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::X509CertificateCollection__Class**)(modloader::win::memory::resolve_rva(0x047229A0));
            }
            return cache;
        }
        inline app::X509CertificateCollection__Class* get_class() {
            return il2cpp::get_class<app::X509CertificateCollection__Class>(type_info(), "Mono.Security.X509", "X509CertificateCollection");
        }
        inline app::X509CertificateCollection* create() {
            return il2cpp::create_object<app::X509CertificateCollection>(get_class());
        }
    } // namespace X509CertificateCollection
} // namespace app::classes::types
