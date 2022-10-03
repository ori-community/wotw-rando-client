#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TlsClientCertificate {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TlsClientCertificate__Class** type_info;
        inline app::TlsClientCertificate__Class* get_class() {
            return il2cpp::get_class<app::TlsClientCertificate__Class>(type_info, "Mono.Security.Protocol.Tls.Handshake.Server", "TlsClientCertificate");
        }
        inline app::TlsClientCertificate* create() {
            return il2cpp::create_object<app::TlsClientCertificate>(get_class());
        }
    } // namespace TlsClientCertificate
} // namespace app::classes::types
