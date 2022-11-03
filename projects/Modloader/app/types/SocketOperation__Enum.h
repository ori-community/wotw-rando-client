#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SocketOperation__Enum {
        inline app::SocketOperation__Enum__Class** type_info = (app::SocketOperation__Enum__Class**)(modloader::win::memory::resolve_rva(0x0476C9B8));
        inline app::SocketOperation__Enum__Class* get_class() {
            return il2cpp::get_class<app::SocketOperation__Enum__Class>(type_info, "System.Net.Sockets", "SocketOperation");
        }
        inline app::SocketOperation__Enum* create() {
            return il2cpp::create_object<app::SocketOperation__Enum>(get_class());
        }
    } // namespace SocketOperation__Enum
} // namespace app::classes::types
