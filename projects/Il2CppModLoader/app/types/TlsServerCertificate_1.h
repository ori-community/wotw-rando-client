#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TlsServerCertificate_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TlsServerCertificate_1__Class** type_info;
        inline app::TlsServerCertificate_1__Class* get_class() {
            return il2cpp::get_class<app::TlsServerCertificate_1__Class>(type_info, "Mono.Security.Protocol.Tls.Handshake.Client", "TlsServerCertificate");
        }
        inline app::TlsServerCertificate_1* create() {
            return il2cpp::create_object<app::TlsServerCertificate_1>(get_class());
        }
    } // namespace TlsServerCertificate_1
} // namespace app::classes::types
