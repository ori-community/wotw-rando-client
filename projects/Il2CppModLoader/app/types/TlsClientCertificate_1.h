#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TlsClientCertificate_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TlsClientCertificate_1__Class** type_info;
        inline app::TlsClientCertificate_1__Class* get_class() {
            return il2cpp::get_class<app::TlsClientCertificate_1__Class>(type_info, "Mono.Security.Protocol.Tls.Handshake.Client", "TlsClientCertificate");
        }
        inline app::TlsClientCertificate_1* create() {
            return il2cpp::create_object<app::TlsClientCertificate_1>(get_class());
        }
    } // namespace TlsClientCertificate_1
} // namespace app::classes::types
