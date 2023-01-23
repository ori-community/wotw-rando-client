#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HandshakeState__Enum__Class.h>
#include <Modloader/app/structs/HandshakeState__Enum.h>

namespace app::classes::types {
    namespace HandshakeState__Enum {
        namespace {
            inline app::HandshakeState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::HandshakeState__Enum__Class** type_info = &type_info_ref;
        inline app::HandshakeState__Enum__Class* get_class() {
            return il2cpp::get_class<app::HandshakeState__Enum__Class>(type_info, "Mono.Security.Protocol.Tls", "HandshakeState");
        }
        inline app::HandshakeState__Enum* create() {
            return il2cpp::create_object<app::HandshakeState__Enum>(get_class());
        }
    } // namespace HandshakeState__Enum
} // namespace app::classes::types
