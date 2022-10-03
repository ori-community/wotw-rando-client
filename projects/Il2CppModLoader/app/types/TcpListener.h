#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TcpListener {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TcpListener__Class** type_info;
        inline app::TcpListener__Class* get_class() {
            return il2cpp::get_class<app::TcpListener__Class>(type_info, "System.Net.Sockets", "TcpListener");
        }
        inline app::TcpListener* create() {
            return il2cpp::create_object<app::TcpListener>(get_class());
        }
    } // namespace TcpListener
} // namespace app::classes::types
