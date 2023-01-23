#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Socket_WSABUFPtr__Class.h>
#include <Modloader/app/structs/Socket_WSABUFPtr.h>

namespace app::classes::types {
    namespace Socket_WSABUFPtr {
        namespace {
            inline app::Socket_WSABUFPtr__Class* type_info_ref = nullptr;
        }
        inline app::Socket_WSABUFPtr__Class** type_info = &type_info_ref;
        inline app::Socket_WSABUFPtr__Class* get_class() {
            return il2cpp::get_class<app::Socket_WSABUFPtr__Class>(type_info, "System.Net.Sockets", "Socket+WSABUF*");
        }
        inline app::Socket_WSABUFPtr* create() {
            return il2cpp::create_object<app::Socket_WSABUFPtr>(get_class());
        }
    } // namespace Socket_WSABUFPtr
} // namespace app::classes::types
