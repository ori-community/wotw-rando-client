#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TlsServerFinished {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TlsServerFinished__Class** type_info;
        inline app::TlsServerFinished__Class* get_class() {
            return il2cpp::get_class<app::TlsServerFinished__Class>(type_info, "Mono.Security.Protocol.Tls.Handshake.Server", "TlsServerFinished");
        }
        inline app::TlsServerFinished* create() {
            return il2cpp::create_object<app::TlsServerFinished>(get_class());
        }
    } // namespace TlsServerFinished
} // namespace app::classes::types
