#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TlsServerCertificate {
        inline app::TlsServerCertificate__Class** type_info = (app::TlsServerCertificate__Class**)(modloader::win::memory::resolve_rva(0x04720A48));
        inline app::TlsServerCertificate__Class* get_class() {
            return il2cpp::get_class<app::TlsServerCertificate__Class>(type_info, "Mono.Security.Protocol.Tls.Handshake.Server", "TlsServerCertificate");
        }
        inline app::TlsServerCertificate* create() {
            return il2cpp::create_object<app::TlsServerCertificate>(get_class());
        }
    } // namespace TlsServerCertificate
} // namespace app::classes::types
