#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HandshakeMessage {
        namespace {
            inline app::HandshakeMessage__Class* type_info_ref = nullptr;
        }
        inline app::HandshakeMessage__Class** type_info = &type_info_ref;
        inline app::HandshakeMessage__Class* get_class() {
            return il2cpp::get_class<app::HandshakeMessage__Class>(type_info, "Mono.Security.Protocol.Tls.Handshake", "HandshakeMessage");
        }
        inline app::HandshakeMessage* create() {
            return il2cpp::create_object<app::HandshakeMessage>(get_class());
        }
    } // namespace HandshakeMessage
} // namespace app::classes::types
