#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SocketAsyncResult {
        inline app::SocketAsyncResult__Class** type_info = (app::SocketAsyncResult__Class**)(modloader::win::memory::resolve_rva(0x0472C388));
        inline app::SocketAsyncResult__Class* get_class() {
            return il2cpp::get_class<app::SocketAsyncResult__Class>(type_info, "System.Net.Sockets", "SocketAsyncResult");
        }
        inline app::SocketAsyncResult* create() {
            return il2cpp::create_object<app::SocketAsyncResult>(get_class());
        }
    } // namespace SocketAsyncResult
} // namespace app::classes::types
