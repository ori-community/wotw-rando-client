#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SocketException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SocketException__Class** type_info;
        inline app::SocketException__Class* get_class() {
            return il2cpp::get_class<app::SocketException__Class>(type_info, "System.Net.Sockets", "SocketException");
        }
        inline app::SocketException* create() {
            return il2cpp::create_object<app::SocketException>(get_class());
        }
    } // namespace SocketException
} // namespace app::classes::types
