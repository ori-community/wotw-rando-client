#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/X509CertificateImpl__Class.h>
#include <Modloader/app/structs/X509CertificateImpl.h>
#include <Modloader/app/structs/X509CertificateImpl__Array.h>

namespace app::classes::types {
    namespace X509CertificateImpl {
        inline app::X509CertificateImpl__Class** type_info = (app::X509CertificateImpl__Class**)(modloader::win::memory::resolve_rva(0x0478E458));
        inline app::X509CertificateImpl__Class* get_class() {
            return il2cpp::get_class<app::X509CertificateImpl__Class>(type_info, "System.Security.Cryptography.X509Certificates", "X509CertificateImpl");
        }
        inline app::X509CertificateImpl* create() {
            return il2cpp::create_object<app::X509CertificateImpl>(get_class());
        }
        inline app::X509CertificateImpl__Array* create_array(int size) {
            return il2cpp::array_new<app::X509CertificateImpl__Array>(get_class(), size);
        }
        inline app::X509CertificateImpl__Array* create_array(const std::vector<app::X509CertificateImpl*>& items) {
            return il2cpp::array_new<app::X509CertificateImpl__Array>(get_class(), items);
        }
    } // namespace X509CertificateImpl
} // namespace app::classes::types
