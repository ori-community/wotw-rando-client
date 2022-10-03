#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CertificateValidationHelper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CertificateValidationHelper__Class** type_info;
        inline app::CertificateValidationHelper__Class* get_class() {
            return il2cpp::get_class<app::CertificateValidationHelper__Class>(type_info, "Mono.Security.Interface", "CertificateValidationHelper");
        }
        inline app::CertificateValidationHelper* create() {
            return il2cpp::create_object<app::CertificateValidationHelper>(get_class());
        }
    } // namespace CertificateValidationHelper
} // namespace app::classes::types
