#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TlsServerCertificateRequest_1__Class.h>
#include <Modloader/app/structs/TlsServerCertificateRequest_1.h>

namespace app::classes::types {
    namespace TlsServerCertificateRequest_1 {
        inline app::TlsServerCertificateRequest_1__Class** type_info = (app::TlsServerCertificateRequest_1__Class**)(modloader::win::memory::resolve_rva(0x04732110));
        inline app::TlsServerCertificateRequest_1__Class* get_class() {
            return il2cpp::get_class<app::TlsServerCertificateRequest_1__Class>(type_info, "Mono.Security.Protocol.Tls.Handshake.Client", "TlsServerCertificateRequest");
        }
        inline app::TlsServerCertificateRequest_1* create() {
            return il2cpp::create_object<app::TlsServerCertificateRequest_1>(get_class());
        }
    } // namespace TlsServerCertificateRequest_1
} // namespace app::classes::types
