#pragma once
#include <Modloader/app/structs/Socket_WSABUFPtr.h>
#include <Modloader/app/structs/Socket_WSABUFPtr__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Socket_WSABUFPtr {
        inline app::Socket_WSABUFPtr__Class** type_info() {
            static app::Socket_WSABUFPtr__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Socket_WSABUFPtr__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Socket_WSABUFPtr__Class* get_class() {
            return il2cpp::get_class<app::Socket_WSABUFPtr__Class>(type_info(), "System.Net.Sockets", "Socket+WSABUF*");
        }
        inline app::Socket_WSABUFPtr* create() {
            return il2cpp::create_object<app::Socket_WSABUFPtr>(get_class());
        }
    } // namespace Socket_WSABUFPtr
} // namespace app::classes::types
