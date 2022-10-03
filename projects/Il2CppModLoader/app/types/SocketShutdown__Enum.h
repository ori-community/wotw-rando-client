#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SocketShutdown__Enum {
        namespace {
            app::SocketShutdown__Enum__Class* type_info_ref = nullptr;
        }
        app::SocketShutdown__Enum__Class** type_info = &type_info_ref;
        inline app::SocketShutdown__Enum__Class* get_class() {
            return il2cpp::get_class<app::SocketShutdown__Enum__Class>(type_info, "System.Net.Sockets", "SocketShutdown");
        }
        inline app::SocketShutdown__Enum* create() {
            return il2cpp::create_object<app::SocketShutdown__Enum>(get_class());
        }
    } // namespace SocketShutdown__Enum
} // namespace app::classes::types
