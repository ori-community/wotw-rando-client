#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SystemCertificateValidator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SystemCertificateValidator__Class** type_info;
        inline app::SystemCertificateValidator__Class* get_class() {
            return il2cpp::get_class<app::SystemCertificateValidator__Class>(type_info, "Mono.Net.Security", "SystemCertificateValidator");
        }
        inline app::SystemCertificateValidator* create() {
            return il2cpp::create_object<app::SystemCertificateValidator>(get_class());
        }
    } // namespace SystemCertificateValidator
} // namespace app::classes::types
