#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SocketOperation__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SocketOperation__Enum__Class** type_info;
        inline app::SocketOperation__Enum__Class* get_class() {
            return il2cpp::get_class<app::SocketOperation__Enum__Class>(type_info, "System.Net.Sockets", "SocketOperation");
        }
        inline app::SocketOperation__Enum* create() {
            return il2cpp::create_object<app::SocketOperation__Enum>(get_class());
        }
    } // namespace SocketOperation__Enum
} // namespace app::classes::types
