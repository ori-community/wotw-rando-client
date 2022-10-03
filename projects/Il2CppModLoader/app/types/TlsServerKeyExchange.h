#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TlsServerKeyExchange {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TlsServerKeyExchange__Class** type_info;
        inline app::TlsServerKeyExchange__Class* get_class() {
            return il2cpp::get_class<app::TlsServerKeyExchange__Class>(type_info, "Mono.Security.Protocol.Tls.Handshake.Server", "TlsServerKeyExchange");
        }
        inline app::TlsServerKeyExchange* create() {
            return il2cpp::create_object<app::TlsServerKeyExchange>(get_class());
        }
    } // namespace TlsServerKeyExchange
} // namespace app::classes::types
