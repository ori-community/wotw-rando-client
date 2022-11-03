#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ClientSessionCache {
        inline app::ClientSessionCache__Class** type_info = (app::ClientSessionCache__Class**)(modloader::win::memory::resolve_rva(0x0471F9A0));
        inline app::ClientSessionCache__Class* get_class() {
            return il2cpp::get_class<app::ClientSessionCache__Class>(type_info, "Mono.Security.Protocol.Tls", "ClientSessionCache");
        }
        inline app::ClientSessionCache* create() {
            return il2cpp::create_object<app::ClientSessionCache>(get_class());
        }
    } // namespace ClientSessionCache
} // namespace app::classes::types
