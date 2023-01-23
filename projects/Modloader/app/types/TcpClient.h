#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TcpClient__Class.h>
#include <Modloader/app/structs/TcpClient.h>

namespace app::classes::types {
    namespace TcpClient {
        inline app::TcpClient__Class** type_info = (app::TcpClient__Class**)(modloader::win::memory::resolve_rva(0x0477FBE8));
        inline app::TcpClient__Class* get_class() {
            return il2cpp::get_class<app::TcpClient__Class>(type_info, "System.Net.Sockets", "TcpClient");
        }
        inline app::TcpClient* create() {
            return il2cpp::create_object<app::TcpClient>(get_class());
        }
    } // namespace TcpClient
} // namespace app::classes::types
