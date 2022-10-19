#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace X509CertificateImpl__Array {
        namespace {
            inline app::X509CertificateImpl__Array__Class* type_info_ref = nullptr;
        }
        inline app::X509CertificateImpl__Array__Class** type_info = &type_info_ref;
        inline app::X509CertificateImpl__Array__Class* get_class() {
            return il2cpp::get_class<app::X509CertificateImpl__Array__Class>(type_info, "System.Security.Cryptography.X509Certificates", "X509CertificateImpl[]");
        }
        inline app::X509CertificateImpl__Array* create() {
            return il2cpp::create_object<app::X509CertificateImpl__Array>(get_class());
        }
    } // namespace X509CertificateImpl__Array
} // namespace app::classes::types
