#pragma once
#include <Modloader/app/structs/X509CertificateBuilder.h>
#include <Modloader/app/structs/X509CertificateBuilder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace X509CertificateBuilder {
        inline app::X509CertificateBuilder__Class** type_info() {
            static app::X509CertificateBuilder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::X509CertificateBuilder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::X509CertificateBuilder__Class* get_class() {
            return il2cpp::get_class<app::X509CertificateBuilder__Class>(type_info(), "Mono.Security.X509", "X509CertificateBuilder");
        }
        inline app::X509CertificateBuilder* create() {
            return il2cpp::create_object<app::X509CertificateBuilder>(get_class());
        }
    } // namespace X509CertificateBuilder
} // namespace app::classes::types
