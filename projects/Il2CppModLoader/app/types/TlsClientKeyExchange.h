#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TlsClientKeyExchange {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TlsClientKeyExchange__Class** type_info;
        inline app::TlsClientKeyExchange__Class* get_class() {
            return il2cpp::get_class<app::TlsClientKeyExchange__Class>(type_info, "Mono.Security.Protocol.Tls.Handshake.Server", "TlsClientKeyExchange");
        }
        inline app::TlsClientKeyExchange* create() {
            return il2cpp::create_object<app::TlsClientKeyExchange>(get_class());
        }
    } // namespace TlsClientKeyExchange
} // namespace app::classes::types
