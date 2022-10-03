#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TlsClientCertificateVerify_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TlsClientCertificateVerify_1__Class** type_info;
        inline app::TlsClientCertificateVerify_1__Class* get_class() {
            return il2cpp::get_class<app::TlsClientCertificateVerify_1__Class>(type_info, "Mono.Security.Protocol.Tls.Handshake.Client", "TlsClientCertificateVerify");
        }
        inline app::TlsClientCertificateVerify_1* create() {
            return il2cpp::create_object<app::TlsClientCertificateVerify_1>(get_class());
        }
    } // namespace TlsClientCertificateVerify_1
} // namespace app::classes::types
