#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SocketError__Enum {
        namespace {
            inline app::SocketError__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SocketError__Enum__Class** type_info = &type_info_ref;
        inline app::SocketError__Enum__Class* get_class() {
            return il2cpp::get_class<app::SocketError__Enum__Class>(type_info, "System.Net.Sockets", "SocketError");
        }
        inline app::SocketError__Enum* create() {
            return il2cpp::create_object<app::SocketError__Enum>(get_class());
        }
    } // namespace SocketError__Enum
} // namespace app::classes::types
