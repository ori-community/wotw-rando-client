#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace X509CertificateImpl {
        extern IL2CPP_MODLOADER_DLLEXPORT app::X509CertificateImpl__Class** type_info;
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
