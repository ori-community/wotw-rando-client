#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TlsServerCertificateRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TlsServerCertificateRequest__Class** type_info;
        inline app::TlsServerCertificateRequest__Class* get_class() {
            return il2cpp::get_class<app::TlsServerCertificateRequest__Class>(type_info, "Mono.Security.Protocol.Tls.Handshake.Server", "TlsServerCertificateRequest");
        }
        inline app::TlsServerCertificateRequest* create() {
            return il2cpp::create_object<app::TlsServerCertificateRequest>(get_class());
        }
    } // namespace TlsServerCertificateRequest
} // namespace app::classes::types
