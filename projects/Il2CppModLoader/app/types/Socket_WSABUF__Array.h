#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Socket_WSABUF__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Socket_WSABUF__Array__Class** type_info;
        inline app::Socket_WSABUF__Array__Class* get_class() {
            return il2cpp::get_class<app::Socket_WSABUF__Array__Class>(type_info, "System.Net.Sockets", "Socket+WSABUF[]");
        }
        inline app::Socket_WSABUF__Array* create() {
            return il2cpp::create_object<app::Socket_WSABUF__Array>(get_class());
        }
    } // namespace Socket_WSABUF__Array
} // namespace app::classes::types
