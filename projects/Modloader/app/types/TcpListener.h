#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TcpListener {
        inline app::TcpListener__Class** type_info = (app::TcpListener__Class**)(modloader::win::memory::resolve_rva(0x04748440));
        inline app::TcpListener__Class* get_class() {
            return il2cpp::get_class<app::TcpListener__Class>(type_info, "System.Net.Sockets", "TcpListener");
        }
        inline app::TcpListener* create() {
            return il2cpp::create_object<app::TcpListener>(get_class());
        }
    } // namespace TcpListener
} // namespace app::classes::types
