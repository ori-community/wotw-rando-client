#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TlsClientCertificate {
        inline app::TlsClientCertificate__Class** type_info = (app::TlsClientCertificate__Class**)(modloader::win::memory::resolve_rva(0x047041E0));
        inline app::TlsClientCertificate__Class* get_class() {
            return il2cpp::get_class<app::TlsClientCertificate__Class>(type_info, "Mono.Security.Protocol.Tls.Handshake.Server", "TlsClientCertificate");
        }
        inline app::TlsClientCertificate* create() {
            return il2cpp::create_object<app::TlsClientCertificate>(get_class());
        }
    } // namespace TlsClientCertificate
} // namespace app::classes::types
