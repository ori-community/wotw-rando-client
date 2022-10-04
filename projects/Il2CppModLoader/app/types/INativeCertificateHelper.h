#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace INativeCertificateHelper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::INativeCertificateHelper__Class** type_info;
        inline app::INativeCertificateHelper__Class* get_class() {
            return il2cpp::get_class<app::INativeCertificateHelper__Class>(type_info, "System.Security.Cryptography.X509Certificates", "INativeCertificateHelper");
        }
        inline app::INativeCertificateHelper* create() {
            return il2cpp::create_object<app::INativeCertificateHelper>(get_class());
        }
    } // namespace INativeCertificateHelper
} // namespace app::classes::types
