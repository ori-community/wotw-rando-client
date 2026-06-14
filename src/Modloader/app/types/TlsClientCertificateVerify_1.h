#pragma once
#include <Modloader/app/structs/TlsClientCertificateVerify_1.h>
#include <Modloader/app/structs/TlsClientCertificateVerify_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TlsClientCertificateVerify_1 {
        inline app::TlsClientCertificateVerify_1__Class** type_info() {
            static app::TlsClientCertificateVerify_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TlsClientCertificateVerify_1__Class**)(modloader::win::memory::resolve_rva(0x04728E38));
            }
            return cache;
        }
        inline app::TlsClientCertificateVerify_1__Class* get_class() {
            return il2cpp::get_class<app::TlsClientCertificateVerify_1__Class>(type_info(), "Mono.Security.Protocol.Tls.Handshake.Client", "TlsClientCertificateVerify");
        }
        inline app::TlsClientCertificateVerify_1* create() {
            return il2cpp::create_object<app::TlsClientCertificateVerify_1>(get_class());
        }
    } // namespace TlsClientCertificateVerify_1
} // namespace app::classes::types
