#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TcpClient {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TcpClient__Class** type_info;
        inline app::TcpClient__Class* get_class() {
            return il2cpp::get_class<app::TcpClient__Class>(type_info, "System.Net.Sockets", "TcpClient");
        }
        inline app::TcpClient* create() {
            return il2cpp::create_object<app::TcpClient>(get_class());
        }
    } // namespace TcpClient
} // namespace app::classes::types
