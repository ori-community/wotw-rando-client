#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TlsClientFinished {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TlsClientFinished__Class** type_info;
        inline app::TlsClientFinished__Class* get_class() {
            return il2cpp::get_class<app::TlsClientFinished__Class>(type_info, "Mono.Security.Protocol.Tls.Handshake.Server", "TlsClientFinished");
        }
        inline app::TlsClientFinished* create() {
            return il2cpp::create_object<app::TlsClientFinished>(get_class());
        }
    } // namespace TlsClientFinished
} // namespace app::classes::types
