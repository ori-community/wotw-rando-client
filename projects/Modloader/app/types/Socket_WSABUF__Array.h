#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Socket_WSABUF__Array__Class.h>
#include <Modloader/app/structs/Socket_WSABUF__Array.h>

namespace app::classes::types {
    namespace Socket_WSABUF__Array {
        inline app::Socket_WSABUF__Array__Class** type_info = (app::Socket_WSABUF__Array__Class**)(modloader::win::memory::resolve_rva(0x047940A8));
        inline app::Socket_WSABUF__Array__Class* get_class() {
            return il2cpp::get_class<app::Socket_WSABUF__Array__Class>(type_info, "System.Net.Sockets", "Socket+WSABUF[]");
        }
        inline app::Socket_WSABUF__Array* create() {
            return il2cpp::create_object<app::Socket_WSABUF__Array>(get_class());
        }
    } // namespace Socket_WSABUF__Array
} // namespace app::classes::types
