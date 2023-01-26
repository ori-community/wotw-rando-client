#pragma once
#include <Modloader/app/structs/HandshakeMessage.h>
#include <Modloader/app/structs/HandshakeMessage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HandshakeMessage {
        inline app::HandshakeMessage__Class** type_info() {
            static app::HandshakeMessage__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HandshakeMessage__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HandshakeMessage__Class* get_class() {
            return il2cpp::get_class<app::HandshakeMessage__Class>(type_info(), "Mono.Security.Protocol.Tls.Handshake", "HandshakeMessage");
        }
        inline app::HandshakeMessage* create() {
            return il2cpp::create_object<app::HandshakeMessage>(get_class());
        }
    } // namespace HandshakeMessage
} // namespace app::classes::types
