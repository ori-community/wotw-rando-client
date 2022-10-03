#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CertificateSelectionCallback {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CertificateSelectionCallback__Class** type_info;
        inline app::CertificateSelectionCallback__Class* get_class() {
            return il2cpp::get_class<app::CertificateSelectionCallback__Class>(type_info, "Mono.Security.Protocol.Tls", "CertificateSelectionCallback");
        }
        inline app::CertificateSelectionCallback* create() {
            return il2cpp::create_object<app::CertificateSelectionCallback>(get_class());
        }
    } // namespace CertificateSelectionCallback
} // namespace app::classes::types
