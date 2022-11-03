#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TlsClientCertificateVerify_1 {
        inline app::TlsClientCertificateVerify_1__Class** type_info = (app::TlsClientCertificateVerify_1__Class**)(modloader::win::memory::resolve_rva(0x04728E38));
        inline app::TlsClientCertificateVerify_1__Class* get_class() {
            return il2cpp::get_class<app::TlsClientCertificateVerify_1__Class>(type_info, "Mono.Security.Protocol.Tls.Handshake.Client", "TlsClientCertificateVerify");
        }
        inline app::TlsClientCertificateVerify_1* create() {
            return il2cpp::create_object<app::TlsClientCertificateVerify_1>(get_class());
        }
    } // namespace TlsClientCertificateVerify_1
} // namespace app::classes::types
