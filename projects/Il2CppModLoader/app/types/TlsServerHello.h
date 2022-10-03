#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TlsServerHello {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TlsServerHello__Class** type_info;
        inline app::TlsServerHello__Class* get_class() {
            return il2cpp::get_class<app::TlsServerHello__Class>(type_info, "Mono.Security.Protocol.Tls.Handshake.Server", "TlsServerHello");
        }
        inline app::TlsServerHello* create() {
            return il2cpp::create_object<app::TlsServerHello>(get_class());
        }
    } // namespace TlsServerHello
} // namespace app::classes::types
