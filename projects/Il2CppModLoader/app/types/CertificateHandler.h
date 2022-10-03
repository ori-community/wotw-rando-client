#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CertificateHandler {
        namespace {
            app::CertificateHandler__Class* type_info_ref = nullptr;
        }
        app::CertificateHandler__Class** type_info = &type_info_ref;
        inline app::CertificateHandler__Class* get_class() {
            return il2cpp::get_class<app::CertificateHandler__Class>(type_info, "UnityEngine.Networking", "CertificateHandler");
        }
        inline app::CertificateHandler* create() {
            return il2cpp::create_object<app::CertificateHandler>(get_class());
        }
    } // namespace CertificateHandler
} // namespace app::classes::types
