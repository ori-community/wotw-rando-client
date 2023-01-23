#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SocketException__Class.h>
#include <Modloader/app/structs/SocketException.h>

namespace app::classes::types {
    namespace SocketException {
        inline app::SocketException__Class** type_info = (app::SocketException__Class**)(modloader::win::memory::resolve_rva(0x04775690));
        inline app::SocketException__Class* get_class() {
            return il2cpp::get_class<app::SocketException__Class>(type_info, "System.Net.Sockets", "SocketException");
        }
        inline app::SocketException* create() {
            return il2cpp::create_object<app::SocketException>(get_class());
        }
    } // namespace SocketException
} // namespace app::classes::types
