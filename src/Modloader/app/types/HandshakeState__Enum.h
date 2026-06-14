#pragma once
#include <Modloader/app/structs/HandshakeState__Enum.h>
#include <Modloader/app/structs/HandshakeState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HandshakeState__Enum {
        inline app::HandshakeState__Enum__Class** type_info() {
            static app::HandshakeState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HandshakeState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HandshakeState__Enum__Class* get_class() {
            return il2cpp::get_class<app::HandshakeState__Enum__Class>(type_info(), "Mono.Security.Protocol.Tls", "HandshakeState");
        }
        inline app::HandshakeState__Enum* create() {
            return il2cpp::create_object<app::HandshakeState__Enum>(get_class());
        }
    } // namespace HandshakeState__Enum
} // namespace app::classes::types
