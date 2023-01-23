#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Socket__Class.h>
#include <Modloader/app/structs/Socket.h>

namespace app::classes::types {
    namespace Socket {
        inline app::Socket__Class** type_info = (app::Socket__Class**)(modloader::win::memory::resolve_rva(0x0474A568));
        inline app::Socket__Class* get_class() {
            return il2cpp::get_class<app::Socket__Class>(type_info, "System.Net.Sockets", "Socket");
        }
        inline app::Socket* create() {
            return il2cpp::create_object<app::Socket>(get_class());
        }
    } // namespace Socket
} // namespace app::classes::types
