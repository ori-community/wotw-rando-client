#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TlsClientCertificateVerify {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TlsClientCertificateVerify__Class** type_info;
        inline app::TlsClientCertificateVerify__Class* get_class() {
            return il2cpp::get_class<app::TlsClientCertificateVerify__Class>(type_info, "Mono.Security.Protocol.Tls.Handshake.Server", "TlsClientCertificateVerify");
        }
        inline app::TlsClientCertificateVerify* create() {
            return il2cpp::create_object<app::TlsClientCertificateVerify>(get_class());
        }
    } // namespace TlsClientCertificateVerify
} // namespace app::classes::types
