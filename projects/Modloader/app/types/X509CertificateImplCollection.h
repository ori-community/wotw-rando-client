#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/X509CertificateImplCollection__Class.h>
#include <Modloader/app/structs/X509CertificateImplCollection.h>

namespace app::classes::types {
    namespace X509CertificateImplCollection {
        inline app::X509CertificateImplCollection__Class** type_info = (app::X509CertificateImplCollection__Class**)(modloader::win::memory::resolve_rva(0x0473AC30));
        inline app::X509CertificateImplCollection__Class* get_class() {
            return il2cpp::get_class<app::X509CertificateImplCollection__Class>(type_info, "System.Security.Cryptography.X509Certificates", "X509CertificateImplCollection");
        }
        inline app::X509CertificateImplCollection* create() {
            return il2cpp::create_object<app::X509CertificateImplCollection>(get_class());
        }
    } // namespace X509CertificateImplCollection
} // namespace app::classes::types
