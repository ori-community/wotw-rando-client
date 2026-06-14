#pragma once
#include <Modloader/app/structs/TlsServerCertificate_1.h>
#include <Modloader/app/structs/TlsServerCertificate_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TlsServerCertificate_1 {
        inline app::TlsServerCertificate_1__Class** type_info() {
            static app::TlsServerCertificate_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TlsServerCertificate_1__Class**)(modloader::win::memory::resolve_rva(0x047492C0));
            }
            return cache;
        }
        inline app::TlsServerCertificate_1__Class* get_class() {
            return il2cpp::get_class<app::TlsServerCertificate_1__Class>(type_info(), "Mono.Security.Protocol.Tls.Handshake.Client", "TlsServerCertificate");
        }
        inline app::TlsServerCertificate_1* create() {
            return il2cpp::create_object<app::TlsServerCertificate_1>(get_class());
        }
    } // namespace TlsServerCertificate_1
} // namespace app::classes::types
