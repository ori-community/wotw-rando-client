#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Socket {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Socket__Class** type_info;
        inline app::Socket__Class* get_class() {
            return il2cpp::get_class<app::Socket__Class>(type_info, "System.Net.Sockets", "Socket");
        }
        inline app::Socket* create() {
            return il2cpp::create_object<app::Socket>(get_class());
        }
    } // namespace Socket
} // namespace app::classes::types
