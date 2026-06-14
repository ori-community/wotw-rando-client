#pragma once
#include <Modloader/app/structs/HandshakeType__Enum.h>
#include <Modloader/app/structs/HandshakeType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HandshakeType__Enum {
        inline app::HandshakeType__Enum__Class** type_info() {
            static app::HandshakeType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HandshakeType__Enum__Class**)(modloader::win::memory::resolve_rva(0x0477CA98));
            }
            return cache;
        }
        inline app::HandshakeType__Enum__Class* get_class() {
            return il2cpp::get_class<app::HandshakeType__Enum__Class>(type_info(), "Mono.Security.Protocol.Tls.Handshake", "HandshakeType");
        }
        inline app::HandshakeType__Enum* create() {
            return il2cpp::create_object<app::HandshakeType__Enum>(get_class());
        }
    } // namespace HandshakeType__Enum
} // namespace app::classes::types
