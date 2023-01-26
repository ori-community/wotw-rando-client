#pragma once
#include <Modloader/app/structs/X509CertificateCollection_1.h>
#include <Modloader/app/structs/X509CertificateCollection_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace X509CertificateCollection_1 {
        inline app::X509CertificateCollection_1__Class** type_info() {
            static app::X509CertificateCollection_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::X509CertificateCollection_1__Class**)(modloader::win::memory::resolve_rva(0x047854F8));
            }
            return cache;
        }
        inline app::X509CertificateCollection_1__Class* get_class() {
            return il2cpp::get_class<app::X509CertificateCollection_1__Class>(type_info(), "System.Security.Cryptography.X509Certificates", "X509CertificateCollection");
        }
        inline app::X509CertificateCollection_1* create() {
            return il2cpp::create_object<app::X509CertificateCollection_1>(get_class());
        }
    } // namespace X509CertificateCollection_1
} // namespace app::classes::types
