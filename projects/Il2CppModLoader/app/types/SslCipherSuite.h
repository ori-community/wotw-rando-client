#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SslCipherSuite {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SslCipherSuite__Class** type_info;
        inline app::SslCipherSuite__Class* get_class() {
            return il2cpp::get_class<app::SslCipherSuite__Class>(type_info, "Mono.Security.Protocol.Tls", "SslCipherSuite");
        }
        inline app::SslCipherSuite* create() {
            return il2cpp::create_object<app::SslCipherSuite>(get_class());
        }
    } // namespace SslCipherSuite
} // namespace app::classes::types
