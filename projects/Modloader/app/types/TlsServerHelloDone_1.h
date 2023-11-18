#pragma once
#include <Modloader/app/structs/TlsServerHelloDone_1.h>
#include <Modloader/app/structs/TlsServerHelloDone_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TlsServerHelloDone_1 {
        inline app::TlsServerHelloDone_1__Class** type_info() {
            static app::TlsServerHelloDone_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TlsServerHelloDone_1__Class**)(modloader::win::memory::resolve_rva(0x0474A248));
            }
            return cache;
        }
        inline app::TlsServerHelloDone_1__Class* get_class() {
            return il2cpp::get_class<app::TlsServerHelloDone_1__Class>(type_info(), "Mono.Security.Protocol.Tls.Handshake.Client", "TlsServerHelloDone");
        }
        inline app::TlsServerHelloDone_1* create() {
            return il2cpp::create_object<app::TlsServerHelloDone_1>(get_class());
        }
    } // namespace TlsServerHelloDone_1
} // namespace app::classes::types
