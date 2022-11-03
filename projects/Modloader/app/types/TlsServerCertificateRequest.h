#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TlsServerCertificateRequest {
        inline app::TlsServerCertificateRequest__Class** type_info = (app::TlsServerCertificateRequest__Class**)(modloader::win::memory::resolve_rva(0x04749238));
        inline app::TlsServerCertificateRequest__Class* get_class() {
            return il2cpp::get_class<app::TlsServerCertificateRequest__Class>(type_info, "Mono.Security.Protocol.Tls.Handshake.Server", "TlsServerCertificateRequest");
        }
        inline app::TlsServerCertificateRequest* create() {
            return il2cpp::create_object<app::TlsServerCertificateRequest>(get_class());
        }
    } // namespace TlsServerCertificateRequest
} // namespace app::classes::types
