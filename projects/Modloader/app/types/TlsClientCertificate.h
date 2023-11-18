#pragma once
#include <Modloader/app/structs/TlsClientCertificate.h>
#include <Modloader/app/structs/TlsClientCertificate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TlsClientCertificate {
        inline app::TlsClientCertificate__Class** type_info() {
            static app::TlsClientCertificate__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TlsClientCertificate__Class**)(modloader::win::memory::resolve_rva(0x047041E0));
            }
            return cache;
        }
        inline app::TlsClientCertificate__Class* get_class() {
            return il2cpp::get_class<app::TlsClientCertificate__Class>(type_info(), "Mono.Security.Protocol.Tls.Handshake.Server", "TlsClientCertificate");
        }
        inline app::TlsClientCertificate* create() {
            return il2cpp::create_object<app::TlsClientCertificate>(get_class());
        }
    } // namespace TlsClientCertificate
} // namespace app::classes::types
