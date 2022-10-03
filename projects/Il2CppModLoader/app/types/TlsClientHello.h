#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TlsClientHello {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TlsClientHello__Class** type_info;
        inline app::TlsClientHello__Class* get_class() {
            return il2cpp::get_class<app::TlsClientHello__Class>(type_info, "Mono.Security.Protocol.Tls.Handshake.Server", "TlsClientHello");
        }
        inline app::TlsClientHello* create() {
            return il2cpp::create_object<app::TlsClientHello>(get_class());
        }
    } // namespace TlsClientHello
} // namespace app::classes::types
