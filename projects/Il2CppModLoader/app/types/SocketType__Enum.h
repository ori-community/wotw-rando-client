#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SocketType__Enum {
        namespace {
            app::SocketType__Enum__Class* type_info_ref = nullptr;
        }
        app::SocketType__Enum__Class** type_info = &type_info_ref;
        inline app::SocketType__Enum__Class* get_class() {
            return il2cpp::get_class<app::SocketType__Enum__Class>(type_info, "System.Net.Sockets", "SocketType");
        }
        inline app::SocketType__Enum* create() {
            return il2cpp::create_object<app::SocketType__Enum>(get_class());
        }
    } // namespace SocketType__Enum
} // namespace app::classes::types
