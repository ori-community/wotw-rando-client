#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SocketAddress {
        inline app::SocketAddress__Class** type_info = (app::SocketAddress__Class**)(modloader::win::memory::resolve_rva(0x04761F20));
        inline app::SocketAddress__Class* get_class() {
            return il2cpp::get_class<app::SocketAddress__Class>(type_info, "System.Net", "SocketAddress");
        }
        inline app::SocketAddress* create() {
            return il2cpp::create_object<app::SocketAddress>(get_class());
        }
    } // namespace SocketAddress
} // namespace app::classes::types
