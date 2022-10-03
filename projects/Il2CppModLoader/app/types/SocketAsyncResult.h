#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SocketAsyncResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SocketAsyncResult__Class** type_info;
        inline app::SocketAsyncResult__Class* get_class() {
            return il2cpp::get_class<app::SocketAsyncResult__Class>(type_info, "System.Net.Sockets", "SocketAsyncResult");
        }
        inline app::SocketAsyncResult* create() {
            return il2cpp::create_object<app::SocketAsyncResult>(get_class());
        }
    } // namespace SocketAsyncResult
} // namespace app::classes::types
