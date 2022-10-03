#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TlsServerHelloDone {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TlsServerHelloDone__Class** type_info;
        inline app::TlsServerHelloDone__Class* get_class() {
            return il2cpp::get_class<app::TlsServerHelloDone__Class>(type_info, "Mono.Security.Protocol.Tls.Handshake.Server", "TlsServerHelloDone");
        }
        inline app::TlsServerHelloDone* create() {
            return il2cpp::create_object<app::TlsServerHelloDone>(get_class());
        }
    } // namespace TlsServerHelloDone
} // namespace app::classes::types
