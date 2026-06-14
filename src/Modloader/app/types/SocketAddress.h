#pragma once
#include <Modloader/app/structs/SocketAddress.h>
#include <Modloader/app/structs/SocketAddress__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SocketAddress {
        inline app::SocketAddress__Class** type_info() {
            static app::SocketAddress__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SocketAddress__Class**)(modloader::win::memory::resolve_rva(0x04761F20));
            }
            return cache;
        }
        inline app::SocketAddress__Class* get_class() {
            return il2cpp::get_class<app::SocketAddress__Class>(type_info(), "System.Net", "SocketAddress");
        }
        inline app::SocketAddress* create() {
            return il2cpp::create_object<app::SocketAddress>(get_class());
        }
    } // namespace SocketAddress
} // namespace app::classes::types
