#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CertificateValidationCallback2 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CertificateValidationCallback2__Class** type_info;
        inline app::CertificateValidationCallback2__Class* get_class() {
            return il2cpp::get_class<app::CertificateValidationCallback2__Class>(type_info, "Mono.Security.Protocol.Tls", "CertificateValidationCallback2");
        }
        inline app::CertificateValidationCallback2* create() {
            return il2cpp::create_object<app::CertificateValidationCallback2>(get_class());
        }
    } // namespace CertificateValidationCallback2
} // namespace app::classes::types
