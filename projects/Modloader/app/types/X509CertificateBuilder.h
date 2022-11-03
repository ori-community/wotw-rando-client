#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace X509CertificateBuilder {
        namespace {
            inline app::X509CertificateBuilder__Class* type_info_ref = nullptr;
        }
        inline app::X509CertificateBuilder__Class** type_info = &type_info_ref;
        inline app::X509CertificateBuilder__Class* get_class() {
            return il2cpp::get_class<app::X509CertificateBuilder__Class>(type_info, "Mono.Security.X509", "X509CertificateBuilder");
        }
        inline app::X509CertificateBuilder* create() {
            return il2cpp::create_object<app::X509CertificateBuilder>(get_class());
        }
    } // namespace X509CertificateBuilder
} // namespace app::classes::types
