#pragma once
#include <Modloader/app/structs/TlsClientKeyExchange.h>
#include <Modloader/app/structs/TlsClientKeyExchange__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TlsClientKeyExchange {
        inline app::TlsClientKeyExchange__Class** type_info() {
            static app::TlsClientKeyExchange__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TlsClientKeyExchange__Class**)(modloader::win::memory::resolve_rva(0x04795408));
            }
            return cache;
        }
        inline app::TlsClientKeyExchange__Class* get_class() {
            return il2cpp::get_class<app::TlsClientKeyExchange__Class>(type_info(), "Mono.Security.Protocol.Tls.Handshake.Server", "TlsClientKeyExchange");
        }
        inline app::TlsClientKeyExchange* create() {
            return il2cpp::create_object<app::TlsClientKeyExchange>(get_class());
        }
    } // namespace TlsClientKeyExchange
} // namespace app::classes::types
