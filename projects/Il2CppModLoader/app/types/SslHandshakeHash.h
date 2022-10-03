#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SslHandshakeHash {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SslHandshakeHash__Class** type_info;
        inline app::SslHandshakeHash__Class* get_class() {
            return il2cpp::get_class<app::SslHandshakeHash__Class>(type_info, "Mono.Security.Protocol.Tls", "SslHandshakeHash");
        }
        inline app::SslHandshakeHash* create() {
            return il2cpp::create_object<app::SslHandshakeHash>(get_class());
        }
    } // namespace SslHandshakeHash
} // namespace app::classes::types
