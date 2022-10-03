#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CertificateValidationCallback {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CertificateValidationCallback__Class** type_info;
        inline app::CertificateValidationCallback__Class* get_class() {
            return il2cpp::get_class<app::CertificateValidationCallback__Class>(type_info, "Mono.Security.Protocol.Tls", "CertificateValidationCallback");
        }
        inline app::CertificateValidationCallback* create() {
            return il2cpp::create_object<app::CertificateValidationCallback>(get_class());
        }
    } // namespace CertificateValidationCallback
} // namespace app::classes::types
