#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HandshakeType__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HandshakeType__Enum__Class** type_info;
        inline app::HandshakeType__Enum__Class* get_class() {
            return il2cpp::get_class<app::HandshakeType__Enum__Class>(type_info, "Mono.Security.Protocol.Tls.Handshake", "HandshakeType");
        }
        inline app::HandshakeType__Enum* create() {
            return il2cpp::create_object<app::HandshakeType__Enum>(get_class());
        }
    } // namespace HandshakeType__Enum
} // namespace app::classes::types
