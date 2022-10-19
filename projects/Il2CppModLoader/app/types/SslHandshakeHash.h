#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SslHandshakeHash {
        inline app::SslHandshakeHash__Class** type_info = (app::SslHandshakeHash__Class**)(modloader::win::memory::resolve_rva(0x047601D8));
        inline app::SslHandshakeHash__Class* get_class() {
            return il2cpp::get_class<app::SslHandshakeHash__Class>(type_info, "Mono.Security.Protocol.Tls", "SslHandshakeHash");
        }
        inline app::SslHandshakeHash* create() {
            return il2cpp::create_object<app::SslHandshakeHash>(get_class());
        }
    } // namespace SslHandshakeHash
} // namespace app::classes::types
